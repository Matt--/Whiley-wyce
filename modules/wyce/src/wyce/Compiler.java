package wyce;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

import wycc.lang.Attribute;
import wyil.lang.Block;
import wyil.lang.Constant;
import wyil.lang.Modifier;
import wyil.lang.Type;
import wyil.lang.WyilFile;
import wyil.lang.Block.Entry;
import wyil.lang.WyilFile.Case;
import wyil.lang.WyilFile.ConstantDeclaration;
import wyil.lang.WyilFile.Declaration;
import wyil.lang.WyilFile.FunctionOrMethodDeclaration;
import wyil.lang.WyilFile.TypeDeclaration;

public class Compiler {
	private final int TERMINAL = 1; // terminal output : 1 => on, 0 => off
	private final int FILE = 2;
	private int terminal = 1;
	private final String INDENT = Config.INDENT;
	private final String SP = Config.SP;

	private HashMap<String,HashMap<Integer, String>> scopeCollection;
	public static HashMap<String, String> types;
	private boolean outputFileCreated = false;
    private Method_Factory methodFactory;
	private boolean tests;
	private String outputFile;

	public Compiler(boolean tests, String terminal){
		this.tests = tests;
		this.terminal = terminal.equals("terminal") ? 1 : 0;
		this.methodFactory = new Method_Factory();
		scopeCollection = new HashMap<String,HashMap<Integer, String>>();
		types = new HashMap<String, String>();
	}

	public void print(WyilFile wyilFile, String path, String name){
		// empty path indicates write to a.c
		this.outputFile = path.isEmpty() || path.startsWith("whiley") ? "a.c" : path + name + ".c";

		// generate the C code text output
		print_prequel(wyilFile);
		print_Header(wyilFile, path, name);
		print_Methods(wyilFile);
	}

	/**
	 * Prequel information for terminal.
	 * Note global "terminal" - prints to terminal, "FILE" prints to C text file
	 * @param wyilFile
	 */
	private void print_prequel(WyilFile wyilFile){
		print(terminal, Config.credits());
		print(terminal, "Terminal Printer");
		print(terminal, "Prints a C file to; " +outputFile +"\n");

		print(terminal, "# Whiley Intermediate Object ID : " +wyilFile.id());
		print(terminal, "# ToString : " +wyilFile.toString());
		print(terminal, "# Filename : " +wyilFile.filename());
		print(terminal, "# HashCode : " +wyilFile.hashCode());
	}


	/**
	 * Create the header information.
	 * Note global "terminal" - prints to terminal, "FILE" prints to C text file
	 * Included in the output .c file.
	 * TODO pull this out, put in a congfig file
	 */
	private void print_Header(WyilFile wyilFile, String path, String name){
		print(terminal, "\n"+INDENT+INDENT +"####################################################"
				+ "\n"+INDENT+INDENT +"### HEADER FILE ####################################\n");
		if(tests){
			print(terminal+FILE, "#define LIBRARY_TESTING true\n");
		}else{
			print(terminal+FILE, "#define LIBRARY_TESTING false\n");
		}

		String pathUp = "";
		if(!path.startsWith("whiley")){
			int i = path.length() - path.replace("/", "").length();
			for(; i > 0; i--){
				pathUp += "../";
			}
		}

		print(terminal+FILE, "#include \""+pathUp+Config.COMPILER_h +"\"");
		print(terminal+FILE, "#include \""+pathUp+Config.COMPILER_LIBRARY_c +"\"");

		if(!tests){
			if(name.contains("main")){
				// Crazyflie include files
				print(terminal+FILE, "#include \"led.h\"");
				print(terminal+FILE, "#include \"motors.h\"\n");
			} else {
				print(terminal+FILE, "#include \""+Config.CRAZYFLIE_LIB_c +"\"" + "\n");
			}
		}

		print_constants(wyilFile);
		print_types(wyilFile);
		print_declarations(wyilFile);

		print(terminal, "\n"+INDENT+INDENT+"### end of HEADER FILE #############################"
				+ "\n"+INDENT+INDENT+"####################################################");
	}

	/////////////////////// CONSTANTS ////////////////////////////////////////////
	private void print_constants(WyilFile wyilFile){
		print(terminal, "\n"+INDENT+INDENT +"####################################################");
		print(terminal, "### Constants : " +wyilFile.constants());
		print(terminal, "# Constants count : " +wyilFile.constants().size());
		String r = "";
		Iterator<ConstantDeclaration> itr = wyilFile.constants().iterator();
		while(itr.hasNext()){
			r += "const" +SP;
			ConstantDeclaration decl = itr.next();
			Constant constant = decl.constant();
			if  (constant instanceof Constant.Integer){ r += "int" +SP; }
			else if(constant instanceof Constant.Bool){ r += "bool" +SP; }
			else if(constant instanceof Constant.Char){ r += "char" +SP; }
			else if(constant instanceof Constant.Strung){ r += "char*" +SP; }
			else if(constant instanceof Constant.Decimal){ r += "double" +SP; }
			else if(constant instanceof Constant.Set){ r = ""; break; }
			else if(constant instanceof Constant.Record){ r = ""; break; }
			else if(constant instanceof Constant.List){ r = ""; break; }
			// Constant list works, but not used in the test it was developed for...
//			else if(constant instanceof Constant.List){
//				r += "char* const ";
//				r += decl.name() + "[] = ";
//				r += constant.toString().replace("[", "{").replace("]",  "}");
//				r += ";\n";
//				break; }
			else throw new Error("Constant error, not yet allowed for.");
			r += decl.name() +SP;
			r += "=" +SP;
			r += constant +SP;
			r += ";\n";
		}
		print(terminal+FILE, r);
	}
	/////////////////////// TYPES ////////////////////////////////////////////
	private void print_types(WyilFile wyilFile){
		print(terminal, "\n"+INDENT+INDENT +"####################################################");
		print(terminal, "### Types : " +wyilFile.types());
		print(terminal, "# Types count : " +wyilFile.types().size());
		String r = "";
		Iterator<TypeDeclaration> itr = wyilFile.types().iterator();
		while(itr.hasNext()){
			String s = "";
			s += "typedef" +SP;
			TypeDeclaration decl = itr.next();
			Type type = decl.type();
			if  (type instanceof Type.Int){ s += "int" +SP; }
			else if(type instanceof Type.Bool){ s += "bool" +SP; }
			else if(type instanceof Type.Char){ s += "char" +SP; }
			else if(type instanceof Type.Strung){ s += "char*" +SP; }
			else if(type instanceof Type.Real){ s += "double" +SP; }
			else if(type instanceof Type.Tuple){ s += ""; }
			else if(type instanceof Type.Record){
				String t = type.toString();
				String name = decl.name();
				if(types.containsKey(t)){
					throw new Error("A second type with this declared type.");
				} else {
					types.put(t, name);
				}
				Type.Record record = (Type.Record)type;
				String _types[] = t.substring(1, t.length()-1).split(",");
				Type.Record.State fields = (Type.Record.State)record.automaton.states[0].data;
				s += "struct {";
				for(int i = 0; i < fields.size(); i++){
					String _type = _types[i].split(" ")[0].trim();
					if(_type.charAt(0) == '[' && _type.charAt(_type.length()-1) == ']'){
						s += "Any* ";
					} else {
						s += "Any ";
					}
					s += fields.get(i) +"; ";
				}
				s += "} ";
			}
			else if(type instanceof Type.Set){ s += ""; }
			else if(type instanceof Type.Any){ s += ""; }
			else if(type instanceof Type.Function){ s += ""; }
			else if(type instanceof Type.Union){
				// this method deals with the generation
				//print(terminal+FILE, generateUnionType(decl)); s = "";
				continue;
			}
			else throw new Error("type error, not yet allowed for.");

			s += decl.name();
			s += ";\n";
			r += s;
		}
//		if(!r.endsWith("typedef ;\n")) // case where no typedef is made
			print(terminal+FILE, r);

	}
	/*
	 * Union types are interesting...
	 * By using an "Any" type, the union choice is made at the struct level.
	 * typedef struct {
     * 	  int type;
     * 	  union Data data;
	 * } Any;
	 *
	 * union Data{
     *    int i;
	 * 	  bool b;
     * 	  char c;
     * 	  char s[MAXCHAR+1];
     *    void *ptr;
	 * };
	 *
	 * It gets complicated when a part of the union is a new struct. In this case, we create a new struct
	 * and use the void *ptr to point to it.
	 * typedef struct{
	 *    int data;
	 *    Tree left;
	 *    Tree right;
	 * } Tree
	 *
	 * This means a malloc to create the memory space for the pointer and freeing it afterwards.
	 *    ptr = (void *)malloc(sizeof(int));
	 *    free(ptr);
	 * AND every time the contents of the pointer is read, it must be cast.
	 *    int x = (int *)ptr; or (int)&ptr; ???
	 */
	private String generateUnionType(TypeDeclaration decl){
		String r = "";

		/*
		 * Leaving this alone for the time being.
		 * Union Types use Automaton which allows recursive data structures like trees.
		 * But to write code to utilise it will take too much time at this point for
		 * possibly limited gain.
		 * Davids view is to not include recursive data structures. 30/04/14
		 */
//		Type type = decl.type();
//		Type.Union union = (Type.Union) type;
//		r += union.automaton +"\n\n";
//		r += "union" +SP;
//		r += decl.name() +SP;
//		r += "{" +SP;
//		int i = 0;
//		while( i< union.automaton.states.length -1){
//			i = i+1;
//			r += "," +SP;
//			if(union.automaton.states[i].data != null){
//				Automaton.State rec = union.automaton.states[i];
//				r += union.automaton.states[i].data;
//				r += union.automaton.states[i].kind;
//			}
//		}
//		r += "}";

		return r; // just returning an empty string
	}

	/////////////////////// DECLARATIONS ////////////////////////////////////////////
	private void print_declarations(WyilFile wyilFile){
		Collection<Declaration> list = wyilFile.declarations();
		print(terminal, "\n"+INDENT+INDENT +"####################################################");
		print(terminal, "### Declarations : " +wyilFile.declarations());
		print(terminal, "# Declarations count : " +wyilFile.declarations().size());

		Iterator<Declaration> itr = list.iterator();
		while(itr.hasNext()){
			Declaration d = itr.next();
			print(terminal, "\n"+INDENT+INDENT +"##### Declaration start #####");
			print(terminal, "# Declaration toString : " + d.toString());
			print(terminal, "# Declaration Class toString : " + d.getClass().toString());

			List<Attribute> l = d.attributes();
			Iterator<Attribute> attItr = l.iterator();
			if(!attItr.hasNext()) print(terminal, "# Holds no attributes.");
			while(attItr.hasNext()){
				Attribute att = attItr.next();
				print(terminal, "# Declaration attribute toString : " + att.toString());
			}

			// method declarations
			if(Config.isMainMethod(d))
				print(terminal, "# Main method declaration, not printed to file.");
			else
				print(terminal+FILE, methodFactory.createDeclaration(d));
		}
	}

	/**
	 * Generate the methods.
	 * Note global "terminal" - prints to terminal, "FILE" prints to C text file.
	 * Every C program consists of nested methods, iterate through methods generating statements.
	 * @param wyilFile
	 */
	private void print_Methods(WyilFile wyilFile){
		Collection<FunctionOrMethodDeclaration> list = wyilFile.methods();
		// terminal only information
		print(terminal, "\n"+INDENT+INDENT +"####################################################");
		print(terminal, "### Methods ####");//    : " +wyilFile.methods());
		print(terminal, "# Methods count : " +list.size());

		Iterator<FunctionOrMethodDeclaration> itr = list.iterator();
		while(itr.hasNext()){
			FunctionOrMethodDeclaration method = itr.next();
			print(terminal, "\n"+INDENT+INDENT +"##### Method start #####");
			print(terminal, "# Method name : " + method.name());
			print(terminal, "# Method isa method ? (false == function) : " + method.isMethod());

			if(method.hasModifier(Modifier.NATIVE)){
				print(terminal, "# Method isa NATIVE method ? : true");
				print(terminal, "# Native methods are specified elsewhere.");
				continue;
			}else{
				print(terminal, "# Method isa NATIVE method ? : false");
			}

			// each method gets its own register of variable names
			HashMap<Integer, String> register = new HashMap<Integer, String>();
			register.put(Integer.MAX_VALUE, "new scope");
			scopeCollection.put(method.name(), register);

			// generate method signature
			String signature = methodFactory.createDeclaration(method);
			signature = signature.substring(0, signature.length()-1);
			signature = insertParamName(signature, register);

			// generate method name and block as text file
			print(terminal+FILE, "\n" +signature +"{");
			// print the method's statements
			print_statements(method.name(), method);
			// close block
			print(terminal+FILE, "}");
		}
	}

	private void print_statements(String methodName, FunctionOrMethodDeclaration method){
		Statement_Factory statements = new Statement_Factory();

		Iterator<Case> caseItr = method.cases().iterator();
		Case _case = caseItr.next();
		Block block = _case.body();

		print_method_details(methodName, _case, block.size());
		print(terminal, "");

		// iterate through blocks to extract the line by line statements
		Iterator<Entry> entryItr = block.iterator();
		int i=0;
		while(entryItr.hasNext()){
			Entry entry = entryItr.next();
			// terminal information
			print(terminal, "\n" +INDENT+INDENT +"# Whiley bytecode block "+ i++ +"    : " + entry.toString());
			print(terminal, " # Whiley bytecode block attributes : " + entry.attributes().toString());

			// statements within a method block
			statements.create(entry.code, scopeCollection.get(methodName), methodFactory);

			if(methodName.equals("main") && entry.code.toString().equals("return")){
				// Whiley main has a void return. C main has an int return
				print(terminal+FILE, INDENT +"return 0;");
			} else {
				String indent = statements.result.isEmpty() ? "" : INDENT;
				print(terminal+FILE, indent +statements);
			}
		}
	}

	private void print_method_details(String methodName, Case _case, int blockSize){
		print(terminal, "\n" +INDENT+INDENT +"# Method case toString : " + _case.toString());
		List<String> locals = _case.locals();
		print(terminal, "# Method parameters : " + locals);
		print(terminal, "# Method parameter count : " + locals.size());

		print(terminal, "# Method statements");// : " + block.toString());
		print(terminal, "# Method statement count : " + blockSize);

	}

	/////////////// HELPERS ///////////////////////////
	/**
	 * Inserts parameter names into a method signature.
	 */
	private String insertParamName(String sig, HashMap<Integer, String> register){
		//if(sig.startsWith("main")) return "";
		String params = sig.substring(sig.indexOf("(")+1, sig.length()-2).trim();
		if(!params.isEmpty() && !params.equals("void")){
			// params is not empty and is not "void"
			int i = 0;
			String[] tokens = params.split(",");
			// tidy up tokens, add the var name
			while(i< tokens.length){
				register.put(i, "a" + i);
				String token = tokens[i].trim();
				int index = token.indexOf("[]");
				if(index == -1){
					token = token +" " +Config.PRE +i;
				}else{
					token = token.substring(0, index) + SP;
					token += Config.PRE +i;
					token += "[]";
					tokens[i++] = token;
					// next element is arraySize
//					tokens[i++] = "Any " + Config.ARRAY_SIZE;
					continue;
				}
				tokens[i++] = token;
			}
			// reset params, ready for changes
			params = "";
			i = 0;
			// recreate the param list
			boolean first = true;
			while(i< tokens.length){

				params += first ? "" : ", ";
				params += tokens[i++];
				first = false;
			}
			params = " "+params+" ";
		}
		sig = sig.substring(0, sig.indexOf("(")+1);
		sig += params;
		sig += ")";

		return sig;
	}

	/**
	 * Print function to terminal and/or output file.
	 * Tokens are not printed to the output file
	 * @param destination : 1 => terminal, 2 => output file, 3 => both
	 * @param text : a single statement. May be empty or null,
	 */
	private void print(int destination, String text){
		if(text != null && !text.isEmpty()){
			String indent = INDENT;
			if(destination == 2 || destination == 3)
				indent = "";
			if(destination == TERMINAL){
				System.out.println(indent+indent+indent +text);
			}else if(destination == FILE){
				if(!text.trim().startsWith("@")) // check for tokens, do not print in file
					outputFileCreated = file_println(outputFile, outputFileCreated, text);
			}else if(destination == TERMINAL + FILE){
				System.out.println(indent+indent+indent +text);
				if(!text.trim().startsWith("@")) // check for tokens, do not print in file
					outputFileCreated = file_println(outputFile, outputFileCreated, text);
			}
		}
	}

	/**
	 * Append text to the end of an output file.
	 * @param output_file
	 * @param text
	 */
	private boolean file_println(String output_file, boolean outputFileCreated, String text){
		try{
    		File file =new File(output_file);

    		// create file?
    		if(!outputFileCreated){
    			file.delete();
    			file.createNewFile();
    			outputFileCreated = true;
    		}

    		//append line to file
    		FileWriter fileWritter = new FileWriter(file.getPath(),true);
    	        BufferedWriter bufferWritter = new BufferedWriter(fileWritter);
    	        bufferWritter.write(text +"\n");
    	        bufferWritter.close();

    	}catch(IOException e){
    		e.printStackTrace();
    	}
		return outputFileCreated;
	}
}
