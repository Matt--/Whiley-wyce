// Copyright (c) 2011, David J. Pearce (djp@ecs.vuw.ac.nz)
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//    * Neither the name of the <organization> nor the
//      names of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL DAVID J. PEARCE BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

package wyce.testing;

import static org.junit.Assert.fail;

import java.io.*;

import org.junit.*;

import wyc.WycMain;
import wyc.testing.TestUtils;
import wyce.Compiler;
import wyce.Wyce;

 /**
 * Run through all valid test cases with verification disabled. Since every test
 * file is valid, a successful test occurs when the compiler succeeds and, when
 * executed, the compiled file produces the expected output. Note that an
 * internal failure does not count as a valid pass, and indicates the test
 * exposed some kind of compiler bug.
 *
 * @author David J. Pearce
 *
 */
 public class RuntimeValidTests {

 	/**
 	 * The directory containing the source files for each test case. Every test
 	 * corresponds to a file in this directory.
 	 */
 	public final static String WHILEY_SRC_DIR = "tests/valid";

 	/**
 	 * The path to the Whiley RunTime (WyRT) library. This contains the Whiley
 	 * standard library, which includes various helper functions, etc.
 	 */
 	private static String WYRT_PATH = "lib/wyjc-all-v0.3.23.jar";

 	// ======================================================================
 	// Test Harness
 	// ======================================================================

 	/**
 	 * Compile a syntactically invalid test case with verification enabled. The
 	 * expectation is that compilation should fail with an error and, hence, the
 	 * test fails if compilation does not.
 	 *
 	 * @param name
 	 *            Name of the test to run. This must correspond to a whiley
 	 *            source file in the <code>WHILEY_SRC_DIR</code> directory.
 	 */
 	protected void runTest(String name) {
 		// this will need to turn on verification at some point.
 		String path = WHILEY_SRC_DIR + File.separatorChar;

 		int r = TestUtils.compile(
 				"-wd", WHILEY_SRC_DIR,      // location of source directory
 				"-wp", WYRT_PATH,           // add wyrt to whileypath
 				"-X", "runtime:enable=false", // turn off runtime verification
 				path + name + ".whiley");             // name of test to compile

 		if (r != WycMain.SUCCESS) {
 			fail("Test failed to compile!");
 		} else if (r == WycMain.INTERNAL_FAILURE) {
 			fail("Test caused internal failure!");
 		}

 		// Second, use wyce to compile from Whiley bytecode to C
 		String args[] = {"true", path, name};
 		Wyce.main(args);

 		// Third, we need to compile the assembly file with gcc
 		compileWithGcc(WHILEY_SRC_DIR, name, name + ".c");

 		// Fourth, execute the compiled file
 		String output = runNative(WHILEY_SRC_DIR, name);

		// The name of the file which contains the output for this test
		String sampleOutputFile = WHILEY_SRC_DIR + File.separatorChar + name
				+ ".sysout";

 		// Fifth, compare the output!
 		TestUtils.compare(output,sampleOutputFile);
 	}


	public void compileWithGcc(String dir, String target, String... files) {
		try {
			String tmp = "gcc -Wno-format -o " + dir + File.separatorChar + target;
			for (String f : files) {
				tmp += " " + dir + File.separatorChar + f;
			}
			Process p = Runtime.getRuntime().exec(tmp);
			StringBuffer syserr = new StringBuffer();
			StringBuffer sysout = new StringBuffer();
			StreamGrabber pErr = new StreamGrabber(p.getErrorStream(), syserr);
			StreamGrabber pInp = new StreamGrabber(p.getInputStream(), sysout);
			int exitCode = p.waitFor();

			// we will not be ready to examine the output until all three threads have finished
			int cnt = 0;
			while (!pInp.done || !pErr.done) {
				Thread.currentThread().yield();
				// the rest of this loop is likely just garbage; the done's and the yield are the real work
				cnt++;
				if (cnt > 1024*1024*1024) {
					System.err.println("============================================================");
					System.err.println("	foo");
					System.err.println("============================================================");
					return;
				}
			}

			System.err.println(syserr); // propagate anything from the error
			// stream
			if (exitCode != 0) {
				System.err
				.println("============================================================");
				System.err.println(tmp);
				System.err
				.println("============================================================");
				fail("Problem running gcc to compile test");
			}
		} catch (Exception ex) {
			ex.printStackTrace();
			fail("Problem running gcc to compile test");
		}
	}

	public String runNative(String dir, String executable) {
		try {
			Process p = Runtime.getRuntime().exec(dir + File.separatorChar + executable);
			StringBuffer syserr = new StringBuffer();
			StringBuffer sysout = new StringBuffer();
			StreamGrabber pErr = new StreamGrabber(p.getErrorStream(), syserr);
			StreamGrabber pInp = new StreamGrabber(p.getInputStream(), sysout);
//			int exitCode = p.waitFor();

			int cnt = 0;
			while (!pInp.done || !pErr.done) {
				Thread.currentThread().yield();
				// the rest of this loop is likely just garbage; the done's and the yield are the real work
				cnt++;
				if (cnt > 1024*1024*1024) {
					System.err.println("============================================================");
					System.err.println("	foo");
					System.err.println("============================================================");
					return null;
				}
			}

			System.err
					.println("============================================================");
			System.err.println(dir + File.separatorChar + executable);
			System.err
					.println("============================================================");
			System.err.println(syserr); // propagate anything from the error
			// stream
			return sysout.toString();
		} catch (Exception ex) {
			ex.printStackTrace();
			fail("Problem running native executable");
			return null;
		}
	}

	/**
	 * Grab everything produced by a given input stream until the End-Of-File
	 * (EOF) is reached. This is implemented as a separate thread to ensure that
	 * reading from other streams can happen concurrently. For example, we can
	 * read concurrently from <code>stdin</code> and <code>stderr</code> for
	 * some process without blocking that process.
	 *
	 * @author David J. Pearce
	 *
	 */
	static public class StreamGrabber extends Thread {
		private InputStream input;
		private StringBuffer buffer;
		public volatile boolean done;

		StreamGrabber(InputStream input, StringBuffer buffer) {
			this.input = input;
			this.buffer = buffer;
			this.done = false;
			start();
		}

		public void run() {
			try {
				int nextChar;
				// keep reading!!
				while ((nextChar = input.read()) != -1) {
					buffer.append((char) nextChar);
				}
			} catch (IOException ioe) {
				System.err.println("============================================================");
				System.err.println(ioe);
				System.err.println("============================================================");

			} finally {
				done = true;
			}
		}
	}

 	// ======================================================================
 	// Tests
 	// ======================================================================
	@Ignore("unionrecordsxxx")@Test
	public void Access_Valid_1() {
		runTest("Access_Valid_1");
	}

	@Ignore("union string and array") @Test
	public void Access_Valid_2() {
		runTest("Access_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void Assume_Valid_1() {
		runTest("Assume_Valid_1");
	}

	@Test
	public void Assume_Valid_2() {
		runTest("Assume_Valid_2");
	}

	@Test
	public void BoolAssign_Valid_1() {
		runTest("BoolAssign_Valid_1");
	}

	@Test
	public void BoolAssign_Valid_2() {
		runTest("BoolAssign_Valid_2");
	}

	@Test
	public void BoolAssign_Valid_3() {
		runTest("BoolAssign_Valid_3");
	}

	@Test
	public void BoolAssign_Valid_4() {
		runTest("BoolAssign_Valid_4");
	}

	@Test
	public void BoolAssign_Valid_5() {
		runTest("BoolAssign_Valid_5");
	}

	@Test
	public void BoolAssign_Valid_6() {
		runTest("BoolAssign_Valid_6");
	}

	@Test
	public void BoolFun_Valid_1() {
		runTest("BoolFun_Valid_1");
	}

	@Test
	public void BoolIfElse_Valid_1() {
		runTest("BoolIfElse_Valid_1");
	}

	@Test
	public void BoolIfElse_Valid_2() {
		runTest("BoolIfElse_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void BoolList_Valid_1() {
		runTest("BoolList_Valid_1");
	}

	@Ignore("arraysizexxx")@Test
	public void BoolList_Valid_2() {
		runTest("BoolList_Valid_2");
	}

	@Ignore("nestedarraysxxx") @Test
	public void BoolList_Valid_3() {
		runTest("BoolList_Valid_3");
	}

	@Ignore("recordtypes")@Test
	public void BoolRecord_Valid_1() {
		runTest("BoolRecord_Valid_1");
	}

	@Ignore("recordtypes")@Test
	public void BoolRecord_Valid_2() {
		runTest("BoolRecord_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void BoolRequires_Valid_1() {
		runTest("BoolRequires_Valid_1");
	}

	@Test
	public void BoolReturn_Valid_1() {
		runTest("BoolReturn_Valid_1");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_1() {
		runTest("Byte_Valid_1");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_2() {
		runTest("Byte_Valid_2");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_3() {
		runTest("Byte_Valid_3");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_4() {
		runTest("Byte_Valid_4");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_5() {
		runTest("Byte_Valid_5");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_6() {
		runTest("Byte_Valid_6");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_7() {
		runTest("Byte_Valid_7");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_8() {
		runTest("Byte_Valid_8");
	}

	@Ignore("bytetypexxx") @Test
	public void Byte_Valid_9() {
		runTest("Byte_Valid_9");
	}

	@Test
	public void Cast_Valid_1() {
		runTest("Cast_Valid_1");
	}

	@Ignore("arraysizexxx")@Test
	public void Cast_Valid_2() {
		runTest("Cast_Valid_2");
	}

	@Ignore("castingrecordsxxx")@Test
	public void Cast_Valid_3() {
		runTest("Cast_Valid_3");
	}

	@Ignore("castingrecordsxxx")@Test
	public void Cast_Valid_4() {
		runTest("Cast_Valid_4");
	}

	@Ignore("bytetypexxx") @Test
	public void Cast_Valid_5() {
		runTest("Cast_Valid_5");
	}

	@Ignore("printrealxxx")@Test // TODO real string format
	public void Cast_Valid_6() {
		runTest("Cast_Valid_6");
	}

	@Test
	public void Char_Valid_1() {
		runTest("Char_Valid_1");
	}

	@Ignore("printchar")@Test // TODO asks for char 'a' after bytecode converts the char to a string type
	public void Char_Valid_2() {
		runTest("Char_Valid_2");
	}

	@Test
	public void Char_Valid_3() {
		runTest("Char_Valid_3");
	}

	@Ignore("methodoverloadingxxx")@Test // methods cannot accept 'any' either Any or Any[] not both
	public void Char_Valid_4() {
		runTest("Char_Valid_4");
	}

	@Test
	public void Char_Valid_5() {
		runTest("Char_Valid_5");
	}

	@Ignore("rangexxx")@Test // TODO constant arrays
	public void Char_Valid_6() {
		runTest("Char_Valid_6");
	}

	@Test
	public void Char_Valid_7() {
		runTest("Char_Valid_7");
	}

	@Test
	public void Coercion_Valid_1() {
		runTest("Coercion_Valid_1");
	}

	@Ignore("arraysizexxx")@Test
	public void Coercion_Valid_2() {
		runTest("Coercion_Valid_2");
	}

	@Test
	public void Coercion_Valid_3() {
		runTest("Coercion_Valid_3");
	}

	@Ignore("dictionaryxxx")@Test
	public void Coercion_Valid_4() {
		runTest("Coercion_Valid_4");
	}

	@Ignore("setsxxx")@Test
	public void Coercion_Valid_6() {
		runTest("Coercion_Valid_6");
	}

	@Ignore("uniontypes")@Test
	public void Coercion_Valid_7() {
		runTest("Coercion_Valid_7");
	}

	@Ignore("arraysizexxx")@Test
	public void Coercion_Valid_8() {
		runTest("Coercion_Valid_8");
	}

	@Ignore("setsxxx")@Test
	public void Complex_Valid_1() {
		runTest("Complex_Valid_1");
	}

	@Ignore("unionrecordsxxx")@Test
	public void Complex_Valid_2() {
		runTest("Complex_Valid_2");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void Complex_Valid_3() {
		runTest("Complex_Valid_3");
	}

	@Ignore("unionrecordsxxx")@Test
	public void Complex_Valid_4() {
		runTest("Complex_Valid_4");
	}

	@Ignore("constantsxxx")@Test
	public void Complex_Valid_5() {
		runTest("Complex_Valid_5");
	}

	@Ignore("arraysizexxx")@Test
	public void Complex_Valid_6() {
		runTest("Complex_Valid_6");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void Constant_Valid_1() {
		runTest("Constant_Valid_1");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void Constant_Valid_2() {
		runTest("Constant_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void Constant_Valid_3() {
		runTest("Constant_Valid_3");
	}

	@Ignore("dictionaryxxx")@Test
	public void ConstrainedDictionary_Valid_1() {
		runTest("ConstrainedDictionary_Valid_1");
	}

	@Test
	public void ConstrainedInt_Valid_1() {
		runTest("ConstrainedInt_Valid_1");
	}

	@Test
	public void ConstrainedInt_Valid_10() {
		runTest("ConstrainedInt_Valid_10");
	}

	@Test
	public void ConstrainedInt_Valid_12() {
		runTest("ConstrainedInt_Valid_12");
	}

	@Ignore("recordtypes")@Test
	public void ConstrainedInt_Valid_13() {
		runTest("ConstrainedInt_Valid_13");
	}

	@Ignore("recordtypes")@Test
	public void ConstrainedInt_Valid_14() {
		runTest("ConstrainedInt_Valid_14");
	}

	@Ignore("typewhereconditionxxx")@Test
	public void ConstrainedInt_Valid_15() {
		runTest("ConstrainedInt_Valid_15");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedInt_Valid_16() {
		runTest("ConstrainedInt_Valid_16");
	}

	@Test
	public void ConstrainedInt_Valid_17() {
		runTest("ConstrainedInt_Valid_17");
	}

	@Test
	public void ConstrainedInt_Valid_18() {
		runTest("ConstrainedInt_Valid_18");
	}

	@Ignore("arraysizexxx")@Test
	public void ConstrainedInt_Valid_19() {
		runTest("ConstrainedInt_Valid_19");
	}

	@Test
	public void ConstrainedInt_Valid_2() {
		runTest("ConstrainedInt_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void ConstrainedInt_Valid_20() {
		runTest("ConstrainedInt_Valid_20");
	}

	@Test
	public void ConstrainedInt_Valid_21() {
		runTest("ConstrainedInt_Valid_21");
	}

	@Test
	public void ConstrainedInt_Valid_22() {
		runTest("ConstrainedInt_Valid_22");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedInt_Valid_23() {
		runTest("ConstrainedInt_Valid_23");
	}

	@Test
	public void ConstrainedInt_Valid_3() {
		runTest("ConstrainedInt_Valid_3");
	}

	@Ignore("typewhereconditionxxx") @Test
	public void ConstrainedInt_Valid_4() {
		runTest("ConstrainedInt_Valid_4");
	}

	@Test
	public void ConstrainedInt_Valid_5() {
		runTest("ConstrainedInt_Valid_5");
	}

	@Ignore("setsxxx") @Test
	public void ConstrainedInt_Valid_6() {
		runTest("ConstrainedInt_Valid_6");
	}

	@Ignore("setsxxx") @Test
	public void ConstrainedInt_Valid_8() {
		runTest("ConstrainedInt_Valid_8");
	}

	@Ignore("arraysizexxx")@Test
	public void ConstrainedList_Valid_1() {
		runTest("ConstrainedList_Valid_1");
	}

	@Ignore("recordsizexxx")@Test
	public void ConstrainedList_Valid_11() {
		runTest("ConstrainedList_Valid_11");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_12() {
		runTest("ConstrainedList_Valid_12");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_14() {
		runTest("ConstrainedList_Valid_14");
	}

	@Test
	public void ConstrainedList_Valid_15() {
		runTest("ConstrainedList_Valid_15");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_16() {
		runTest("ConstrainedList_Valid_16");
	}

	@Ignore("nestedarraysxxx") @Test
	public void ConstrainedList_Valid_17() {
		runTest("ConstrainedList_Valid_17");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_18() {
		runTest("ConstrainedList_Valid_18");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_19() {
		runTest("ConstrainedList_Valid_19");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_2() {
		runTest("ConstrainedList_Valid_2");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_20() {
		runTest("ConstrainedList_Valid_20");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_21() {
		runTest("ConstrainedList_Valid_21");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_22() {
		runTest("ConstrainedList_Valid_22");
	}

	@Ignore("nestedarraysxxx") @Test
	public void ConstrainedList_Valid_23() {
		runTest("ConstrainedList_Valid_23");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_24() {
		runTest("ConstrainedList_Valid_24");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_25() {
		runTest("ConstrainedList_Valid_25");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_26() {
		runTest("ConstrainedList_Valid_26");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_3() {
		runTest("ConstrainedList_Valid_3");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_4() {
		runTest("ConstrainedList_Valid_4");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_5() {
		runTest("ConstrainedList_Valid_5");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_6() {
		runTest("ConstrainedList_Valid_6");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_7() {
		runTest("ConstrainedList_Valid_7");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_8() {
		runTest("ConstrainedList_Valid_8");
	}

	@Ignore("arraysizexxx") @Test
	public void ConstrainedList_Valid_9() {
		runTest("ConstrainedList_Valid_9");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void ConstrainedNegation_Valid_1() {
		runTest("ConstrainedNegation_Valid_1");
	}

	@Ignore("arraysizexxx")@Test
	public void ConstrainedRecord_Valid_1() {
		runTest("ConstrainedRecord_Valid_1");
	}

	@Ignore("constantxxx")@Test
	public void ConstrainedRecord_Valid_2() {
		runTest("ConstrainedRecord_Valid_2");
	}

	@Ignore("arrayinmethodscope")@Test
	public void ConstrainedRecord_Valid_3() {
		runTest("ConstrainedRecord_Valid_3");
	}

	@Ignore("recordtypes")@Test
	public void ConstrainedRecord_Valid_4() {
		runTest("ConstrainedRecord_Valid_4");
	}

	@Ignore("recordtypes")@Test
	public void ConstrainedRecord_Valid_5() {
		runTest("ConstrainedRecord_Valid_5");
	}

	@Ignore("recordtypes")@Test
	public void ConstrainedRecord_Valid_6() {
		runTest("ConstrainedRecord_Valid_6");
	}

	@Ignore("constantxxx")@Test
	public void ConstrainedRecord_Valid_8() {
		runTest("ConstrainedRecord_Valid_8");
	}

	@Ignore("nestedarrays")@Test
	public void ConstrainedRecord_Valid_9() {
		runTest("ConstrainedRecord_Valid_9");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_1() {
		runTest("ConstrainedSet_Valid_1");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_2() {
		runTest("ConstrainedSet_Valid_2");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_3() {
		runTest("ConstrainedSet_Valid_3");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_4() {
		runTest("ConstrainedSet_Valid_4");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_5() {
		runTest("ConstrainedSet_Valid_5");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_6() {
		runTest("ConstrainedSet_Valid_6");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_7() {
		runTest("ConstrainedSet_Valid_7");
	}

	@Ignore("setsxxx")@Test
	public void ConstrainedSet_Valid_8() {
		runTest("ConstrainedSet_Valid_8");
	}

	@Ignore("tuplesxxx")@Test
	public void ConstrainedTuple_Valid_1() {
		runTest("ConstrainedTuple_Valid_1");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void Contractive_Valid_1() {
		runTest("Contractive_Valid_1");
	}

	@Ignore("uniontypes")@Test
	public void Contractive_Valid_2() {
		runTest("Contractive_Valid_2");
	}

	@Ignore("printrealxxx")@Test // needs real to print as (-154/125)
	public void DecimalAssignment_Valid_1() {
		runTest("DecimalAssignment_Valid_1");
	}

	@Ignore("arraysizexxx")@Test
	public void Define_Valid_1() {
		runTest("Define_Valid_1");
	}

	@Ignore("recordtypes")@Test
	public void Define_Valid_2() {
		runTest("Define_Valid_2");
	}

	@Test
	public void Define_Valid_3() {
		runTest("Define_Valid_3");
	}

	@Ignore("recordcontainsarrayxxx")@Test
	public void Define_Valid_4() {
		runTest("Define_Valid_4");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_1() {
		runTest("Dictionary_Valid_1");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_10() {
		runTest("Dictionary_Valid_10");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_11() {
		runTest("Dictionary_Valid_11");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_12() {
		runTest("Dictionary_Valid_12");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_13() {
		runTest("Dictionary_Valid_13");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_14() {
		runTest("Dictionary_Valid_14");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_15() {
		runTest("Dictionary_Valid_15");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_16() {
		runTest("Dictionary_Valid_16");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_2() {
		runTest("Dictionary_Valid_2");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_3() {
		runTest("Dictionary_Valid_3");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_4() {
		runTest("Dictionary_Valid_4");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_5() {
		runTest("Dictionary_Valid_5");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_6() {
		runTest("Dictionary_Valid_6");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_7() {
		runTest("Dictionary_Valid_7");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_8() {
		runTest("Dictionary_Valid_8");
	}

	@Ignore("dictionaryxxx")@Test
	public void Dictionary_Valid_9() {
		runTest("Dictionary_Valid_9");
	}

	@Ignore("arraysizexxx") @Test
	public void DoWhile_Valid_1() {
		runTest("DoWhile_Valid_1");
	}

	@Test
	public void DoWhile_Valid_2() {
		runTest("DoWhile_Valid_2");
	}

	@Test
	public void DoWhile_Valid_3() {
		runTest("DoWhile_Valid_3");
	}

	@Ignore("unionrecordsxxx")@Test
	public void DoWhile_Valid_4() {
		runTest("DoWhile_Valid_4");
	}

	@Ignore("arraysizexxx") @Test
	public void DoWhile_Valid_5() {
		runTest("DoWhile_Valid_5");
	}

	@Ignore("arraysizexxx")@Test
	public void EffectiveList_Valid_1() {
		runTest("EffectiveList_Valid_1");
	}

	@Test
	public void Ensures_Valid_1() {
		runTest("Ensures_Valid_1");
	}

	@Test
	public void Ensures_Valid_2() {
		runTest("Ensures_Valid_2");
	}

	@Ignore("setsxxx")@Test
	public void Ensures_Valid_3() {
		runTest("Ensures_Valid_3");
	}

	@Test
	public void Ensures_Valid_4() {
		runTest("Ensures_Valid_4");
	}

	@Test
	public void Ensures_Valid_5() {
		runTest("Ensures_Valid_5");
	}

	@Ignore("badtestxxx")@Test
	public void Ensures_Valid_6() {
		runTest("Ensures_Valid_6");
	}

	@Ignore("badtestxxx")@Test
	public void Ensures_Valid_7() {
		runTest("Ensures_Valid_7");
	}

	@Ignore("arraysizexxx")@Test
	public void For_Valid_1() {
		runTest("For_Valid_1");
	}

	@Ignore("arraysizexxx")@Test
	public void For_Valid_10() {
		runTest("For_Valid_10");
	}

	@Ignore("arraysizexxx")@Test
	public void For_Valid_11() {
		runTest("For_Valid_11");
	}

	@Ignore("setsizexxx")@Test
	public void For_Valid_12() {
		runTest("For_Valid_12");
	}

	@Ignore("setsizesxxx")@Test
	public void For_Valid_13() {
		runTest("For_Valid_13");
	}

	@Ignore("arraysizexxx")@Test
	public void For_Valid_14() {
		runTest("For_Valid_14");
	}

	@Ignore("typewhereconditionxxx") @Test
	public void For_Valid_15() {
		runTest("For_Valid_15");
	}

	@Ignore("arraysizexxx")@Test
	public void For_Valid_16() {
		runTest("For_Valid_16");
	}

	@Ignore("setsxxx")@Test
	public void For_Valid_17() {
		runTest("For_Valid_17");
	}

	@Ignore("setsxxx")@Test
	public void For_Valid_18() {
		runTest("For_Valid_18");
	}

	@Ignore("arraysizexxx") @Test
	public void For_Valid_2() {
		runTest("For_Valid_2");
	}

	@Ignore("tuplesxxx")@Test
	public void For_Valid_3() {
		runTest("For_Valid_3");
	}

	@Ignore("arraysizexxx") @Test
	public void For_Valid_4() {
		runTest("For_Valid_4");
	}

	@Ignore("tuplesxxx") @Test
	public void For_Valid_5() {
		runTest("For_Valid_5");
	}

	@Ignore("notwyccompiledxxx") @Test
	public void For_Valid_6() {
		runTest("For_Valid_6");
	}

	@Ignore("arraysizexxx")@Test
	public void For_Valid_7() {
		runTest("For_Valid_7");
	}

	@Ignore("forinloopxxx")@Test //TODO
	public void For_Valid_8() {
		runTest("For_Valid_8");
	}

	@Ignore("forinloopxxx")@Test //TODO
	public void For_Valid_9() {
		runTest("For_Valid_9");
	}

	@Test
	public void FunctionRef_Valid_1() {
		runTest("FunctionRef_Valid_1");
	}

	@Ignore("notwyccompiled")@Test
	public void FunctionRef_Valid_2() {
		runTest("FunctionRef_Valid_2");
	}

	@Test
	public void FunctionRef_Valid_3() {
		runTest("FunctionRef_Valid_3");
	}

	@Ignore("Constantarrayxxx")@Test
	public void FunctionRef_Valid_4() {
		runTest("FunctionRef_Valid_4");
	}

	@Ignore("recordtypes")@Test
	public void FunctionRef_Valid_5() {
		runTest("FunctionRef_Valid_5");
	}

	@Ignore("recordtypes")@Test
	public void FunctionRef_Valid_6() {
		runTest("FunctionRef_Valid_6");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void FunctionRef_Valid_7() {
		runTest("FunctionRef_Valid_7");
	}

	@Test
	public void FunctionRef_Valid_8() {
		runTest("FunctionRef_Valid_8");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void FunctionRef_Valid_9() {
		runTest("FunctionRef_Valid_9");
	}

	@Ignore("methodoverloadingxxx")@Test // failing as cannot do method overloading
	public void Function_Valid_1() {
		runTest("Function_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void Function_Valid_10() {
		runTest("Function_Valid_10");
	}

	@Ignore("methodoverloadingxxx")@Test
	public void Function_Valid_12() {
		runTest("Function_Valid_12");
	}

	@Ignore("recordtype")@Test
	public void Function_Valid_13() {
		runTest("Function_Valid_13");
	}

	@Ignore("setsxxx") @Test
	public void Function_Valid_14() {
		runTest("Function_Valid_14");
	}

	@Ignore("arraysizexxx")@Test
	public void Function_Valid_16() {
		runTest("Function_Valid_16");
	}

	@Ignore("arraysizexxx")@Test
	public void Function_Valid_17() {
		runTest("Function_Valid_17");
	}

	@Test
	public void Function_Valid_18() {
		runTest("Function_Valid_18");
	}

	@Ignore("assertsxxx") @Test
	public void Function_Valid_19() {
		runTest("Function_Valid_19");
	}

	@Test
	public void Function_Valid_2() {
		runTest("Function_Valid_2");
	}

	@Test
	public void Function_Valid_20() {
		runTest("Function_Valid_20");
	}

	@Test
	public void Function_Valid_21() {
		runTest("Function_Valid_21");
	}

	@Ignore("bignumberxxx") @Test
	public void Function_Valid_3() {
		runTest("Function_Valid_3");
	}

	@Test
	public void Function_Valid_4() {
		runTest("Function_Valid_4");
	}

	@Test
	public void Function_Valid_5() {
		runTest("Function_Valid_5");
	}

	@Ignore("setsxxx")@Test
	public void Function_Valid_6() {
		runTest("Function_Valid_6");
	}

	@Ignore("setsxxx") @Test
	public void Function_Valid_7() {
		runTest("Function_Valid_7");
	}

	@Ignore("setsxxx") @Test
	public void Function_Valid_8() {
		runTest("Function_Valid_8");
	}

	@Ignore("setsxxx")@Test
	public void Function_Valid_9() {
		runTest("Function_Valid_9");
	}

	@Test
	public void HexAssign_Valid_1() {
		runTest("HexAssign_Valid_1");
	}

	@Test
	public void IfElse_Valid_1() {
		runTest("IfElse_Valid_1");
	}

	@Test
	public void IfElse_Valid_2() {
		runTest("IfElse_Valid_2");
	}

	@Test
	public void IfElse_Valid_3() {
		runTest("IfElse_Valid_3");
	}

	@Ignore("unionrecordsxxx")@Test
	public void IfElse_Valid_4() {
		runTest("IfElse_Valid_4");
	}

	@Test
	public void Import_Valid_1() {
		runTest("Import_Valid_1");
	}

	@Test
	public void Import_Valid_2() {
		runTest("Import_Valid_2");
	}

	@Ignore("arraysizexxx") @Test
	public void Import_Valid_3() {
		runTest("Import_Valid_3");
	}

	@Test
	public void Import_Valid_4() {
		runTest("Import_Valid_4");
	}

	@Test
	public void Import_Valid_5() {
		runTest("Import_Valid_5");
	}

	@Test
	public void Import_Valid_6() {
		runTest("Import_Valid_6");
	}

	@Test
	public void Import_Valid_7() {
		runTest("Import_Valid_7");
	}

	@Ignore("bignumberxxx") @Test
	public void IntConst_Valid_1() {
		runTest("IntConst_Valid_1");
	}

	@Test
	public void IntDefine_Valid_1() {
		runTest("IntDefine_Valid_1");
	}

	@Test
	public void IntDefine_Valid_2() {
		runTest("IntDefine_Valid_2");
	}

	@Test
	public void IntDiv_Valid_1() {
		runTest("IntDiv_Valid_1");
	}

	@Test
	public void IntDiv_Valid_3() {
		runTest("IntDiv_Valid_3");
	}

	@Test
	public void IntDiv_Valid_4() {
		runTest("IntDiv_Valid_4");
	}

	@Ignore("tuplesxxx") @Test
	public void IntDiv_Valid_5() {
		runTest("IntDiv_Valid_5");
	}

	@Test
	public void IntEquals_Valid_1() {
		runTest("IntEquals_Valid_1");
	}

	@Test
	public void IntMul_Valid_1() {
		runTest("IntMul_Valid_1");
	}
	@Test // fails as not following BODMAS
	public void IntMul_Valid_2() {
		runTest("IntMul_Valid_2");
	}

	@Ignore("bignumberxxx") @Test
	public void IntOp_Valid_1() {
		runTest("IntOp_Valid_1");
	}

	@Ignore("notwyccompiledxxx") @Test
	public void Intersection_Valid_1() {
		runTest("Intersection_Valid_1");
	}

	@Ignore("notwyccompiledxxx") @Test
	public void Intersection_Valid_2() {
		runTest("Intersection_Valid_2");
	}

	@Test
	public void Lambda_Valid_1() {
		runTest("Lambda_Valid_1");
	}

	@Ignore("Complicated")@Test
	public void Lambda_Valid_2() {
		runTest("Lambda_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void Lambda_Valid_3() {
		runTest("Lambda_Valid_3");
	}

	@Ignore("arraysizexxx")@Test
	public void Lambda_Valid_4() {
		runTest("Lambda_Valid_4");
	}

	@Test
	public void Lambda_Valid_5() {
		runTest("Lambda_Valid_5");
	}

	@Test
	public void Lambda_Valid_6() {
		runTest("Lambda_Valid_6");
	}

	@Test
	public void Lambda_Valid_7() {
		runTest("Lambda_Valid_7");
	}

	@Ignore("returnsfunction")@Test
	public void Lambda_Valid_8() {
		runTest("Lambda_Valid_8");
	}

	@Ignore("setsxxx") @Test
	public void LengthOf_Valid_1() {
		runTest("LengthOf_Valid_1");
	}

	@Ignore("arraysizexxx")@Test
	public void LengthOf_Valid_2() {
		runTest("LengthOf_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void LengthOf_Valid_3() {
		runTest("LengthOf_Valid_3");
	}

	@Ignore("arraysizexxx")@Test
	public void LengthOf_Valid_4() {
		runTest("LengthOf_Valid_4");
	}

	@Ignore("arraysizexxx") @Test
	public void LengthOf_Valid_5() {
		runTest("LengthOf_Valid_5");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAccess_Valid_1() {
		runTest("ListAccess_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListAccess_Valid_3() {
		runTest("ListAccess_Valid_3");
	}

	@Ignore("nestedarraysxxx") @Test
	public void ListAccess_Valid_5() {
		runTest("ListAccess_Valid_5");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void ListAccess_Valid_6() {
		runTest("ListAccess_Valid_6");
	}

	@Ignore("notwyccompiledxxx") @Test
	public void ListAccess_Valid_7() {
		runTest("ListAccess_Valid_7");
	}

	@Ignore("bytetypexxx") @Test
	public void ListAccess_Valid_8() {
		runTest("ListAccess_Valid_8");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_1() {
		runTest("ListAppend_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListAppend_Valid_11() {
		runTest("ListAppend_Valid_11");
	}

	@Ignore("arraysizexxx") @Test
	public void ListAppend_Valid_13() {
		runTest("ListAppend_Valid_13");
	}

	@Ignore("arraysizexxx") @Test
	public void ListAppend_Valid_14() {
		runTest("ListAppend_Valid_14");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_2() {
		runTest("ListAppend_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_3() {
		runTest("ListAppend_Valid_3");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_4() {
		runTest("ListAppend_Valid_4");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_5() {
		runTest("ListAppend_Valid_5");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_6() {
		runTest("ListAppend_Valid_6");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_7() {
		runTest("ListAppend_Valid_7");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_8() {
		runTest("ListAppend_Valid_8");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAppend_Valid_9() {
		runTest("ListAppend_Valid_9");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAssign_Valid_1() {
		runTest("ListAssign_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListAssign_Valid_11() {
		runTest("ListAssign_Valid_11");
	}

	@Ignore("nestedarraysxxx") @Test
	public void ListAssign_Valid_2() {
		runTest("ListAssign_Valid_2");
	}

	@Ignore("nestedarraysxxx")@Test
	public void ListAssign_Valid_3() {
		runTest("ListAssign_Valid_3");
	}

	@Ignore("setsxxx")@Test
	public void ListAssign_Valid_4() {
		runTest("ListAssign_Valid_4");
	}

	@Ignore("nestedarraysxxx")@Test
	public void ListAssign_Valid_5() {
		runTest("ListAssign_Valid_5");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAssign_Valid_6() {
		runTest("ListAssign_Valid_6");
	}

	@Ignore("arraysizexxx")@Test
	public void ListAssign_Valid_7() {
		runTest("ListAssign_Valid_7");
	}

	@Ignore("nestedarraysxxx") @Test
	public void ListAssign_Valid_8() {
		runTest("ListAssign_Valid_8");
	}

	@Ignore("returnslocalarrayxxx")@Test
	public void ListAssign_Valid_9() {
		runTest("ListAssign_Valid_9");
	}

	@Ignore("arraysizexxx") @Test
	public void ListConversion_Valid_1() {
		runTest("ListConversion_Valid_1");
	}

	@Ignore("searcharrayxxx")@Test
	public void ListElemOf_Valid_1() {
		runTest("ListElemOf_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListEmpty_Valid_1() {
		runTest("ListEmpty_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListEquals_Valid_1() {
		runTest("ListEquals_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListGenerator_Valid_1() {
		runTest("ListGenerator_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListGenerator_Valid_2() {
		runTest("ListGenerator_Valid_2");
	}

	@Ignore("arraysizexxx") @Test
	public void ListGenerator_Valid_3() {
		runTest("ListGenerator_Valid_3");
	}

	@Ignore("arraysizexxx")@Test
	public void ListGenerator_Valid_5() {
		runTest("ListGenerator_Valid_5");
	}

	@Ignore("arraysizexxx") @Test
	public void ListLength_Valid_1() {
		runTest("ListLength_Valid_1");
	}

	@Test
	public void ListLength_Valid_2() {
		runTest("ListLength_Valid_2");
	}

	@Test
	public void ListLength_Valid_3() {
		runTest("ListLength_Valid_3");
	}

	@Ignore("rangexxx")@Test
	public void ListRange_Valid_1() {
		runTest("ListRange_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListSublist_Valid_1() {
		runTest("ListSublist_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void ListSublist_Valid_2() {
		runTest("ListSublist_Valid_2");
	}

	@Ignore("arraysizexxx") @Test
	public void ListSublist_Valid_3() {
		runTest("ListSublist_Valid_3");
	}

	@Ignore("rangexxx")@Test
	public void ListSublist_Valid_4() {
		runTest("ListSublist_Valid_4");
	}

	@Ignore("arraysizexxx") @Test
	public void ListSublist_Valid_5() {
		runTest("ListSublist_Valid_5");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void MessageRef_Valid_1() {
		runTest("MessageRef_Valid_1");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void MessageRef_Valid_2() {
		runTest("MessageRef_Valid_2");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void MessageSend_Valid_1() {
		runTest("MessageSend_Valid_1");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void MessageSend_Valid_2() {
		runTest("MessageSend_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void MessageSend_Valid_3() {
		runTest("MessageSend_Valid_3");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void MessageSend_Valid_4() {
		runTest("MessageSend_Valid_4");
	}

	@Ignore("arraysizexxx")@Test
	public void MessageSend_Valid_5() {
		runTest("MessageSend_Valid_5");
	}

	@Ignore("complicated")@Test
	public void MethodCall_Valid_1() {
		runTest("MethodCall_Valid_1");
	}

	@Ignore("arrayinmethodscope")@Test
	public void MethodCall_Valid_2() {
		runTest("MethodCall_Valid_2");
	}

	@Ignore("recordtypes")@Test
	public void MethodCall_Valid_3() {
		runTest("MethodCall_Valid_3");
	}

	@Ignore("arraysizexxx")@Test
	public void MethodCall_Valid_4() {
		runTest("MethodCall_Valid_4");
	}

	@Ignore("methodtypexxx")@Test
	public void MethodRef_Valid_1() {
		runTest("MethodRef_Valid_1");
	}

	@Ignore("recordtypes")@Test
	public void MethodRef_Valid_2() {
		runTest("MethodRef_Valid_2");
	}

	@Ignore("setsxxx") @Test
	public void Method_Valid_1() {
		runTest("Method_Valid_1");
	}

	@Test
	public void MultiLineComment_Valid_1() {
		runTest("MultiLineComment_Valid_1");
	}

	@Test
	public void MultiLineComment_Valid_2() {
		runTest("MultiLineComment_Valid_2");
	}

	@Ignore("arraysizexxx")@Test
	public void NegationType_Valid_1() {
		runTest("NegationType_Valid_1");
	}

	@Test
	public void NegationType_Valid_2() {
		runTest("NegationType_Valid_2");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void NegationType_Valid_3() {
		runTest("NegationType_Valid_3");
	}

	@Ignore("uniontypes")@Test
	public void NegationType_Valid_4() {
		runTest("NegationType_Valid_4");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_1() {
		runTest("OpenRecord_Valid_1");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_10() {
		runTest("OpenRecord_Valid_10");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_2() {
		runTest("OpenRecord_Valid_2");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_3() {
		runTest("OpenRecord_Valid_3");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_4() {
		runTest("OpenRecord_Valid_4");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_5() {
		runTest("OpenRecord_Valid_5");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_6() {
		runTest("OpenRecord_Valid_6");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_7() {
		runTest("OpenRecord_Valid_7");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_8() {
		runTest("OpenRecord_Valid_8");
	}

	@Ignore("openrecordsxxx")@Test
	public void OpenRecord_Valid_9() {
		runTest("OpenRecord_Valid_9");
	}

	@Test
	public void Print_Valid_1() {
		runTest("Print_Valid_1");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void ProcessAccess_Valid_1() {
		runTest("ProcessAccess_Valid_1");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void ProcessAccess_Valid_2() {
		runTest("ProcessAccess_Valid_2");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void Process_Valid_1() {
		runTest("Process_Valid_1");
	}

	@Ignore("recordsizexxx")@Test
	public void Process_Valid_10() {
		runTest("Process_Valid_10");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void Process_Valid_11() {
		runTest("Process_Valid_11");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void Process_Valid_12() {
		runTest("Process_Valid_12");
	}

	@Test
	public void Process_Valid_13() {
		runTest("Process_Valid_13");
	}

	@Test
	public void Process_Valid_14() {
		runTest("Process_Valid_14");
	}

	@Test
	public void Process_Valid_2() {
		runTest("Process_Valid_2");
	}

	@Test
	public void Process_Valid_3() {
		runTest("Process_Valid_3");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void Process_Valid_4() {
		runTest("Process_Valid_4");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void Process_Valid_5() {
		runTest("Process_Valid_5");
	}

	@Ignore("arraysizexxx")@Test
	public void Process_Valid_6() {
		runTest("Process_Valid_6");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void Process_Valid_7() {
		runTest("Process_Valid_7");
	}

	@Ignore("passrecordaddressxxx")@Test
	public void Process_Valid_8() {
		runTest("Process_Valid_8");
	}

	@Ignore("arraysizexxx")@Test
	public void Process_Valid_9() {
		runTest("Process_Valid_9");
	}

	@Ignore("setsxxx")@Test
	public void Quantifiers_Valid_1() {
		runTest("Quantifiers_Valid_1");
	}

	@Ignore("rangexxx")@Test
	public void Range_Valid_1() {
		runTest("Range_Valid_1");
	}

	@Ignore("bignumberxxx")@Test
	public void RealConst_Valid_1() {
		runTest("RealConst_Valid_1");
	}

	@Ignore("printrealxxx")@Test // TODO
	public void RealDiv_Valid_1() {
		runTest("RealDiv_Valid_1");
	}

	@Ignore("printrealxxx")@Test // TODO
	public void RealDiv_Valid_2() {
		runTest("RealDiv_Valid_2");
	}

	@Test
	public void RealDiv_Valid_3() {
		runTest("RealDiv_Valid_3");
	}

	@Test
	public void RealDiv_Valid_4() {
		runTest("RealDiv_Valid_4");
	}

	@Test
	public void RealDiv_Valid_5() {
		runTest("RealDiv_Valid_5");
	}

	@Test
	public void RealDiv_Valid_6() {
		runTest("RealDiv_Valid_6");
	}

	@Ignore("printrealxxx")@Test // TODO
	public void RealDiv_Valid_7() {
		runTest("RealDiv_Valid_7");
	}

	@Ignore("printrealxxx")@Test
	public void RealNeg_Valid_1() {
		runTest("RealNeg_Valid_1");
	}

	@Ignore("printrealxxx")@Test
	public void RealNeg_Valid_2() {
		runTest("RealNeg_Valid_2");
	}

	@Ignore("tuplesxxx") @Test
	public void RealSplit_Valid_1() {
		runTest("RealSplit_Valid_1");
	}

	@Ignore("printrealxxx")@Test
	public void RealSub_Valid_1() {
		runTest("RealSub_Valid_1");
	}

	@Ignore("printrealxxx")@Test
	public void RealSub_Valid_2() {
		runTest("RealSub_Valid_2");
	}

	@Ignore("printrealxxx")@Test
	public void RealSub_Valid_3() {
		runTest("RealSub_Valid_3");
	}

	@Test
	public void Real_Valid_1() {
		runTest("Real_Valid_1");
	}

	@Ignore("openrecordsxxx")@Test
	public void RecordAccess_Valid_1() {
		runTest("RecordAccess_Valid_1");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecordAccess_Valid_2() {
		runTest("RecordAccess_Valid_2");
	}

	@Ignore("recordtypes")@Test
	public void RecordAssign_Valid_1() {
		runTest("RecordAssign_Valid_1");
	}

	@Ignore("recordtypes")@Test
	public void RecordAssign_Valid_10() {
		runTest("RecordAssign_Valid_10");
	}

	@Ignore("nestedrecordsxxx")@Test
	public void RecordAssign_Valid_2() {
		runTest("RecordAssign_Valid_2");
	}

	@Ignore("recordtypes")@Test
	public void RecordAssign_Valid_3() {
		runTest("RecordAssign_Valid_3");
	}

	@Ignore("duplicaterecordtypesignature")@Test
	public void RecordAssign_Valid_4() {
		runTest("RecordAssign_Valid_4");
	}

	@Ignore("duplicaterecordtypesignature")@Test
	public void RecordAssign_Valid_5() {
		runTest("RecordAssign_Valid_5");
	}

	@Ignore("recordtypes")@Test
	public void RecordAssign_Valid_6() {
		runTest("RecordAssign_Valid_6");
	}

	@Ignore("assignrecordtoany")@Test
	public void RecordAssign_Valid_7() {
		runTest("RecordAssign_Valid_7");
	}

	@Ignore("recordtypes")@Test
	public void RecordAssign_Valid_8() {
		runTest("RecordAssign_Valid_8");
	}

	@Ignore("Union type")@Test
	public void RecordAssign_Valid_9() {
		runTest("RecordAssign_Valid_9");
	}

	@Ignore("realtonum/den")@Test
	public void RecordCoercion_Valid_1() {
		runTest("RecordCoercion_Valid_1");
	}

	@Ignore("recordconversion")@Test
	public void RecordConversion_Valid_1() {
		runTest("RecordConversion_Valid_1");
	}

	@Ignore("recordtype")@Test
	public void RecordDefine_Valid_1() {
		runTest("RecordDefine_Valid_1");
	}

	@Ignore("recordtype")@Test
	public void RecordDefine_Valid_2() {
		runTest("RecordDefine_Valid_2");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void RecordSubtype_Valid_1() {
		runTest("RecordSubtype_Valid_1");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void RecordSubtype_Valid_2() {
		runTest("RecordSubtype_Valid_2");
	}

	@Test
	public void RecursiveType_Valid_1() {
		runTest("RecursiveType_Valid_1");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_10() {
		runTest("RecursiveType_Valid_10");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_11() {
		runTest("RecursiveType_Valid_11");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_12() {
		runTest("RecursiveType_Valid_12");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_13() {
		runTest("RecursiveType_Valid_13");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_14() {
		runTest("RecursiveType_Valid_14");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_15() {
		runTest("RecursiveType_Valid_15");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_16() {
		runTest("RecursiveType_Valid_16");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_17() {
		runTest("RecursiveType_Valid_17");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_18() {
		runTest("RecursiveType_Valid_18");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_19() {
		runTest("RecursiveType_Valid_19");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_2() {
		runTest("RecursiveType_Valid_2");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_20() {
		runTest("RecursiveType_Valid_20");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_21() {
		runTest("RecursiveType_Valid_21");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_22() {
		runTest("RecursiveType_Valid_22");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_23() {
		runTest("RecursiveType_Valid_23");
	}

	@Ignore("unionwitharrayxxx")@Test
	public void RecursiveType_Valid_24() {
		runTest("RecursiveType_Valid_24");
	}

	@Ignore("unionwitharrayxxx") @Test
	public void RecursiveType_Valid_25() {
		runTest("RecursiveType_Valid_25");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_26() {
		runTest("RecursiveType_Valid_26");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_27() {
		runTest("RecursiveType_Valid_27");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void RecursiveType_Valid_28() {
		runTest("RecursiveType_Valid_28");
	}

	@Ignore("arraysizexxx")@Test
	public void RecursiveType_Valid_3() {
		runTest("RecursiveType_Valid_3");
	}

	@Ignore("arraysizexxx")@Test
	public void RecursiveType_Valid_4() {
		runTest("RecursiveType_Valid_4");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void RecursiveType_Valid_5() {
		runTest("RecursiveType_Valid_5");
	}

	@Test
	public void RecursiveType_Valid_6() {
		runTest("RecursiveType_Valid_6");
	}

	@Ignore("unionrecordsxxx")@Test
	public void RecursiveType_Valid_7() {
		runTest("RecursiveType_Valid_7");
	}

	@Test
	public void RecursiveType_Valid_8() {
		runTest("RecursiveType_Valid_8");
	}

	@Test
	public void RecursiveType_Valid_9() {
		runTest("RecursiveType_Valid_9");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void Reference_Valid_1() {
		runTest("Reference_Valid_1");
	}

	@Test
	public void Remainder_Valid_1() {
		runTest("Remainder_Valid_1");
	}

	@Ignore("debugxxx") @Test
	public void Requires_Valid_1() {
		runTest("Requires_Valid_1");
	}

	@Test
	public void Resolution_Valid_1() {
		runTest("Resolution_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetAssign_Valid_1() {
		runTest("SetAssign_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetAssign_Valid_2() {
		runTest("SetAssign_Valid_2");
	}

	@Ignore("setsxxx") @Test
	public void SetAssign_Valid_3() {
		runTest("SetAssign_Valid_3");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_1() {
		runTest("SetComprehension_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_10() {
		runTest("SetComprehension_Valid_10");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_11() {
		runTest("SetComprehension_Valid_11");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_12() {
		runTest("SetComprehension_Valid_12");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_2() {
		runTest("SetComprehension_Valid_2");
	}

	@Ignore("unionsetsxxx")@Test
	public void SetComprehension_Valid_3() {
		runTest("SetComprehension_Valid_3");
	}

	@Ignore("unionsetsxxx")@Test
	public void SetComprehension_Valid_4() {
		runTest("SetComprehension_Valid_4");
	}

	@Ignore("unionsetsxxx")@Test
	public void SetComprehension_Valid_5() {
		runTest("SetComprehension_Valid_5");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_6() {
		runTest("SetComprehension_Valid_6");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_7() {
		runTest("SetComprehension_Valid_7");
	}

	@Ignore("setsxxx") @Test
	public void SetComprehension_Valid_8() {
		runTest("SetComprehension_Valid_8");
	}

	@Ignore("nestedarraysxxx") @Test
	public void SetComprehension_Valid_9() {
		runTest("SetComprehension_Valid_9");
	}

	@Ignore("setsxxx") @Test
	public void SetConversion_Valid_1() {
		runTest("SetConversion_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetDefine_Valid_1() {
		runTest("SetDefine_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetDefine_Valid_2() {
		runTest("SetDefine_Valid_2");
	}

	@Ignore("setsxxx") @Test
	public void SetDefine_Valid_3() {
		runTest("SetDefine_Valid_3");
	}

	@Ignore("setsxxx") @Test
	public void SetDifference_Valid_1() {
		runTest("SetDifference_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetElemOf_Valid_1() {
		runTest("SetElemOf_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetEmpty_Valid_1() {
		runTest("SetEmpty_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetEquals_Valid_1() {
		runTest("SetEquals_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetGenerator_Valid_1() {
		runTest("SetGenerator_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersect_Valid_1() {
		runTest("SetIntersect_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersect_Valid_2() {
		runTest("SetIntersect_Valid_2");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersection_Valid_1() {
		runTest("SetIntersection_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersection_Valid_2() {
		runTest("SetIntersection_Valid_2");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersection_Valid_3() {
		runTest("SetIntersection_Valid_3");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersection_Valid_4() {
		runTest("SetIntersection_Valid_4");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersection_Valid_5() {
		runTest("SetIntersection_Valid_5");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersection_Valid_6() {
		runTest("SetIntersection_Valid_6");
	}

	@Ignore("setsxxx") @Test
	public void SetIntersection_Valid_7() {
		runTest("SetIntersection_Valid_7");
	}

	@Ignore("setsxxx") @Test
	public void SetLength_Valid_1() {
		runTest("SetLength_Valid_1");
	}

	@Ignore("setsxxx") @Test
	public void SetNull_Valid_1() {
		runTest("SetNull_Valid_1");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_1() {
		runTest("SetSubset_Valid_1");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_10() {
		runTest("SetSubset_Valid_10");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_11() {
		runTest("SetSubset_Valid_11");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_12() {
		runTest("SetSubset_Valid_12");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_2() {
		runTest("SetSubset_Valid_2");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_3() {
		runTest("SetSubset_Valid_3");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_4() {
		runTest("SetSubset_Valid_4");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_5() {
		runTest("SetSubset_Valid_5");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_6() {
		runTest("SetSubset_Valid_6");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_7() {
		runTest("SetSubset_Valid_7");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_8() {
		runTest("SetSubset_Valid_8");
	}

	@Ignore("subsetxxx") @Test
	public void SetSubset_Valid_9() {
		runTest("SetSubset_Valid_9");
	}

	@Ignore("subsetxxx") @Test
	public void SetUnion_Valid_1() {
		runTest("SetUnion_Valid_1");
	}

	@Ignore("subsetxxx") @Test
	public void SetUnion_Valid_10() {
		runTest("SetUnion_Valid_10");
	}

	@Ignore("subsetxxx") @Test
	public void SetUnion_Valid_11() {
		runTest("SetUnion_Valid_11");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_2() {
		runTest("SetUnion_Valid_2");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_3() {
		runTest("SetUnion_Valid_3");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_4() {
		runTest("SetUnion_Valid_4");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_5() {
		runTest("SetUnion_Valid_5");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_6() {
		runTest("SetUnion_Valid_6");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_7() {
		runTest("SetUnion_Valid_7");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_8() {
		runTest("SetUnion_Valid_8");
	}

	@Ignore("setsxxx") @Test
	public void SetUnion_Valid_9() {
		runTest("SetUnion_Valid_9");
	}

	@Test
	public void SingleLineComment_Valid_1() {
		runTest("SingleLineComment_Valid_1");
	}

	@Test
	public void Skip_Valid_1() {
		runTest("Skip_Valid_1");
	}

	@Ignore("trycatchxxx")@Test
	public void String_Valid_1() {
		runTest("String_Valid_1");
	}

	@Test
	public void String_Valid_2() {
		runTest("String_Valid_2");
	}

	@Test
	public void String_Valid_3() {
		runTest("String_Valid_3");
	}

	@Test
	public void String_Valid_4() {
		runTest("String_Valid_4");
	}

	@Ignore("uniontypes")@Test
	public void String_Valid_5() {
		runTest("String_Valid_5");
	}

	@Test
	public void String_Valid_6() {
		runTest("String_Valid_6");
	}

	@Ignore("rangexxx")@Test
	public void String_Valid_7() {
		runTest("String_Valid_7");
	}

	@Ignore("rangexxx")@Test
	public void String_Valid_8() {
		runTest("String_Valid_8");
	}

	@Ignore("arraysizexxx") @Test
	public void Subtype_Valid_1() {
		runTest("Subtype_Valid_1");
	}

	@Ignore("recordtypes")@Test
	public void Subtype_Valid_10() {
		runTest("Subtype_Valid_10");
	}

	@Ignore("recordtypes")@Test
	public void Subtype_Valid_11() {
		runTest("Subtype_Valid_11");
	}

	@Ignore("recordtypes")@Test
	public void Subtype_Valid_12() {
		runTest("Subtype_Valid_12");
	}

	@Ignore("recordtypes")@Test
	public void Subtype_Valid_13() {
		runTest("Subtype_Valid_13");
	}

	@Ignore("recordtypes")@Test
	public void Subtype_Valid_14() {
		runTest("Subtype_Valid_14");
	}

	@Ignore("recordtypes")@Test
	public void Subtype_Valid_2() {
		runTest("Subtype_Valid_2");
	}

	@Ignore("arrayofrecords")@Test
	public void Subtype_Valid_3() {
		runTest("Subtype_Valid_3");
	}

	@Ignore("arrayofrecords")@Test
	public void Subtype_Valid_4() {
		runTest("Subtype_Valid_4");
	}

	@Ignore("arrayofrecords")@Test
	public void Subtype_Valid_5() {
		runTest("Subtype_Valid_5");
	}

	@Ignore("arrayofrecords")@Test
	public void Subtype_Valid_6() {
		runTest("Subtype_Valid_6");
	}

	@Ignore("arraysizexxx") @Test
	public void Subtype_Valid_7() {
		runTest("Subtype_Valid_7");
	}

	@Ignore("setsxxx") @Test
	public void Subtype_Valid_8() {
		runTest("Subtype_Valid_8");
	}

	@Ignore("setsxxx") @Test
	public void Subtype_Valid_9() {
		runTest("Subtype_Valid_9");
	}

	@Test
	public void Switch_Valid_1() {
		runTest("Switch_Valid_1");
	}

	@Ignore("switchonlyonintxxx")@Test
	public void Switch_Valid_10() {
		runTest("Switch_Valid_10");
	}

	@Test
	public void Switch_Valid_11() {
		runTest("Switch_Valid_11");
	}

	@Ignore("switchonlyonintxxx")@Test
	public void Switch_Valid_12() {
		runTest("Switch_Valid_12");
	}

	@Test
	public void Switch_Valid_13() {
		runTest("Switch_Valid_13");
	}

	@Test
	public void Switch_Valid_2() {
		runTest("Switch_Valid_2");
	}

	@Ignore("Issue368xxx") @Test
	public void Switch_Valid_3() {
		runTest("Switch_Valid_3");
	}

	@Ignore("setsxxx") @Test
	public void Switch_Valid_4() {
		runTest("Switch_Valid_4");
	}

	@Test
	public void Switch_Valid_5() {
		runTest("Switch_Valid_5");
	}

	@Test
	public void Switch_Valid_6() {
		runTest("Switch_Valid_6");
	}

	@Test
	public void Switch_Valid_7() {
		runTest("Switch_Valid_7");
	}

	@Test
	public void Switch_Valid_8() {
		runTest("Switch_Valid_8");
	}

	@Test
	public void Switch_Valid_9() {
		runTest("Switch_Valid_9");
	}

	@Ignore("debugxxx") @Test
	public void Syntax_Valid_1() {
		runTest("Syntax_Valid_1");
	}

	@Ignore("trycatchxxx") @Test
	public void TryCatch_Valid_1() {
		runTest("TryCatch_Valid_1");
	}

	@Ignore("trycatchxxx") @Test
	public void TryCatch_Valid_2() {
		runTest("TryCatch_Valid_2");
	}

	@Ignore("trycatchxxx") @Test
	public void TryCatch_Valid_3() {
		runTest("TryCatch_Valid_3");
	}

	@Ignore("trycatchxxx") @Test
	public void TryCatch_Valid_4() {
		runTest("TryCatch_Valid_4");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_1() {
		runTest("TupleType_Valid_1");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_2() {
		runTest("TupleType_Valid_2");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_3() {
		runTest("TupleType_Valid_3");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_4() {
		runTest("TupleType_Valid_4");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_5() {
		runTest("TupleType_Valid_5");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_6() {
		runTest("TupleType_Valid_6");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_7() {
		runTest("TupleType_Valid_7");
	}

	@Ignore("tuplesxxx") @Test
	public void TupleType_Valid_8() {
		runTest("TupleType_Valid_8");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_1() {
		runTest("TypeEquals_Valid_1");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_10() {
		runTest("TypeEquals_Valid_10");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_11() {
		runTest("TypeEquals_Valid_11");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_12() {
		runTest("TypeEquals_Valid_12");
	}

	@Ignore("unionsetxxx")@Test
	public void TypeEquals_Valid_13() {
		runTest("TypeEquals_Valid_13");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_14() {
		runTest("TypeEquals_Valid_14");
	}

	@Ignore("nestedarraysxxx") @Test
	public void TypeEquals_Valid_15() {
		runTest("TypeEquals_Valid_15");
	}

	@Ignore("nestedarraysxxx") @Test
	public void TypeEquals_Valid_16() {
		runTest("TypeEquals_Valid_16");
	}

	@Ignore("arraysizexxx") @Test
	public void TypeEquals_Valid_17() {
		runTest("TypeEquals_Valid_17");
	}

	@Ignore("arraysizexxx") @Test
	public void TypeEquals_Valid_18() {
		runTest("TypeEquals_Valid_18");
	}

	@Ignore("nestedarraysxxx") @Test
	public void TypeEquals_Valid_19() {
		runTest("TypeEquals_Valid_19");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_2() {
		runTest("TypeEquals_Valid_2");
	}

	@Ignore("tuplesxxx") @Test
	public void TypeEquals_Valid_20() {
		runTest("TypeEquals_Valid_20");
	}

	@Ignore("setsxxx") @Test
	public void TypeEquals_Valid_21() {
		runTest("TypeEquals_Valid_21");
	}

	@Ignore("dictionaryxxx")@Test
	public void TypeEquals_Valid_22() {
		runTest("TypeEquals_Valid_22");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_23() {
		runTest("TypeEquals_Valid_23");
	}

	@Ignore("arraysizexxx") @Test
	public void TypeEquals_Valid_24() {
		runTest("TypeEquals_Valid_24");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_25() {
		runTest("TypeEquals_Valid_25");
	}

	@Ignore("setsxxx") @Test
	public void TypeEquals_Valid_26() {
		runTest("TypeEquals_Valid_26");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_27() {
		runTest("TypeEquals_Valid_27");
	}

	@Ignore("openrecordsxxx")@Test
	public void TypeEquals_Valid_28() {
		runTest("TypeEquals_Valid_28");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_29() {
		runTest("TypeEquals_Valid_29");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void TypeEquals_Valid_3() {
		runTest("TypeEquals_Valid_3");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_30() {
		runTest("TypeEquals_Valid_30");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_31() {
		runTest("TypeEquals_Valid_31");
	}

	@Ignore("setsxxx") @Test
	public void TypeEquals_Valid_32() {
		runTest("TypeEquals_Valid_32");
	}

	@Test
	public void TypeEquals_Valid_33() {
		runTest("TypeEquals_Valid_33");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_34() {
		runTest("TypeEquals_Valid_34");
	}

	@Ignore("unionwitharrayxxx") @Test
	public void TypeEquals_Valid_35() {
		runTest("TypeEquals_Valid_35");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void TypeEquals_Valid_36() {
		runTest("TypeEquals_Valid_36");
	}

	@Ignore("unionarraysxxx")@Test
	public void TypeEquals_Valid_37() {
		runTest("TypeEquals_Valid_37");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void TypeEquals_Valid_38() {
		runTest("TypeEquals_Valid_38");
	}

	@Ignore("uniontypes")@Test
	public void TypeEquals_Valid_39() {
		runTest("TypeEquals_Valid_39");
	}

	@Ignore("unionwitharrayxxx") @Test
	public void TypeEquals_Valid_40() {
		runTest("TypeEquals_Valid_40");
	}

	@Ignore("notwyccompiled")@Test
	public void TypeEquals_Valid_41() {
		runTest("TypeEquals_Valid_41");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_42() {
		runTest("TypeEquals_Valid_42");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_43() {
		runTest("TypeEquals_Valid_43");
	}

	@Ignore("unionrecordsxxx")@Test
	public void TypeEquals_Valid_44() {
		runTest("TypeEquals_Valid_44");
	}

	@Ignore("typewhereconditionxxx") @Test
	public void TypeEquals_Valid_45() {
		runTest("TypeEquals_Valid_45");
	}

	@Ignore("unionwitharrayxxx") @Test
	public void TypeEquals_Valid_46() {
		runTest("TypeEquals_Valid_46");
	}

	@Ignore("typewhereconditionxxx") @Test
	public void TypeEquals_Valid_47() {
		runTest("TypeEquals_Valid_47");
	}

	@Ignore("uniontypexxx")@Test
	public void TypeEquals_Valid_5() {
		runTest("TypeEquals_Valid_5");
	}

	@Ignore("syntaxerrorxxx")@Test
	public void TypeEquals_Valid_6() {
		runTest("TypeEquals_Valid_6");
	}

	@Ignore("uniontypexxx")@Test
	public void TypeEquals_Valid_7() {
		runTest("TypeEquals_Valid_7");
	}

	@Ignore("unionwitharrayxxx") @Test
	public void TypeEquals_Valid_8() {
		runTest("TypeEquals_Valid_8");
	}

	@Ignore("unionwitharrayxxx") @Test
	public void TypeEquals_Valid_9() {
		runTest("TypeEquals_Valid_9");
	}

	@Ignore("arraysizexxx") @Test
	public void UnionType_Valid_1() {
		runTest("UnionType_Valid_1");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_10() {
		runTest("UnionType_Valid_10");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_11() {
		runTest("UnionType_Valid_11");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_12() {
		runTest("UnionType_Valid_12");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_13() {
		runTest("UnionType_Valid_13");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_14() {
		runTest("UnionType_Valid_14");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_15() {
		runTest("UnionType_Valid_15");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_16() {
		runTest("UnionType_Valid_16");
	}

	@Ignore("arraysizexxx") @Test
	public void UnionType_Valid_17() {
		runTest("UnionType_Valid_17");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_18() {
		runTest("UnionType_Valid_18");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_19() {
		runTest("UnionType_Valid_19");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_2() {
		runTest("UnionType_Valid_2");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_20() {
		runTest("UnionType_Valid_20");
	}

	@Ignore("unionwitharrayxxx")@Test
	public void UnionType_Valid_21() {
		runTest("UnionType_Valid_21");
	}

	@Ignore("arraysizexxx") @Test
	public void UnionType_Valid_22() {
		runTest("UnionType_Valid_22");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_23() {
		runTest("UnionType_Valid_23");
	}

	@Ignore("arraysizexxx") @Test
	public void UnionType_Valid_3() {
		runTest("UnionType_Valid_3");
	}

	@Ignore("uniontypes")@Test
	public void UnionType_Valid_4() {
		runTest("UnionType_Valid_4");
	}

	@Test
	public void UnionType_Valid_5() {
		runTest("UnionType_Valid_5");
	}

	@Test
	public void UnionType_Valid_6() {
		runTest("UnionType_Valid_6");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_7() {
		runTest("UnionType_Valid_7");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_8() {
		runTest("UnionType_Valid_8");
	}

	@Ignore("unionrecordsxxx")@Test
	public void UnionType_Valid_9() {
		runTest("UnionType_Valid_9");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void Update_Valid_1() {
		runTest("Update_Valid_1");
	}

	@Ignore("notwyccompiledxxx")@Test
	public void Update_Valid_2() {
		runTest("Update_Valid_2");
	}

	@Test
	public void VarDecl_Valid_1() {
		runTest("VarDecl_Valid_1");
	}

	@Test
	public void VarDecl_Valid_2() {
		runTest("VarDecl_Valid_2");
	}

	@Test
	public void VarDecl_Valid_3() {
		runTest("VarDecl_Valid_3");
	}

	@Ignore("bignumberxxx")@Test
	public void VarDecl_Valid_4() {
		runTest("VarDecl_Valid_4");
	}

	@Ignore("appendarraysxxx")@Test
	public void While_Valid_1() {
		runTest("While_Valid_1");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_10() {
		runTest("While_Valid_10");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_11() {
		runTest("While_Valid_11");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_12() {
		runTest("While_Valid_12");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_14() {
		runTest("While_Valid_14");
	}

	@Ignore("unionrecordsxxx")@Test
	public void While_Valid_15() {
		runTest("While_Valid_15");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_16() {
		runTest("While_Valid_16");
	}

	@Test
	public void While_Valid_17() {
		runTest("While_Valid_17");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_18() {
		runTest("While_Valid_18");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_19() {
		runTest("While_Valid_19");
	}

	@Ignore("arraysizexxx")@Test
	public void While_Valid_2() {
		runTest("While_Valid_2");
	}

	@Ignore("unionrecordsxxx")@Test
	public void While_Valid_20() {
		runTest("While_Valid_20");
	}

	@Ignore("appendarraysxxx")@Test
	public void While_Valid_21() {
		runTest("While_Valid_21");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_22() {
		runTest("While_Valid_22");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_23() {
		runTest("While_Valid_23");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_24() {
		runTest("While_Valid_24");
	}

	@Test
	public void While_Valid_25() {
		runTest("While_Valid_25");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_26() {
		runTest("While_Valid_26");
	}

	@Test
	public void While_Valid_27() {
		runTest("While_Valid_27");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_28() {
		runTest("While_Valid_28");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_29() {
		runTest("While_Valid_29");
	}

	@Ignore("rangexxx") @Test
	public void While_Valid_30() {
		runTest("While_Valid_30");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_31() {
		runTest("While_Valid_31");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_3() {
		runTest("While_Valid_3");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_5() {
		runTest("While_Valid_5");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_7() {
		runTest("While_Valid_7");
	}

	@Ignore("arraysizexxx") @Test
	public void While_Valid_9() {
		runTest("While_Valid_9");
	}

}
