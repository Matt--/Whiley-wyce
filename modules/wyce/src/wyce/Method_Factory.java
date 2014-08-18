package wyce;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

import wyil.lang.Modifier;
import wyil.lang.Type;
import wyil.lang.Type.FunctionOrMethod;
import wyil.lang.WyilFile.*;

public class Method_Factory {

	String SP = " ";
	String PRE = "a";
	private HashMap<String, ArrayList<Type>> nativeMethods;
	private HashMap<String, FunctionOrMethodDeclaration> methods;
	public String currentMethodName;

	public Method_Factory(){
		nativeMethods = new HashMap<String, ArrayList<Type>>();
		methods = new HashMap<String, FunctionOrMethodDeclaration>();
	}

	/**
	 * Generate a method declaration
	 * @param Declaration
	 * @return String
	 */
	public String createDeclaration(Declaration declaration){
		String r = "";
		if(declaration instanceof FunctionOrMethodDeclaration){
			FunctionOrMethodDeclaration _dec = (FunctionOrMethodDeclaration) declaration;

			if(_dec.hasModifier(Modifier.NATIVE)){
				// insert the native method name and a csv string of parameter types into HashMap nativeMethods.
				// do not print out method signature
				nativeMethods.put(_dec.name(), _dec.type().params());
			}else{
				// note method in hashlist, with _dec object
				methods.put(_dec.name(), _dec);
				r = createDeclaration(_dec.name(), _dec.type());
			}
		}
		return r;
	}

	private String createDeclaration(String name, FunctionOrMethod declaration){
		boolean notMain = !name.equals("main");
		String r = "";
		r += name.equals("main") ? "int" :
			declaration.ret() instanceof Type.Void ? "void" :
//			declaration.ret() instanceof Type.Bool ? "bool" :
//			declaration.ret() instanceof Type.Int ? "int" :
			declaration.ret() instanceof Type.Record ? Compiler.types.get(declaration.ret().toString()) :
			declaration.ret() instanceof Type.List ? "Any*" :
			this.methods.get(name).hasModifier(Modifier.EXPORT) ? declaration.ret().toString() :
				 "Any";
		// The method return type has been determined
		// name an return type is used by the return statement.
		currentMethodName = name + "=>" + r;
		r += SP;
		r += this.isMethod(name)
				&& notMain
				&& !this.getMethod(name).hasModifier(Modifier.EXPORT) ? Config.METHOD_PRE : "";

		r += name +SP; // type
		r += "(" +SP;
		String p = "";
		if(notMain){
			Iterator<Type> itr = declaration.params().iterator();
			boolean comma = false;
			while(itr.hasNext()){
				p += comma ? ", " : "";
				Type type = itr.next();
				if(Compiler.types.containsKey(type.toString())){
					p += Compiler.types.get(type.toString());
//				} else if(type instanceof Type.Int){ p += "int";
//				} else if(type instanceof Type.Bool){ p += "bool";
				} else {
					p += "Any";
				}
				if(type instanceof Type.List) p += "[]"; //, Any";
				p += SP;
				comma = true;
			}
		}
		r += p.isEmpty() && notMain ? "void" : p ;
		r += " )";
		return r + ";";
	}

	/**
	 * Returns empty ArrayList if methodName is not a native method.
	 * @param methodName
	 * @return ArrayList of parameter types
	 */
	public ArrayList<Type> getNativeParameters(String methodName){
		ArrayList<Type> result = nativeMethods.get(methodName);
		return result != null ? result : new ArrayList<Type>();
	}

	public boolean isMethod(String m){
		return methods.containsKey(m);
	}

	public FunctionOrMethodDeclaration getMethod(String m){
		return methods.get(m);
	}
}


