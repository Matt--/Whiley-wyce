package wyce;

import java.io.IOException;

import wyil.io.WyilFileReader;
import wyil.lang.WyilFile;

public class Wyce {

	public static void main(String[] args){
		boolean tests = false;
		String path, name;

		if(tests){
//			path = "whiley/"; // for FILE
//			name = Config.FILE4;
			path = "";
			name = "tests/valid/Lambda_Valid_2";
		} else {
//			Config.METHOD_PRE = "";
			path = "whileytoC/"; // for CODE
			name = Config.CODE3; // CODE3 stabilizer, CODE4 pid, set tests to false
		}
		String terminal = "terminal";

		if(args.length > 0){
			tests = Boolean.parseBoolean(args[0]);
			path = args[1];
			name = args[2];
			terminal = "no terminal output";
		}

		WyilFile wyilFile = null;
		try {
			WyilFileReader handle = new WyilFileReader(path + name + ".wyil");
			wyilFile = handle.read();
		} catch (IOException e) {
			e.printStackTrace();
		}

		// if tests, includes only mattCompiler_library.c && mattCompiler.h // TODO re-name these two files
		// create C code from wyilFile and put it into outputFile
		new Compiler(tests, terminal).print(wyilFile, path, name);
	}

}
