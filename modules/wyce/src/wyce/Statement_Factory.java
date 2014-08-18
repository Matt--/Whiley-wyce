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
	private String currentMethodName;
	public Statement_Factory(){}

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
			if( !result.equals("@convert") ){
				register.put(((AbstractAssignable)code).target, result); // note: indirectinvoke gives key of -1
			}
			// this token may generate code...
			Token token = Token.getInstance().create(result, code, register);
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
		// determine type, Any or Record
		String type = "Any";
		if(Compiler.types.containsKey(code.type.toString())){
			type = Compiler.types.get(code.type.toString());
			// put variable name into types, with code.type -> identifies for toString operation
			Compiler.types.put(PRE+code.target, code.type.toString());
		}

		if(isGhostVariable(code.target, code.operand)){
			return "@assign";
		}

		r += lhs_assignment(code, type);

		r += register.get(code.operand) == null ? "Null()" : register.get(code.operand);
		return r + ";";
	}


	private String createC(int opcode, Code.Assume code){
		String r = "";
		r += "@ignore";
		return r;
	}

	private String createC(int opcode, Code.BinArithOp code){
		String r = "";
		// determine left parameter
		String parameterL = "";
		if(register.containsKey(code.leftOperand)){
			parameterL = register.get(code.leftOperand);
		} else {
			parameterL = PRE + code.leftOperand;
		}
		// determine right parameter
		String parameterR = "";
		if(register.containsKey(code.rightOperand)){
			parameterR = register.get(code.rightOperand);
		} else {
			parameterR = PRE + code.rightOperand;
		}

		switch(opcode){
		case(Code.OPCODE_add):
			// type target = constant ;
			r += lhs_assignment(code);
			r += "wyce_add(" +SP;
			r += parameterL;
			r += "," +SP;
			r += parameterR;
			r += ")";
			break;
		case(Code.OPCODE_sub):
			// type target = constant ;
			r += lhs_assignment(code);
			r += "wyce_sub(" +SP;
			r += parameterL;
			r += "," +SP;
			r += parameterR;
			r += ")";
			break;
		case(Code.OPCODE_mul):
			// type target = constant ;
			r += lhs_assignment(code);
			r += "wyce_mul(" +SP;
			r += parameterL;
			r += "," +SP;
			r += parameterR;
			r += ")";
			break;
		case(Code.OPCODE_div):
			// type target = constant ;
			r += lhs_assignment(code);
			r += "wyce_div(" +SP;
			r += parameterL;
			r += "," +SP;
			r += parameterR;
			r += ")";
			break;
		case(Code.OPCODE_rem):
			// type target = constant ;
			r += lhs_assignment(code);
			r += "wyce_mod(" +SP;
			r += parameterL;
			r += "," +SP;
			r += parameterR;
			r += ")";
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
		String r = "";
		switch(opcode){
		case(Code.OPCODE_append):
			// type target = constant ;
//			r += lhs_assignment(code);
//			r += "{" +SP;
			r += "#### appending arrays not yet catered for";
//			r += "}";
			break;

		case(Code.OPCODE_appendl):

		case(Code.OPCODE_appendr):

		default:
			throw new Error("Error: createC(int opCode, Code.BinArithOp), opcode not catered for.");
		}
		return r + ";";
	}

	private String createC(int opcode, Code.BinStringOp code){
		String r = "";
		switch(code.kind){
		case LEFT_APPEND:
			// strcat( a1, a2 ) concatenate onto STRING a1, CHAR a2
			r += "Any charNowStr = toStr(";
			r += PRE +code.rightOperand;
			r += ");\n  "; // NB 2 space tab here
			r += lhs_assignment(code);
			r += "Str(" +SP;
			r += "strcat (" +SP;
			r += PRE +code.leftOperand +".s ," +SP;
			r += "charNowStr.s )" +SP;
			r += ");";
			break;
		case RIGHT_APPEND:
			// strcat( a1, a2 ) concatenate prepend CHAR a1 to STRING a2
			r += "Any charNowStr = toStr(";
			r += PRE +code.leftOperand;
			r += ");\n  "; // NB 2 space tab here
			r += lhs_assignment(code);
			r += "Str(" +SP;
			r += "strcat (" +SP;
			r += "charNowStr.s, " +SP;
			r += PRE +code.rightOperand +".s" +SP;
			r += ")" +SP;
			r += ");";
			break;
		case APPEND:
			// strcat( a1, a2 ) concatenate onto STRING a1 STRING a2
			r += lhs_assignment(code);
			r += "Str(" +SP;
			r += "strcat (" +SP;
			r += PRE +code.leftOperand +".s ," +SP;
			r += PRE +code.rightOperand +".s )" +SP;
			r += ");";
			break;
		default:
			throw new Error("Error, unknown String append code.");
		}
		return r;
	}
	private String createC(int opcode, Code.Const code){
		String r = "";
		switch(opcode){
		// All variables are "Any" structs {type.i, data}
		case(Code.OPCODE_const):
			// Any target = Int(constant);
			r += lhs_assignment(code);
			switch(code.constant.type().toString()){
			case("null"):
				r += "Null()"; // type
				break;
			case("[void]"):
				r = r.substring(0, r.length()-2); // Any a4[9];
				r += "["+ Config.MAX_ARRAY_SIZE + "]";
				break;
			case("int"):
				r += "Int("; // type
				r += code.constant;
				r += ")";
				break;
			case("real"):
				r += "Real("; // type
				r += code.constant;
				r += ")";
				break;
			case("char"):
				r += "Char("; // type
				r += code.constant;
				r += ")";
				break;
			case("string"):
				r += "Str("; // type
				r += code.constant;
				r += ")";
				break;
			case("bool"):
				r += "Bool("; // type
				r += code.constant;
				r += ")";
				break;
			case("byte"):
				r += "Byte("; // type
				r += code.constant;
				r += ")";
				break;
			case("{int+}"):
				// not catered for yet
				return "";
			case("[string+]"):
				r = "Any " + PRE+code.target +"[] = ";
				r += "{";
				String list = code.constant.toString().replace("[", "").replace("]", "");
				String tokens[] = list.split(",");
				for(int i = 0; i < tokens.length; i++){
					r += "Str( " +tokens[i]+ " )";
					if(i != tokens.length-1)
						r += ", ";
				}
				r += "}";
				break;
			default:
				new Error("error, Code.Const, constant.type not recognised.");
			}
			break;
		}
		return r+";";
	}
	private String createC(int opcode, Code.Convert code){
		// This converts a value type from one to another.
		if(code.result.equals(Type.T_ANY))
			return "@convert";

		String r = "", parameterL = "", parameterR = "";
		if( !register.containsKey(code.target)){
			r += "Any" +SP+ PRE+code.target+";\n  ";
			register.put(code.target, PRE+ code.target);
		}

		parameterL = register.containsKey(code.target) ?
				register.get(code.target) :
					PRE+code.target;
		if(code.operand == code.target){
			parameterR = parameterL;
		} else {
			parameterR = PRE+code.operand;
		}
		switch(code.result.toString()){
		case("real"):
			if(code.type == Type.T_INT){
				r += parameterL + ".type = ";
				r += "REAL_TYPE;\n";
				r += "  "+lhs_temp(9999)+"Int("+parameterR+".i);\n";
				r += "  "+parameterL+".r = (double) "+PRE+"9999.i;";
				break;
			}
		case("int"):
			if(code.type == Type.T_REAL){
				r += parameterL + ".type = ";
				r += "REAL_TYPE;\n";
				r += "  "+lhs_temp(9999)+"Int("+parameterR+".i);\n";
				r += "  "+parameterL+".r = (int) "+PRE+"9999.i);";
				break;
			}
			if(code.type == Type.T_CHAR){
				r += parameterL + ".type = ";
				r += "INT_TYPE;\n";
				r += "  "+lhs_temp(9999)+"Char("+parameterR+".c);\n";
				r += "  "+parameterL+".i = (int) "+PRE+"9999.c;";
				break;
			}
			if(code.type == Type.T_BOOL){
				r += parameterL + ".type = ";
				r += "INT_TYPE;\n";
				r += "  "+lhs_temp(9999)+"Bool("+parameterR+".b);\n";
				r += "  "+parameterL+".i = (int) "+PRE+"9999.b;";
				break;
			}
		case("[int]"):
			if(code.type == Type.T_STRING){
				return "@convert";
			}
		default : new Error("type conversion not yet catered for.");
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

			String parameter = register.containsKey(code.operand) ?
					register.get(code.operand) :
						PRE+code.operand;

			r += parameter +"." + code.field;
			return r + ";";
		}
	}
	/*
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
			r += "strlen("+PRE+code.sourceOperand +".s) ";
		} else {
			r += code.modifiedOperands.length == 0 ?
					PRE + "1.i )" :         // this assumes array size is the second parameter
						PRE+code.sourceOperand +"[1]";
		}
		r += "){ goto" + SP;
		r += code.target + ";" +SP;
		r += "}\n  ";

		r += lhs_assignment(code);
		r += "Char( ";
		r += PRE + code.sourceOperand;
		r += code.type == Type.Strung.T_STRING ? ".s" : "";
		r += "[count] );\n  "; // includes a tab

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
		r += "if (" +SP;
		// determine left parameter
		String parameterL = "";
		if(register.containsKey(code.leftOperand)){
			parameterL = register.get(code.leftOperand);
		} else {
			parameterL = PRE + code.leftOperand;
		}

		// need a runtime determination of the data type
		// this will not work for (for example) comparing strings
		r += "dataAsInt( "+ parameterL +" )" +SP;
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
			break;
		}

		// determine right parameter
		String parameterR = "";
		if(register.containsKey(code.rightOperand)){
			parameterR = register.get(code.rightOperand);
		} else {
			parameterR = PRE + code.rightOperand;
		}

		r += "dataAsInt( "+ parameterR +" )" +SP;
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
		parameterL = register.containsKey(code.leftOperand) ?
				register.get(code.leftOperand) :
					PRE + code.leftOperand;
		parameterR = register.containsKey(code.rightOperand) ?
				register.get(code.rightOperand) :
					PRE + code.rightOperand;

		if(code.type.toString().equals("string")){
			r += "Char( ";
			r += parameterL + ".s[ ";
			r += parameterR + ".i ] )";
		} else {
			r += parameterL + "[";
			r += parameterR + ".i]";
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
			return "@indirectinvoke";
		case(Code.OPCODE_indirectinvokemdv):
			return "@indirectinvoke";
		case(Code.OPCODE_indirectinvokefn):
			return "@indirectinvoke";
		case(Code.OPCODE_indirectinvokefnv): // --
			r += generateFunctionTypeSwitch(code);
			break;
		default:
			throw new Error("ERROR: createC(), IndirectInvoke case not covered yet.");
		}
		return r;
	}

	private String createC(int opcode, Code.Invoke code){
		String r = "";
		// determine return type
		String type = determineReturnType(code);

		// all four invoke types present
		switch(opcode){
		case(Code.OPCODE_invokefn):
		case(Code.OPCODE_invokemd):
			String returnType = code.type.ret().toString();
			if(Compiler.types.containsKey(returnType)){
				type = Compiler.types.get(returnType);
				// put variable name into types, with code.type -> identifies for toString operation
				Compiler.types.put(PRE+code.target, code.type.ret().toString());
			}
			r += lhs_assignment(code, type);
		case(Code.OPCODE_invokefnv):
		case(Code.OPCODE_invokemdv):
			r += idMethod(code);
		}

		return r + ";";
	}

	private String createC(int opcode, Code.Lambda code){
		String r = "";
		r += lhs_assignment(code);
		r += "Fptr( ";
		r += "&" + Config.METHOD_PRE+ code.name.name();
		r += ", "+ code.type.params().size();
		r += " );";

		return r;
	}

	/*
	 * lengthof
	 * In C length of an array is size of the array divided by the size of the first element
	 *      sizeof(A) / sizeof(A[0])
	 */
	private String createC(int opcode, Code.LengthOf code){
		String r = "";
		r += lhs_assignment(code);
		if(code.type.toString().equals("string")){
			r += "Int( strlen( ";
			r += PRE + code.operand + ".s";
			r += ") )";
		} else {
			r += "Int(" +SP;
			r += "sizeof(" +SP;
			r += PRE + code.operand + SP;
			r +=       ")" +SP;
			r += "/" +SP;
			r += "sizeof(" +SP;
			r += PRE + code.operand +"[0]" +SP;
			r +=       ")" +SP;
			r +=    ")";
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
		r += code.label + ": ;"; // TODO, need this for if statements, but causes gcc warnings in while(true) statements
		return r;
	}
	private String createC(int opcode, Code.NewList code){
		// contents of the list are already defined
		// newlist %8 = (%2, %3, %4, %5, %6, %7) : [int]
		String r = "";
		if(register.containsKey(code.target))
			new Error("error createC(int, Code.NewList), creating a new list using an existing variable name.");
		register.put(code.target, PRE+ code.target);
		r += "Any" +SP;
		r += PRE + code.target +"[]" +SP;
		r += "=" +SP;
		r += "{";
		boolean first = true;
		for(int i=0; i < code.operands.length; i++){
			if( !first) r += "," +SP;
			r += PRE + code.operands[i];
			first = false;
		}
		r += "}";
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
			r += PRE+code.operands[i];
			comma = true;
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
			r += PRE +code.operands[i++];
			first = false;
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
		// if return type is void, do nothing
		if(code.type == Type.Void.T_VOID){
			return ""; }
		String r = "";
		r += "return" +SP;

		r += register.containsKey(code.operand) ?
				register.get(code.operand) :
					PRE +code.operand;

		switch(parentMethod.currentMethodName.split("=>")[1]){
		case("Any"):
			 break;
		case("int"):
			 r += ".i"; break;
		case("real"):
			 r += ".r"; break;
		case("string"):
			 r += ".s"; break;
		case("bool"):
			 r += ".b"; break;
		default:
			new Error("Return operation code not captured.");
		}
		return r + ";";
	}
	private String createC(int opcode, Code.Switch code){
		String r = "";
		r += "switch( ";
		r += PRE+ code.operand;
		switch(code.type.toString()){
		case ("int") : r += ".i"; break;
		case ("char") : r += ".c"; break;
		case ("real") : r += ".r"; break;
		case ("bool") : r += ".b"; break;
		default : new Error("type not allowed for in switch statement");
		}
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
		r += "wyce_neg("+PRE+code.operand+")";
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

			parameter = register.containsKey(code.operands[0]) ?
					register.get(code.operands[0]) :
						PRE+code.operands[0];

			r += PRE+code.target;
			r += code.afterType == Type.Strung.T_STRING ? ".s" : "";
			r += "[";
			r += parameter +".i]";
			r += " = ";
		}

		parameter = register.containsKey(code.operand) ?
				register.get(code.operand) :
					PRE+code.operand;

		r += parameter;
		r += code.type == Type.Strung.T_STRING ? ".c" : "";

		return r+";";
	}

	//=============================================
	// HELPERS
	//=======================================>>

	/**
	 * Identifies redundent variable instantiations, by checking if variable already exists.
	 * and puts the ghost variable (key) in a map with the correct variable (value).
	 * Called by Whiley assign function
	 * @param target
	 * @param operand
	 * @return boolean
	 */
	private boolean isGhostVariable(int target, int operand){
		if( !register.containsKey(target) && register.containsKey(operand)){
			// operand already exists
			// set up ghost variables to enable look ups later
			register.put(target, register.get(operand) );
			return true;
		}
//		if( register.containsKey(target) && register.containsKey(operand) ){
//			// target & operand already exists
//			// set up ghost variables to enable look ups later
//			register.put(target, register.get(operand) );
//			// return false to allow target to be reassigned
//			return false;
//		}
		return false;
	}

	private String pickFuncType(Code.Lambda code){
		switch(code.type.params().size()){
		case(0): return "FUNCPARAMS_ZERO";
		case(1): return "FUNCPARAMS_ONE";
		case(2): return "FUNCPARAMS_TWO";
		case(3): return "FUNCPARAMS_THREE";
		case(4): return "FUNCPARAMS_FOUR";
		case(5): return "FUNCPARAMS_FIVE";
		case(6): return "FUNCPARAMS_SIX";
		case(7): return "FUNCPARAMS_SEVEN";
		default: new Error("Error in creating lamda type. not enough parameters allowed for.");
		}
		return "";
	}
	// kept for time being
	private String createFunctionCaste(Code.Lambda code){
		String r = "(";
		String ret = ""+code.type.ret();
		switch(ret){
		case("bool"):
		case("char"):
		case("string"):
		case("real"):
		case("int"): r += "Any"; break;
		default: throw new Error("Error in createFunctionCaste(), type not catered for.");
		}
		r += "(*)(";
		Iterator itr = code.type.params().iterator();
		while(itr.hasNext()){
			String param = itr.next().toString();
			switch(param){
			case("bool"):
			case("char"):
			case("string"):
			case("real"):
			case("int"): r += "Any"; break;
			default: throw new Error("Error in createFunctionCaste(), type not catered for.");
			}
		}
		r += "))";

		return r;
	}

	/**
	 * Create a C switch statement to allow function casts to be included in C code
	 */
	private String generateFunctionTypeSwitch(Code.IndirectInvoke code){
		String r = "";
		r += lhs_assignment(code);

		String operand = register.containsKey(code.operand) ?
				register.get(code.operand) :
					PRE + code.operand;

		String[] parameters = new String[code.operands.length];
		for(int i=0; i < code.operands.length; i++){
			parameters[i] = register.containsKey(code.operands[i]) ?
					register.get(code.operands[i]) :
						PRE + code.operands[i];
		}

		switch(code.operands.length){

		case(0):
		r += "( FUNCPARAMS_ZERO ";
		r += operand + ".f.ptr )(";
		r += ");";
		break;

		case(1):
		r += "( FUNCPARAMS_ONE ";
		r += operand + ".f.ptr )(";
		r += parameters[0];
		r += ");";
		break;

		case(2):
		r += "( FUNCPARAMS_TWO ";
		r += operand + ".f.ptr )(";
		r += parameters[0] + ", ";
		r += parameters[1];
		r += ");";
		break;

		case(3):
		r += "( FUNCPARAMS_THREE ";
		r += operand + ".f.ptr )(";
		r += parameters[0] + ", ";
		r += parameters[1] + ", ";
		r += parameters[2];
		r += ");";
		break;

		case(4):
		r += "( FUNCPARAMS_FOUR ";
		r += operand + ".f.ptr )(";
		r += parameters[0] + ", ";
		r += parameters[1] + ", ";
		r += parameters[2] + ", ";
		r += parameters[3];
		r += ");";
		break;

		case(5):
		r += "( FUNCPARAMS_FIVE ";
		r += operand + ".f.ptr )(";
		r += parameters[0] + ", ";
		r += parameters[1] + ", ";
		r += parameters[2] + ", ";
		r += parameters[3] + ", ";
		r += parameters[4];
		r += ");";
		break;

		case(6):
		r += "( FUNCPARAMS_SIX ";
		r += operand + ".f.ptr )(";
		r += parameters[0] + ", ";
		r += parameters[1] + ", ";
		r += parameters[2] + ", ";
		r += parameters[3] + ", ";
		r += parameters[4] + ", ";
		r += parameters[5];
		r += ");";
		break;

		case(7):
		r += "( FUNCPARAMS_SEVEN ";
		r += operand + ".f.ptr )(";
		r += parameters[0] + ", ";
		r += parameters[1] + ", ";
		r += parameters[2] + ", ";
		r += parameters[3] + ", ";
		r += parameters[4] + ", ";
		r += parameters[5] + ", ";
		r += parameters[6];
		r += ");";
		break;
		}
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

		boolean first = true;
		for(int i=0; i<code.operands.length; i++){
			result += first ? "" : ", ";
			first = false;

			//!(code instanceof Code.Invoke) &&
			if( register.containsKey(code.operands[i])){ // isGhostVariable(code.target, code.operands[i])){
				result += register.get(code.operands[i]);
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

	private String lhs_temp(int c){
		return lhs_assignment_do("Any", c, false, false);
	}

	private String determineReturnType(Code.AbstractNaryAssignable code){
		// determine return type
		String[] t = code.type.toString().split("=>");
		String type = t[1].trim();
		if(Compiler.types.containsKey(type)){
			type = Compiler.types.get(type);
		} else {
			type = "Any";
		}
		return type;
	}


	/*
	 * Determines the lhs of the assignment.
	 *
	 */
	private String lhs_assignment(Code.AbstractAssignable code){
		return lhs_assignment(code, "Any");
	}

	private String lhs_assignment(Code.AbstractAssignable code, String dataType){

		// is this an array - yes then "a6[] =" else "a6 ="
		boolean invokingMethod = false;
		String m = code.toString();
		if(m.contains("method")){ invokingMethod = true; }
		boolean assigningArray = false;
		String r = code.assignedType().toString();
		if( !(r.charAt(0) == '{' && r.charAt(r.length()-1) == '}') ){
			// r does not represent a record
			if(r.contains("[int]") || r.contains("[real]")){ assigningArray = true; }
		}

		return lhs_assignment_do(dataType, code.target, invokingMethod, assigningArray);
	}

	private String lhs_assignment(Code.ForAll code){
		return lhs_assignment_do("Any", code.indexOperand, false, false);
	}

	private String lhs_assignment_do(String dataType, int param, boolean invokingMethod, boolean assigningArray){
		String r = "";
		String parameter = "";
		if( !register.containsKey(param)){
			parameter = PRE + param;
			r += dataType +SP;
			r += assigningArray ? "*" : "";
			register.put(param, parameter);
		} else {
			parameter = register.get(param);
		}
		r += parameter;
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
					r += "toStr" +SP;
					r += "( ";
					r += parameters(whileyMethod) +SP;
					r += ")";
				}
				return r;
			default:
				new Error(err +"method in Whiley \"Any\" library not recognised.");
			}
		case("whiley/lang/Math"):
			switch(name){
			case("floor"):
				r += "Int(" +SP;
				r += "floor(" +SP;
				r += parameters(whileyMethod) +".r" +SP;
				r += "));";
				return r;
			case("abs"):
				r += "Int(" +SP;
				r += name +SP;
				r += "(" +SP;
				r += parameters(whileyMethod)+".i" +SP; // may need to expand to real
				r += "));";
				return r;
			default:
				new Error(err +"method in Whiley \"Math\" library not recognised.");
			}

		// not a library function or method
		default:
			// assuming a declared native method, returning a C primitive, wrap it in a Any constructor
			boolean constructor = false;
			String returnType = whileyMethod.assignedType().toString();
			if( ! parentMethod.isMethod(name)){
				if		(returnType.equals("int")){    constructor = true; r += "Int("; }
				else if	(returnType.equals("bool")){   constructor = true; r += "Bool("; }
//				else if	(returnType.equals("string")){ /*no constructor needed*/ }
//				else if	(returnType.equals("[real]")){ /*no constructor needed*/ }
//				else if	(!returnType.equals("void")){
//					new Error (err + "invoke bytecode, return type not yet catered for."); }
			}
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

	//========================================================================
	// Token Class
	//========================================================================
	public static class Token extends Statement_Factory{

		private static Token tokenSingleton;

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

		public Token create(String token, Code code, HashMap<Integer, String> register){
			result = switchToGenerate(token, code, register);
			return tokenSingleton;
		}

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
			String r = "print (" +SP;
			//
			int var = ((AbstractSplitNaryAssignable<?>)code).operands[0];
			String varStr = register.get(var);
			r += varStr +SP;
			r += ");";
			return r;
		}

		private String println(Code code, HashMap<Integer, String> register){
			String r = print(code, register);
			r = r.replace("print", "println");
			return r;
		}
	}
}
