package wyce;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.regex.Pattern;

import wyil.lang.Code.AbstractNaryAssignable;
import wyil.lang.Code;
import wyil.lang.Modifier;
import wyil.lang.Type;
import wyil.lang.Code.AbstractAssignable;
import wyil.lang.Code.AbstractSplitNaryAssignable;

public class Statement_Factory{
	protected String result;
	private HashMap<Integer, String> register;
	private Method_Factory parentMethod;
	public Statement_Factory(){}

	// used in for loop, only initialise once in a method.
	private boolean jgeed38_bool = false;

	/**
	 * Converts a single bytecode to mostly one, sometimes more, lines of C code.
	 */
	public Statement_Factory create(Code code, HashMap<Integer, String> register, Method_Factory parentMethod){
		this.register = register;
		this.parentMethod = parentMethod;
		this.result = generateLine(code);
		if(result.equals("@assign")){
			// @assign tokens indicate the register holds a ghost value for this assign statement

			return this;
		} else if(result.startsWith("@") && code instanceof AbstractAssignable){
			// if tokens returned, they have already been put in register for later use {register_no, token_string}
			// but ignore @convert, merely converts from Any to Any
			if( !result.equals("@convert") && !result.equals("@ignore") ){
				register.put(((AbstractAssignable)code).target, result); // note: indirectinvoke gives key of -1
			}
			// this token may generate code...
			Token token = Token.getInstance().create(this, result, code);
			result = token.isEmpty() ? result : token.toString() ;
		}
		return this;
	}

	public String 	toString(){ return result; }
	public boolean 	startWith(String s){ return result.startsWith(s); }
	public boolean  endWith(String s){ return result.endsWith(s); }
	public void 	setResult(String s){ result = s; }
	public boolean 	isEmpty(){ return result.isEmpty(); }

	/**
	 * Giant switch statement, directing the bytecode to the correct overloaded createC method
	 * @param code
	 * @return String
	 */
	private String generateLine(Code code){
		if(code.toString().startsWith(".")){
			result = code.toString().substring(1) + ": ;";
			return result;
		}
		switch(code.opcode()){
		case(Code.OPCODE_append):
			result = createC(Code.OPCODE_append,  	(Code.BinListOp) code); return result;
		case(Code.OPCODE_assertel):
		case(Code.OPCODE_asserteq):
		case(Code.OPCODE_assertge):
		case(Code.OPCODE_assertgt):
		case(Code.OPCODE_assertle):
		case(Code.OPCODE_assertlt):
		case(Code.OPCODE_assertne):
		case(Code.OPCODE_assertse):
		case(Code.OPCODE_assertss):
			result = createC(Code.OPCODE_assertss, 	(Code.Assert) code); return result;
		case(Code.OPCODE_assign):
			result = createC(Code.OPCODE_assign,  	(Code.Assign) code); return result;
		case(Code.OPCODE_assumeeq):
			result = createC(Code.OPCODE_assumeeq,  (Code.Assume) code); return result;
		case(Code.OPCODE_assumege):
			result = createC(Code.OPCODE_assumege,  (Code.Assume) code); return result;
		case(Code.OPCODE_assumele):
			result = createC(Code.OPCODE_assumele,  (Code.Assume) code); return result;
		case(Code.OPCODE_add):
			result = createC(Code.OPCODE_add,	 	(Code.BinArithOp) code); return result;
		case(Code.OPCODE_bitwiseand):
			result = createC(Code.OPCODE_bitwiseand,(Code.BinArithOp) code); return result;
		case(Code.OPCODE_range):
			result = createC(Code.OPCODE_range,   	(Code.BinArithOp) code); return result;
		case(Code.OPCODE_const):
			result = createC(Code.OPCODE_const,   	(Code.Const) code); return result;
		case(Code.OPCODE_convert):
			result = createC(Code.OPCODE_convert, 	(Code.Convert) code); return result;
		case(Code.OPCODE_div):
			result = createC(Code.OPCODE_div,	 	(Code.BinArithOp) code); return result;
		case(Code.OPCODE_fieldload):
			result = createC(Code.OPCODE_fieldload, (Code.FieldLoad) code); return result;
		case(Code.OPCODE_forall):
			result = createC(Code.OPCODE_forall,	(Code.ForAll) code); return result;
		case(Code.OPCODE_goto):
			result = createC(Code.OPCODE_goto, 		(Code.Goto) code); return result;
		// If eq, ne, lt, le, gt, ge, in, ss and sse
		case(Code.OPCODE_ifeq):
			result = createC(Code.OPCODE_ifeq, 		(Code.If) code); return result;
		case(Code.OPCODE_ifne):
			result = createC(Code.OPCODE_ifne, 		(Code.If) code); return result;
		case(Code.OPCODE_iflt):
			result = createC(Code.OPCODE_iflt, 		(Code.If) code); return result;
		case(Code.OPCODE_ifle):
			result = createC(Code.OPCODE_ifle, 		(Code.If) code); return result;
		case(Code.OPCODE_ifgt):
			result = createC(Code.OPCODE_ifgt, 		(Code.If) code); return result;
		case(Code.OPCODE_ifge):
			result = createC(Code.OPCODE_ifge, 		(Code.If) code); return result;
		case(Code.OPCODE_ifis):
			result = createC(Code.OPCODE_ifis, 		(Code.IfIs) code); return result;
		case(Code.OPCODE_ifss):
			result = createC(Code.OPCODE_ifss, 		(Code.If) code); return result;
		case(Code.OPCODE_ifse):
			result = createC(Code.OPCODE_ifse, 		(Code.If) code); return result;
		case(Code.OPCODE_indexof):
			result = createC(Code.OPCODE_indexof, 	(Code.IndexOf) code); return result;
		case(Code.OPCODE_indirectinvokefn):
			result = createC(Code.OPCODE_indirectinvokefnv, (Code.IndirectInvoke) code); return result;
		case(Code.OPCODE_indirectinvokefnv):
			result = createC(Code.OPCODE_indirectinvokemdv, (Code.IndirectInvoke) code); return result;
		case(Code.OPCODE_indirectinvokemd):
			result = createC(Code.OPCODE_indirectinvokefnv, (Code.IndirectInvoke) code); return result;
		case(Code.OPCODE_indirectinvokemdv):
			result = createC(Code.OPCODE_indirectinvokemdv, (Code.IndirectInvoke) code); return result;
		case(Code.OPCODE_invokefn):
			result = createC(Code.OPCODE_invokefn,	(Code.Invoke) code); return result;
		case(Code.OPCODE_invokefnv):
			result = createC(Code.OPCODE_invokefnv,	(Code.Invoke) code); return result;
		case(Code.OPCODE_invokemd):
			result = createC(Code.OPCODE_invokemd,	(Code.Invoke) code); return result;
		case(Code.OPCODE_invokemdv):
			result = createC(Code.OPCODE_invokemdv,	(Code.Invoke) code); return result;
		case(Code.OPCODE_lambdamd):
			result = createC(Code.OPCODE_lambdamd,  (Code.Lambda) code); return result;
		case(Code.OPCODE_lambdafn):
			result = createC(Code.OPCODE_lambdafn,  (Code.Lambda) code); return result;
		case(Code.OPCODE_lengthof):
			result = createC(Code.OPCODE_lengthof,  (Code.LengthOf) code); return result;
		case(Code.OPCODE_lshr):
			result = createC(Code.OPCODE_lshr,  	(Code.BinArithOp) code); return result;
		case(Code.OPCODE_loop):
			result = createC(Code.OPCODE_loop,  	(Code.Loop) code); return result;
		case(-1):
			result = createC(-1,	 				(Code.LoopEnd) code); return result;
		case(Code.OPCODE_mul):
			result = createC(Code.OPCODE_mul,	 	(Code.BinArithOp) code); return result;
		case(Code.OPCODE_neg):
			result = createC(Code.OPCODE_neg,		(Code.UnArithOp) code); return result;
		case(Code.OPCODE_newlist):
			result = createC(Code.OPCODE_newlist,	(Code.NewList) code); return result;
		case(Code.OPCODE_newrecord):
			result = createC(Code.OPCODE_newrecord,	(Code.NewRecord) code); return result;
		case(Code.OPCODE_newset):
			result = createC(Code.OPCODE_newset,	(Code.NewSet) code); return result;
		case(Code.OPCODE_newtuple):
			result = createC(Code.OPCODE_newtuple,	(Code.NewTuple) code); return result;
		case(Code.OPCODE_nop):
			result = createC(Code.OPCODE_nop,	 	(Code.Nop) code); return result;
		case(Code.OPCODE_rem):
			result = createC(Code.OPCODE_rem,		(Code.BinArithOp) code); return result;
		case(Code.OPCODE_return):
			result = createC(Code.OPCODE_return,	(Code.Return) code); return result;
		case(Code.OPCODE_returnv):
			result = createC(Code.OPCODE_returnv, 	(Code.Return) code); return result;
		case(Code.OPCODE_rshr):
			result = createC(Code.OPCODE_rshr,  	(Code.BinArithOp) code); return result;
		case(Code.OPCODE_sappend):
			result = (createC(Code.OPCODE_sappend, 	(Code.BinStringOp) code)); return result;
		case(Code.OPCODE_sappendl):
			result = (createC(Code.OPCODE_sappendl, (Code.BinStringOp) code)); return result;
		case(Code.OPCODE_sappendr):
			result = (createC(Code.OPCODE_sappendr, (Code.BinStringOp) code)); return result;
		case(Code.OPCODE_sub):
			result = createC(Code.OPCODE_sub,	 	(Code.BinArithOp) code); return result;
		case(Code.OPCODE_switch):
			result = createC(Code.OPCODE_switch,	(Code.Switch) code); return result;
		case(Code.OPCODE_throw):
			result = createC(Code.OPCODE_throw,		(Code.Throw) code); return result;
		case(Code.OPCODE_trycatch):
			result = createC(Code.OPCODE_trycatch,	(Code.TryCatch) code); return result;
		case(Code.OPCODE_tupleload):
			result = createC(Code.OPCODE_tupleload,	(Code.TupleLoad) code); return result;
		case(Code.OPCODE_update):
			result = createC(Code.OPCODE_update,	(Code.Update) code); return result;

		}
		throw new Error("Calling a bytecode that has no corrosponding Statement. opcode : "+code.opcode()+" bytecode : " +code.toString());
	}

	/////////////////// OVERLOADED createC() ///////////////////////////
	protected final String SP = Config.SP;
	protected final String PRE = Config.PREFIX;

	private String createC(int opcode, Code.Assert code){
		// Asserts are ignored, assuming wyc does all the work (checked this assumption, Dave 29/4)
		switch(opcode){
		case(Code.OPCODE_assertel):
		case(Code.OPCODE_asserteq):
		case(Code.OPCODE_assertge):
		case(Code.OPCODE_assertgt):
		case(Code.OPCODE_assertle):
		case(Code.OPCODE_assertlt):
		case(Code.OPCODE_assertne):
		case(Code.OPCODE_assertse):
		case(Code.OPCODE_assertss):
		}
		return "@ignore";
	}
	private String createC(int opcode, Code.Assign code){
		String r = "";
		// special case. A switch case will assign to a common returned value.
		boolean switchPresent = register.containsValue("switch");
		// determine type, Any or Record
		String type = "int";
		if(Compiler.types.containsKey(code.type.toString())){
			type = Compiler.types.get(code.type.toString());
			// put variable name into types, with code.type -> identifies for toString operation
			Compiler.types.put(PRE+code.target, code.type.toString());
		}

		if( register.containsKey(code.operand)){
			boolean noStatement = false;
			if( !register.containsKey(code.target)){
				register.put(code.target,  code.assignedType().toString());
				r += code.assignedType().toString() +SP;
				// only want to print a C statement when an existing variable is used
				noStatement = true;
			}
			String target = getRegisterValue(code.target);
			String operand = getRegisterValue(code.operand);

			r += target;
			r += " = ";
			r += operand;

			if( noStatement && !switchPresent){
				register.put(new Integer(target.replace(PRE, "")), operand);
			}

			return noStatement && !switchPresent ? "@assign" : r + ";";
		}


		r += lhs_assignment(code, type);

		// special case, passing the System.console will trigger this
		r += register.get(code.operand) == null ? "NULL" : register.get(code.operand);
		return r + ";";
	}


	private String createC(int opcode, Code.Assume code){
		String r = "";
		r += "@ignore";
		return r;
	}

	private String createC(int opcode, Code.BinArithOp code){
		String r = "";
		String parameterL = getRegisterValue(code.leftOperand);
		String parameterR = getRegisterValue(code.rightOperand);

		switch(opcode){
		case(Code.OPCODE_add):
			r += lhs_assignment(code);
			r += parameterL;
			r += " + ";
			r += parameterR;
			break;
		case(Code.OPCODE_sub):
			r += lhs_assignment(code);
			r += parameterL;
			r += " - ";
			r += parameterR;
			break;
		case(Code.OPCODE_mul):
			r += lhs_assignment(code);
			r += parameterL;
			r += " * ";
			r += parameterR;
			break;
		case(Code.OPCODE_div):
			r += lhs_assignment(code);
			r += parameterL;
			r += " / ";
			r += parameterR;
			break;
		case(Code.OPCODE_rem):
			r += lhs_assignment(code);
			r += parameterL;
			r += " % ";
			r += parameterR;
			break;
		case(Code.OPCODE_range):
			if(register.containsKey(code.target)) r += "Any[]" +SP;
			r += parameterL;
			r += "," +SP;
			r += parameterR;
			r += "}";
			break;
		case(Code.OPCODE_bitwiseand):
			return "@ignore";
		case(Code.OPCODE_rshr): // rightshift
			return "@ignore";
		case(Code.OPCODE_lshr): // leftshift
			return "@ignore";
		default:
			throw new Error("Error: createC(int opCode, Code.BinArithOp), opcode not catered for.");
		}
		return r + ";";
	}

	private String createC(int opcode, Code.BinListOp code){
		switch(opcode){
		case(Code.OPCODE_append):
		case(Code.OPCODE_appendl):
		case(Code.OPCODE_appendr):
		default:
			throw new Error("Error: createC(int opCode, Code.BinArithOp), appending arrays not yet catered for.");
		}
	}

	private String createC(int opcode, Code.BinStringOp code){
		String r = "";
		if( !register.containsKey(code.target)){
			String type = code.assignedType().toString();
			type = type.equals("string") ? "char *" : type;
			register.put(code.target, type);
			r += type +SP;
		}
		String target = getRegisterValue(code.target);
		String parameterL = getRegisterValue(code.leftOperand);
		String parameterR = getRegisterValue(code.rightOperand);
		int parameterLint = new Integer(parameterL.replace(PRE, ""));
		int parameterRint = new Integer(parameterR.replace(PRE, ""));

		if( !register.get(parameterLint).equals("char *")){
			if( register.containsKey(parameterLint + Config.GHOST_ADD) && register.get(parameterLint + Config.GHOST_ADD).equals("char *")){
				parameterL = PRE + (parameterLint + Config.GHOST_ADD);
			}
		}
		if( !register.get(parameterRint).equals("char *")){
			if( register.containsKey(parameterRint + Config.GHOST_ADD) && register.get(parameterRint + Config.GHOST_ADD).equals("char *")){
				parameterR = PRE + (parameterRint + Config.GHOST_ADD);
			}
		}

		switch(code.kind){
		case LEFT_APPEND:
			// strcat( a1, a2 ) concatenate onto STRING a1, CHAR a2
			r += lhs_assignment(code);
			r += "calloc( strlen( "+ parameterL +" ) + 1 +1, sizeof(char));\n  ";

			r += "strcat ( ";
			r += target + ", ";
			r += parameterL +" );\n  ";

			r += target + "[ strlen( "+ parameterL +" ) ] = ";
			r += parameterR +";\n  ";
			r += target + "[ strlen( "+ parameterL +" ) +1 ] = '\\0';";

			break;
		case RIGHT_APPEND:
			// strcat( a1, a2 ) concatenate prepend CHAR a1 to STRING a2
			r += lhs_assignment(code);
			r += "calloc( strlen( "+ parameterL +" ) + 1 +1, sizeof(char));\n  ";

			r += target +"[0] = " + parameterR +";\n  ";
			r += "for(int i6398jg = 0; i6398jg < strlen( "+ parameterL +" ); i6398jg++){\n  ";
			r += "  "+ target +"[i6398jg +1] = "+ parameterL +"[i6398jg];\n  ";
			r += "};";
			r += target + "[ strlen( "+ parameterL +" ) +1 ] = '\\0';";

			break;
		case APPEND:
			// strcat( a1, a2 ) concatenate onto STRING a1 STRING a2
			r += lhs_assignment(code);
			r += "calloc( strlen( "+ parameterL +" ) + strlen( "+ parameterR +" ) +1, sizeof(char));\n  ";

			r += "strcat( ";
			r += target +", ";
			r += parameterL +" );\n  ";
			r += "strcat( ";
			r += target +", ";
			r += parameterR +" );";

			break;
		default:
			throw new Error("Error, unknown String append code.");
		}
		return r;
	}
	private String createC(int opcode, Code.Const code){
		String r = "";
		String typeStr = code.constant.type().toString();

		if(typeStr.equals("[void]")) {return "@ignore";}

		if( typeStr.trim().contains("string")){
			typeStr = "char *";
		}

		if( !register.containsKey(code.target) ){
			register.put(code.target, typeStr);
			r += typeStr + SP;
		}

		String target = getRegisterValue(code.target);

		r += getRegisterValue(code.target);
		// if an array initialization, replace square brackets with braces
		String constant = code.constant.toString();
		r += " = " + constant.replace("[", "{").replace("]", "}");

		// if a string declaration, declare it as an array not a literal
		// "char * a4 =" becomes "char a4[] ="
		if(r.contains("char *")){
			String str[] = r .split(" = ");
			str[1] = str[1].replace("\"", "");
			r = str[0] + " = malloc(" + (str[1].length()+1) + " * sizeof(char));\n  ";
			for(int i = 0; i < str[1].length(); i++){
				r += target +"["+i+"] = \'" +str[1].charAt(i) +"\';\n  ";
			}
			r += target +"["+str[1].length()+"] = \'\\0\'";


//			r = r.replace("char", "static char");
//			r = r.replace(" =", "[] =");
//			// if not an array of strings, remove *
//			r = r.contains("{\"") ? r : r.replace(" *", "");
		}

		return r+";";
	}
	private String createC(int opcode, Code.Convert code){
		// This converts a value type from one to another.
		String resultType = code.result.toString();

		// Treat any type as char*, often done in prep for print statements
		resultType = resultType.equals("any") ? "char *" : resultType;

		String r = "";
		if( !register.containsKey(code.target)){
			String targetType = code.result.toString();
			register.put(code.target, targetType);

			r += targetType + SP;
		}

		String parameterL = getRegisterValue(code.target);
		String parameterR = getRegisterValue(code.operand);
		int parameterLint = new Integer(parameterL.replace(PRE, ""));

		switch(resultType){
		case("real"):
			if(code.type == Type.T_INT){
				r += parameterL;
				r += " = (real)";
				r += parameterR;
			}
			if(code.type instanceof Type.Union){
				String t[] = code.type.toString().split("\\|");
				if(
						(t[0].equals("int") || t[0].equals("real"))
					&& 	(t[1].equals("int") || t[1].equals("real"))
					){
					if(register.get(code.target).startsWith(PRE)){
						// if the existing variable inlines to another, use this variable.
						register.put(code.target, "real");
					} else {
						// otherwise create a new variable
						register.put(code.target + Config.GHOST_ADD, "real");
						register.put(code.target, PRE + code.target + Config.GHOST_ADD);
					}
					// initialize variable
					parameterL = getRegisterValue(code.target);
					r += "real " + parameterL;
					r += " = (real)";
					r += parameterR;
				}
			}
			break;
		case("int"):
			if(code.type == Type.T_REAL){
				r += parameterL;
				r += " = (int)";
				r += parameterR;
			} else if(code.type == Type.T_CHAR){
				r += parameterL;
				r += " = (int)";
				r += parameterR;
			} else if(code.type == Type.T_BOOL){
				r += parameterL;
				r += " = (int)";
				r += parameterR;
			}
			break;
		case("char *"):
			if(code.type == Type.T_STRING){ return "@ignore"; }
		if(code.type == Type.T_INT){
			r = convertTarget(parameterLint);
			String newParamToken[] = r.split(" ");
			parameterL = r.startsWith(PRE) ? newParamToken[0] :newParamToken[2];
			r += "sprintf( "+ parameterL +", \"%d\", " +parameterR+ " )";
		}
		if(code.type == Type.T_REAL){
			r = convertTarget(parameterLint);
			String newParamToken[] = r.split(" ");
			parameterL = r.startsWith(PRE) ? newParamToken[0] :newParamToken[2];
			r += "sprintf( "+ parameterL +", \"%f\", " +parameterR+ " )";
		}
		if(code.type == Type.T_BOOL){
			r = convertTarget(parameterLint);
			String newParamToken[] = r.split(" ");
			parameterL = r.startsWith(PRE) ? newParamToken[0] :newParamToken[2];
			r += "sprintf( "+ parameterL +", \"%s\", " +parameterR+ " ? \"true\" : \"false\" )";
		}
			break;
		case("[int]"):
			if(code.type == Type.T_STRING){
				return "@convert";
			}
		case("[real]"): //TODO
			if(code.type instanceof Type.UnionOfLists){ // to [real] from [int]|[real]
				if(register.get(code.target).startsWith(PRE)){
					// if the existing variable inlines to another, use this variable.
					register.put(code.target, "real *");
				} else {
					// otherwise create a new variable
					register.put(code.target + Config.GHOST_ADD, "real *");
					register.put(code.target, PRE + code.target + Config.GHOST_ADD);
				}
				// initialize variable
				parameterL = getRegisterValue(code.target);
				r += "static real * " + parameterL +";\n  ";

				// only use of arrays in stabilizer.c is a size 3 array
				r += "for(" + (jgeed38_bool ? "" : "int") + " jgeed38 = 0; jgeed38 < 3; jgeed38++){\n  ";
				r += "  "+parameterL+ "[jgeed38] = (real)" +parameterR+ "[jgeed38];\n  ";
				r += "}";
				jgeed38_bool = true; // declare only once
				return r;
			}
		default : new Error("type conversion not yet catered for.");
		}

		return r.isEmpty() ? ";" : r + ";"; // add @ignore
	}

	private String convertTarget(int parameterLint){
		String r = "", parameterL = PRE + parameterLint;
		int newParameterL = parameterLint+Config.GHOST_ADD;
		if( !register.containsKey(newParameterL)){
			register.put(newParameterL, "char *");
			parameterL = PRE + newParameterL;
			r += "char * "+ parameterL +" = calloc(STRINGMAX, sizeof(char));\n  ";
		} else {
			parameterL = PRE + newParameterL;
			r += parameterL +" = calloc(STRINGMAX, sizeof(char));\n  ";
		}
		return r;
	}

	private String createC(int opcode, Code.FieldLoad code){
		// FieldLoad extracts the value of a field from the main parameters. ref Code.FieldLoad
		/* case: sample program has method main(System.console console):
		 * this is used to get access to the println statement.
		 * Need to ignore these fieldloads... yet remember the println is needed and insert it where needed.
		 */
		String r = "";
		switch(code.field){
		case("out"):
			return"@out";
		case("println"):
			return "@println";
		case("print"):
			return "@print";
		default:
			// fieldload %4 = %0 y : {int x,int y}|{real x,real y}
			r += lhs_assignment(code);

			String parameter = getRegisterValue(code.operand);

			r += parameter +"." + code.field;
			return r + ";";
		}
	}
	/**
	 * __No forAll equivalent in C__
	 * create a count register
	 * label0 for goto returning here
	 * check if count is greater than number of elements
	 * assign this ith value to the target var
	 * increment count
	 *
	 * C throws a wobbly when you attempt a sizeof on an array passed as a parameter.
	 * The standard solution (stackoverflow) is to pass the size of the list at the same time.
	 *
	 * PRE-CONDITION
	 * For loop is used in a method/function
	 * first param is the array, second param is the size of the array
	 */
	private String createC(int opcode, Code.ForAll code){
		String r = "";
		r += "int count =" +SP;
		r += code.type == Type.T_STRING || code.modifiedOperands.length == 0 ?
					"0" :
					PRE+code.sourceOperand +"[0]";
		r += ";\n  "; // includes a tab

		r += Config.PRE_LOOP + code.target + ": ;\n  "; // Top of loop label

		r += "if(count ==" +SP;
		if(code.type == Type.Strung.T_STRING){
			r += "strlen("+PRE+code.sourceOperand +") ";
		} else {
			r += code.modifiedOperands.length == 0 ?
					PRE + "1 )" :         // this assumes array size is the second parameter
						PRE+code.sourceOperand +"[1]";
		}
		r += "){ goto" + SP;
		r += code.target + ";" +SP;
		r += "}\n  ";

		if( !register.containsKey(code.indexOperand)){
			String type = code.type.toString();
			type = type.equals("string") ? "char" : type;
			register.put(code.indexOperand, type);
			r += type + SP;
		}
		r += getRegisterValue(code.indexOperand);
		r += " = ";
		r += PRE + code.sourceOperand;
		r += "[count];\n  "; // includes a tab

		r += "count++;";

		return r;
	}
	private String createC(int opcode, Code.Goto code){
		// Any target = operand;
		String r = "";
		r += "goto" +SP;
		r += code.target;
		return r + ";";
	}
	private String createC(int opcode, Code.If code){
		String r = "";
		String parameterL = getRegisterValue(code.leftOperand);
		String parameterR = getRegisterValue(code.rightOperand);

		r += "if (" +SP;
		r += parameterL +SP;

		switch(code.op){
		// If eq, ne, lt, le, gt, ge, elemof/in, ss and sse
		case EQ:
			r += "==" +SP; break;
		case NEQ:
			r += "!=" +SP; break;
		case LT:
			r += "<" +SP; break;
		case LTEQ:
			r += "<=" +SP; break;
		case GT:
			r += ">" +SP; break;
		case GTEQ:
			r += ">=" +SP; break;
		case ELEMOF:
			r += "@TODO" +SP; break;
		case SUBSET:
			r += "@TODO" +SP; break;
		case SUBSETEQ:
			r += "@TODO" +SP; break;
		default:
			throw new Error("Code.if error, code.op not recognised.");
		}

		r += parameterR +SP;
		r += ") {" +SP;
		r += "goto" +SP;
		r += code.target +";" +SP;
		r += "};";
		return r;
	}
	private String createC(int opcode, Code.IfIs code){
		String r = "";
		String type = code.rightOperand.toString();
		r += "if(";
		if(type.charAt(0) == '!'){
			r += SP+ "!";
			type = type.substring(1);
		}
		r += PRE +code.operand +".type" +SP;
		r += "==" +SP;
		switch(type){
		case("int"):
			r += "INT_TYPE"; break;
		case("char"):
			r += "CHAR_TYPE"; break;
		case("real"):
			r += "REAL_TYPE"; break;
		case("bool"):
			r += "BOOL_TYPE"; break;
		case("string"):
			r += "STR_TYPE"; break;
		case("null"):
			r += "NULL_TYPE"; break;
		case("byte"):
			r += "BYTE_TYPE"; break;
		default:
			new Error("error, Code.IfIs, type not recognised.");
		}
		r += "){ goto" +SP;
		r += code.target +";" +SP;
		r += "}";
		return r +";";
	}
	private String createC(int opcode, Code.IndexOf code){
		String r = "";
		r += lhs_assignment(code);

		String parameterL = "", parameterR = "";
		parameterL = getRegisterValue(code.leftOperand);
		parameterR = getRegisterValue(code.rightOperand);

		if(code.type.toString().equals("string")){
			r += parameterL + "[ ";
			r += parameterR + " ]";
		} else {
			r += parameterL + "[ ";
			r += parameterR + " ]";
		}
		return r + ";";
	}
	private String createC(int opcode, Code.IndirectInvoke code){
		// IndirectInvoke calls functions passed as a method parameter.
		// only case so far, uses println which has been stored as a token earlier
		// Returns @indirectinvoke token and use token already stored in the register
		// to determine the method needed.
		// may not work for the general case...
		String r = "";

		switch(opcode){
		case(Code.OPCODE_indirectinvokemd):
		case(Code.OPCODE_indirectinvokemdv):
		case(Code.OPCODE_indirectinvokefn):
			return "@indirectinvoke";
		case(Code.OPCODE_indirectinvokefnv): // --
			r += generateFunctionType(code);
			break;
		default:
			throw new Error("ERROR: createC(), IndirectInvoke case not covered yet.");
		}
		return r;
	}

	private String createC(int opcode, Code.Invoke code){
		String r = "";
		// determine return type
		String returnType = code.type.ret().toString();
		returnType = returnType.trim().equals("string") ? "char *" : returnType;
		returnType = returnType.trim().equals("!null")  ? "int" : returnType;
		returnType = returnType.trim().equals("[real]")  ? "real *" : returnType;
		returnType = returnType.trim().equals("[int]")  ? "int *" : returnType;

		// is a lambda function?
		if(returnType.contains("=>")){
			String funcType = returnType.split("=> ")[1];
			funcType += "(*)";
			funcType += returnType.substring(returnType.indexOf("("), returnType.indexOf(")")+1);
			returnType = funcType;
		}

		// all four invoke types present
		switch(opcode){
		case(Code.OPCODE_invokefn):
		case(Code.OPCODE_invokemd):
			if(Compiler.types.containsKey(returnType)){
				Compiler.types.put(PRE+code.target, returnType);
				returnType = Compiler.types.get(returnType);
				// put variable name into types, with code.type -> identifies for toString operation
			}

			if( !register.containsKey(code.target)){
				register.put(code.target, returnType);
				r += returnType +SP;
			}

			String type = code.assignedType().toString();
			if(type.contains("=>")){ // isa lambda function
				String funcType = type.split("=> ")[1];
				funcType += "(*)";
				funcType += type.substring(type.indexOf("("), type.indexOf(")")+1);
				type = Compiler.types.get(funcType);
			}

			type = type.equals("string") ? "char *" : type;
			type = type.equals("!null")  ? "int" : type;
			type = type.equals("[real]")  ? "real *" : type;
			type = type.equals("[int]")  ? "int *" : type;
			r += checkRegisterForTypeChange(code.target, type) ? type + SP : "";
			r += getRegisterValue(code.target);
			r += " = ";

		case(Code.OPCODE_invokefnv):
		case(Code.OPCODE_invokemdv):
			String s = idMethod(code);
			if(
					s.contains("whileyPrecision") &&
					!s.contains(";")){ // single line only
				r = s + ";\n  ";
			} else {
				r += s;
			}
			// fix for snprintf, declare char* first then do sprintf
			r = r.contains("snprintf") ? r.replaceFirst(" = ", " = calloc(STRINGMAX, sizeof(char));\n  ") : r;
		}

		return r + ";";
	}


	private String createC(int opcode, Code.Lambda code){
		String r = "";
		r += lhs_assignment(code);
		r += "&" + Config.METHOD_PRE+ code.name.name();
		r += ";";

		return r;
	}

	/*
	 * lengthof
	 * In C length of an array is size of the array divided by the size of the first element
	 *      sizeof(A) / sizeof(A[0])
	 */
	private String createC(int opcode, Code.LengthOf code){
		String r = "";
		String operand = getRegisterValue(code.operand);
		r += lhs_assignment(code);
		if(code.type.toString().equals("string")){
			r += "strlen( ";
			r += operand;
			r += ")";
		} else {
			r += "sizeof(" +SP;
			r += operand + SP;
			r += ")" +SP;
			r += "/" +SP;
			r += "sizeof(" +SP;
			r += operand +"[0]" +SP;
			r += ")";
		}
		return r + ";";
	}
	private String createC(int opcode, Code.Loop code){
		String r = "";
		r += Config.PRE_LOOP + code.target + ": ;";

		return r;
	}
	private String createC(int opcode, Code.LoopEnd code){
		String r = "";
		r += "goto" +SP;
		r += Config.PRE_LOOP + code.label;
		r += ";\n  ";
		r += code.label + ": ;";
		return r;
	}
	private String createC(int opcode, Code.NewList code){
		// contents of the list are already defined
		// newlist %8 = (%2, %3, %4, %5, %6, %7) : [int]
		String r = "";
		String listType = code.assignedType().toString();
		String elementType = listType.substring(1, listType.length()-1);

		if(register.containsKey(code.target))
			new Error("error createC(int, Code.NewList), creating a new list using an existing variable name.");
		register.put(code.target, listType);
		String target = getRegisterValue(code.target);

		r += elementType +"* ";
		r += target;
		r += " = malloc(" +code.operands.length +" * ";
		r += "sizeof(" +elementType+ "));\n  ";
		for(int i=0; i < code.operands.length; i++){
			r += target +"[" +i+ "] = ";
			r += PRE + code.operands[i];
			r += i != code.operands.length-1 ? ";\n  " : "";
		}
		return r +";";
	}
	private String createC(int opcode, Code.NewRecord code){
		String r = "";
		String t = code.type.toString();
		if(!Compiler.types.containsKey(t)){
			// create an anonymous struct for the record
			String[] list = t.substring(1, t.length()-1).split(",");
			String twyce = "{";
			for(int i = 0; i < list.length; i++){
				twyce += "Any " + list[i].trim().split(" ")[1] +"; ";
			}
			twyce += "}";
			String structName = "Record"+code.target;
			r += "typedef struct " + twyce +structName +";\n  ";
			Compiler.types.put(t, structName);
			Compiler.types.put( PRE + code.target, t);
			r += lhs_assignment(code, structName);
		} else {
			if( !Compiler.types.containsKey(PRE + code.target) ){
				Compiler.types.put( PRE + code.target, t);
			}
			r += lhs_assignment(code, Compiler.types.get(t));
		}
		r += "{ ";
		boolean comma = false;
		for(int i = 0; i < code.operands.length; i++){
			r += comma ? ", " : "";
			comma = true;
			r += PRE+code.operands[i];
		}
		r += " };";
		return r;
	}
	private String createC(int opcode, Code.NewTuple code){
		String r = "";
		r += lhs_assignment(code);
		switch(code.operands.length){
		case(2):
			r += "Tuple"; break;
		case(3):
			r += "Tuple3"; break;
		default:
			new Error("error, Code.NewTuple, only coded for 2 and 3 element tuples.");
		}
		r += "(" +SP;
		int i = 0;
		boolean first = true;
		while( i < code.operands.length){
			r += first ? "" : ", ";
			first = false;
			r += PRE +code.operands[i++];
		}
		r += ")";
		return r +";";
	}
	private String createC(int opcode, Code.NewSet code){
		// not implemented
		String r = "@ignore";

		return r;
	}
	private String createC(int opcode, Code.Nop code){
		// A no-operation bytecode, just ignore.
		String r = "@ignore";
		return r;
	}
	private String createC(int opcode, Code.Return code){
		String r = "";
		r += "return";

		if(code.type != Type.Void.T_VOID){
			r += SP + getRegisterValue(code.operand);
		}

		return r + ";";
	}
	private String createC(int opcode, Code.Switch code){
		// registering a switch statement as present in this method
		register.put(999999999, "switch");

		String r = "";
		r += "switch( ";
		r += PRE+ code.operand;
		r += " ){\n";
		int i = 0;
		while(i < code.branches.size()){
			r += "    case "+code.branches.get(i).first() + " : ";
			r += "goto "+code.branches.get(i++).second() + ";\n";
		}
		r += "    default : goto "+code.defaultTarget+ ";\n";
		r += "  }";
		return r;
	}
	private String createC(int opcode, Code.Throw code){
		// not yet implemented
		String r ="@ignore";

		return r + ";";
	}
	private String createC(int opcode, Code.TryCatch code){
		// not yet implemented
		String r ="@ignore";

		return r + ";";
	}
	private String createC(int opcode, Code.TupleLoad code){
		String r ="";
		r += lhs_assignment(code);
		r += "Int(" +SP;
		r += "((Any**)" +PRE +code.operand +".ptr)";
		r += "[" + code.index +"]";
		r += "->i";  // will not cope with other types ie: char, real, etc.
		r += ")"; // end Int()
		return r + ";";
	}
	private String createC(int opCode,	Code.UnArithOp code){
		String r = "";
		r += lhs_assignment(code);
		r += "-";
		r += getRegisterValue(code.operand);
		return r+";";
	}
	private String createC(int opCode,	Code.Update code){
		String r = "", parameter = "";;
		if(code.afterType instanceof Type.Record){
			r += lhs_assignment(code);
			// trim off "="
			r = r.split("=")[0].trim();
			r += "."+code.fields.get(0);
			r += " = ";
		} else {

			parameter = getRegisterValue(code.operands[0]);

			r += PRE+code.target;
			r += "[";
			r += parameter +"]";
			r += " = ";
		}

		r += getRegisterValue(code.operand);

		return r+";";
	}

	//=============================================>> TODO
	// HELPERS
	//=======================================>> TODO

	/**
	 * Searches the register hashmap for the variable to use.
	 * The hashmap key, value looks like {5=a7, 7=a8, 8=int}
	 * Start with var 5, will return variable a8
	 * @param var the variable value being checked
	 * @return the variable to be used
	 */
	public String getRegisterValue(int var){
		String varStr;
		do{
			// for example, register contains {5=a7, 7=a8, 8=int}
			varStr = register.containsKey(var) ?
				register.get(var) :
					PRE + var;
			if(varStr.startsWith(PRE))
				// var = 5 becomes var = 7 then 8
				var = new Integer(varStr.replace(PRE, ""));
			// when var = 8, guard will fail
		}while( varStr.startsWith(PRE) );

		return PRE + var;
	}

	/**
	 * Check register to see if the type has changed. Whiley has the capacity to union types.
	 * If yes, create a new variable with the new type. Point the old variable to the new one.
	 * This has the effect of creating a new C variable that is used from this point.
	 * If the type changes back, this method will fail...
	 * @param target
	 * @param type
	 */
	private boolean checkRegisterForTypeChange(int target, String type){
		boolean result = false;
		String variable = getRegisterValue(target);
		int varInt = new Integer(variable.replace(PRE, ""));
		String existingType = register.get(varInt);
		if( !existingType.equals(type) ){
			// variable has changed type.
			// create new variable of this type, point old variable to the new one.
			// may have problems if the type changes back...
			int newVarInt = varInt;
			while(true){
				newVarInt += Config.GHOST_ADD;
				if( register.containsKey(newVarInt)){
					if(register.get(newVarInt).equals(type)){
						result = true;
						break;
					}
				} else {
					type = type.equals("string") ? "char *" : type;
					register.put(newVarInt, type);
					register.put(varInt, PRE + newVarInt);
					result = true;
					break;
				}
			}
		}
		return result;
	}

	/**
	 * Create a C switch statement to allow function casts to be included in C code
	 */
	private String generateFunctionType(Code.IndirectInvoke code){
		String r = "";
		r += lhs_assignment(code);

		String operand = getRegisterValue(code.operand);

		String[] parameters = new String[code.operands.length];
		for(int i=0; i < code.operands.length; i++){
			parameters[i] = getRegisterValue(code.operands[i]);
		}

		r += operand + "( ";
		boolean comma = false;
		for(int i=0; i < code.operands.length; i++){
			r += comma ? ", " : "";
			comma = true;
			r += parameters[i];
		}
		r += " );";

		return r;
	}

	/**
	 * Creates a csv parameter list. Empty string if there are no parameters.
	 * @param AbstractNaryAssignable<Type.FunctionOrMethod> code
	 * @return CSV String that plugs in as a methods parameter list.
	 */
	private String parameters(AbstractNaryAssignable<Type.FunctionOrMethod> code){
		String result = "";

		// native parameters use int, char, pointer, etc. Not type Any.
		// translate to type Any and call the correct value.
		// arraylist is empty if n/a
		ArrayList<Type> parameters = parentMethod.getNativeParameters(((Code.Invoke)code).name.name());
		Iterator<Type> itr = parameters.iterator();

		boolean comma = false;
		for(int i=0; i<code.operands.length; i++){
			result += comma ? ", " : "";
			comma = true;

			if( register.containsKey(code.operands[i])){

				result += register.get(code.operands[i]).startsWith(PRE) ?
						register.get(code.operands[i]) :
							PRE + code.operands[i];
				continue;
			}

			// invoke "println" can refer to (System.Console) =>"out" in the first operand.
			// if so, skip it as we do not need it in the C code
			if(((Code.Invoke)code).name.name().equals("println")
					&& register.get(code.operands[i]) != null
					&& register.get(code.operands[i]).equals("@out"))
				continue;
			result += PRE +code.operands[i];
			// add to Any type to get the correct paramater for the native method
			if(itr.hasNext()){
				String type = itr.next().toString().trim();
				switch(type){
				case("int"):
					result += ".i"; break;
				case("char"):
					result += ".c"; break;
				case("bool"):
					result += ".b"; break;
				case("real"):
					result += ".r"; break;
				case("string"):
					result += ".s"; break;
				default:
					if(type.matches("method.*")){ // lambda address
						result += ""; break; // just pass through the Any
					}
					String sr, si, sc, sb;
					sr = Pattern.quote("[real]");
					si = Pattern.quote("[int]");
					sc = Pattern.quote("[char]");
					sb = Pattern.quote("[bool]");
					if(		type.matches(sr) ||
							type.matches(si) ||
							type.matches(sc) ||
							type.matches(sb)){
						result += ""; break;
					}
					throw new Error("Error: parameters(Code), parameter type not catered for.");
				}
			}
		}

		return result;
	}

	/*
	 * Determines the lhs of the assignment.
	 *
	 */
	private String lhs_assignment(Code.AbstractAssignable code){
		String ret = code.assignedType().toString(); // for bytecode add %3 = %0, %2 : int
		ret = ret.equals("string") ? "char *" : ret;


		return lhs_assignment(code, ret);
	}

	private String lhs_assignment(Code.AbstractAssignable code, String dataType){
		// is this an array - yes then "a6[] =" else "a6 ="

		boolean assigningArray = false;
		String arr = code.assignedType().toString();
		if( !(arr.charAt(0) == '{' && arr.charAt(arr.length()-1) == '}') ){
			// arr does not represent a record
			if(arr.contains("[int]") || arr.contains("[real]")){ assigningArray = true; }
		}

		String r = "";
		if( !register.containsKey(code.target)){
			register.put(code.target, dataType);
			r += dataType +SP;
			r += assigningArray ? "*" : "";
		}

		String target = getRegisterValue(code.target);
		int targetInt = new Integer(target.replace(PRE, ""));
		r += getRegisterValue(targetInt);

		if(code.toString().contains("lambda")){
			dataType = ((Code.Lambda)code).type.ret().toString();
			r = dataType +" (*"+target+")(";
			ArrayList<Type> operandTypes = ((Code.Lambda)code).type.params();
			boolean comma = false;
			for(int i = 0; i < operandTypes.size(); i++){
				r += comma ? ", " : "";
				comma = true;
				r += operandTypes.get(i);
			}
			r += ")";
		}

		r += SP+ "=" +SP;
		return r;
	}

	/*
	 * Identifies special cases; Library methods, Native methods
	 */
	private String idMethod(Code.Invoke whileyMethod){
		String err = "error, Code.Invoke, idMethod() ";
		String r = "";
		String name = whileyMethod.name.name();


		switch(whileyMethod.name.module().toString()){
		case("whiley/lang/Int"):
		case("whiley/lang/Real"):
		case("whiley/lang/Any"):
			switch(name){
			case("toString"):
				if(Compiler.types.containsKey(PRE+whileyMethod.operands[0])){
					// Records ??
					String op = "";
					if(register.containsKey(whileyMethod.operands[0])){
						op = register.get(whileyMethod.operands[0]);
					} else {
						op = PRE+whileyMethod.operands[0];
					}
					String type = Compiler.types.get(op);
					String[] varNames = type.substring(1, type.length()-1).split(",");
					switch(varNames.length){
					case(1): r += "recordToStr1( "; break;
					case(2): r += "recordToStr2( "; break;
					case(3): r += "recordToStr3( "; break;
					case(4): r += "recordToStr4( "; break;
					case(5): r += "recordToStr5( "; break;
					case(6): r += "recordToStr6( "; break;
					case(7): r += "recordToStr7( "; break;
					default: new Error("recordToStr Record size not catered for.");
					}
					boolean comma = false;
					String varName;
					for(int i = 0; i < varNames.length; i++){
						varName = varNames[i].split(" ")[1];
						r += comma ? ", " : "";
						r += "\""+ varName +"\", ";
						r += op +"."+ varName;
						comma = true;
					}
					r += ")";
				} else {
					r += printToWhileyStyle(
							whileyMethod.target,
							whileyMethod.operands[0],
							parameters(whileyMethod));
				}
				return r;
			default:
				new Error(err +"method in Whiley \"Any\" library not recognised.");
			}
		case("whiley/lang/Math"):
			switch(name){
			case("floor"):
				r += "floor(" +SP;
				r += parameters(whileyMethod) +SP;
				r += ");";
				return r;
			case("abs"):
				r += name +SP;
				r += "(" +SP;
				r += parameters(whileyMethod) +SP; // may need to expand to real
				r += ");";
				return r;
			default:
				new Error(err +"method in Whiley \"Math\" library not recognised.");
			}

		// not a library function or method
		default:
			// assuming a declared native method, returning a C primitive, wrap it in a Any constructor
			boolean constructor = false;
			r += parentMethod.getNativeParameters(name).isEmpty()
					|| name.startsWith("cf_lib_") ? "" : Config.METHOD_PRE;
			r += parentMethod.isMethod(name)
					&& !parentMethod.getMethod(name).hasModifier(Modifier.EXPORT) ? Config.METHOD_PRE : "";
			r += name +SP;
			r += "(" +SP;
			r += parameters(whileyMethod) +SP;
			r += ")";
			r += constructor ? ")" : "";
		}
		return r;
	}

	protected String printToWhileyStyle(int _target, int _operand, String parameters){
		String r = "";
		String target = getRegisterValue(_target);
		int targetInt = new Integer(target.replace(PRE, ""));
		String operand = getRegisterValue(_operand);
		String operandType = register.get( new Integer(operand.replace(PRE, "")) );
		if( register.get(targetInt).equals("char *") ||
				( register.containsKey(_target + Config.GHOST_ADD)
				&& !register.get(_target + Config.GHOST_ADD).equals("char *")
				)){
			r += "snprintf( ";
			r += target;
			r += ", STRINGMAX";
			r += ", \"";
			r += operandType.equals("int") ? "%d" : // type of parameter input
				operandType.equals("char") ? "%c" :
				operandType.equals("bool") ? "%s" :
				operandType.equals("real") ? "%f" : "fail";
			r += "\", ";
			//		String parameters = parameters(whileyMethod);
			if( operandType.equals("bool") && !parameters.contains(", ")){
				// caters for a single param only
				r += parameters + " ? \"true\" : \"false\"";
			} else {
				r += parameters +SP; // parameter input
			}
			r += ");\n  ";
		} else {
			target = PRE + (new Integer(operand.replace(PRE, "")) + Config.GHOST_ADD);
		}
		r += "whileyPrecision( "+target+" )";
		return r;
	}

	//========================================================================
	// Token Class
	//========================================================================
	public static class Token{

		private static Token tokenSingleton;
		private Statement_Factory statementFactory;
		private String result;

		private Token(){}

		public static Token getInstance(){
			if(tokenSingleton == null){
				// double checked locking
				synchronized(Token.class){
					if(tokenSingleton == null){
						tokenSingleton = new Token();
					}
				}
			}
			return tokenSingleton;
		}

		public Token create(Statement_Factory statementFactory, String token, Code code){
			this.statementFactory = statementFactory;
			result = switchToGenerate(token, code, statementFactory.register);
			return tokenSingleton;
		}

		public boolean isEmpty(){ return result.isEmpty(); }
		public String  toString(){ return result; }

		/////////////////// OVERLOADED TOKENS //////////////////////////////

		private String invokeEarlierMethod(String token, Code code, HashMap<Integer, String> register){
			// a recursive call back to switchToGenerate(), with called token and the existing code.
			int key = ((AbstractSplitNaryAssignable<?>)code).operand;
			return switchToGenerate(register.get(key), code, register);
		}

		private String switchToGenerate(String token, Code code, HashMap<Integer, String> register){
			switch(token){
			case("@ignore"):
				// compiler instruction, ignore this token
				return "";
			case("@indirectinvoke"):
				// is invoking an earlier declared method.
				// only case so far is println
				return invokeEarlierMethod(token, code, register);

			case("@println"):
				// print a line
				if(code instanceof AbstractSplitNaryAssignable<?> &&
						((AbstractSplitNaryAssignable<?>)code).operands.length > 0)
					return println(code, register);
				return "";

			case("@print"):
				// print a line
				if(code instanceof AbstractSplitNaryAssignable<?> &&
						((AbstractSplitNaryAssignable<?>)code).operands.length > 0)
					return print(code, register);
				return "";

			case("@out"):
				// result of Whiley getting the System.Console package.
				// <stdio> is included automatically in the compiler header file, so ignore.
				return "";

			case("@convert"):
				return "";
			}
			throw new Error("Calling a Token that has no corrosponding Statement.");
		}

		/////////////////// Printing Specific Token Code ///////////////////////////////////
		private String print(Code code, HashMap<Integer, String> register){
			String SP = statementFactory.SP;
			String PRE = statementFactory.PRE;
			String r = "printf (" +SP;

			// get correct variable
			int operands = ((AbstractSplitNaryAssignable<?>)code).operands[0];
			String varStr = statementFactory.getRegisterValue(operands);
			operands = new Integer(varStr.replace(PRE, ""));

			varStr = statementFactory.register.get(operands);

			switch(varStr.trim()){
			case("int"):
				r += "\"%i\", "; break;
			case("bool"):
				r += "\"%s\", "+ PRE+operands +" ? \"true\" : \"false\");";
				return r;
			case("char *"):
				r += "\"%s\", "; break;
			case("real"):
				r = "";
				// to get Whiley style printing
				if(!register.containsKey(985468)){
					register.put(985468, "char *");
					r += "char a985468[STRINGMAX];\n  ";
				}
				r += statementFactory.printToWhileyStyle(
						985468,
						operands,
						PRE + operands);
				r += ";\n  ";
				r += "printf(\"%s\", a985468);";
				return r;
			default:
				throw new Error("Print cannot yet print type "+varStr);
			}
			r += register.get(operands).startsWith(PRE) ?
					register.get(operands) :
						PRE + operands;
			r += " );";
			return r;
		}

		private String println(Code code, HashMap<Integer, String> register){
			String r = print(code, register);
			if(r.contains(" printf")){
				String[] arr = r.split(" printf");
				arr[1] = arr[1].replace("\",", "\\n\",");
				r = arr[0]+" printf"+arr[1];
			} else {
				r = r.replace("\",", "\\n\",");
			}
			return r;
		}
	}
}
