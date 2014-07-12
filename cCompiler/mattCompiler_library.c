// Library constructors & functions


//// Data struct types
// any new constructor, also put into destructor "dataAsInt"
Any Int(int i)
{
	Any a;
	a.type = INT_TYPE;
	a.i = i;
	return a;
}
Any Real(double r)
{
	Any a;
	a.type = REAL_TYPE;
	a.r = r;
	return a;
}
Any Char(char c)
{
	Any a;
	a.type = CHAR_TYPE;
	a.c = c;
	return a;
}
Any Ptr( void *c)
{
	Any a;
	a.type = POINTER_TYPE;
	a.ptr = c;
	return a;
}
Any Str(char* s)
{
	if(strlen(s) > MAXCHAR) {
		char message [200];
		sprintf(message, "method failed, char string over %d chars : Any Str(char* c); The string is: %s", MAXCHAR, s);
		error(1, message);
	}
	Any a;
	a.type = STR_TYPE;
	memset(a.s, 0, sizeof(a.s)); // TODO shouldn't need this, remove later
	strcpy(a.s, s);
	return a;
}
Any Bool(bool b)
{
	Any a;
	a.type = BOOL_TYPE;
	a.b = b;
	return a;
}
//Any Byte(char* b)
//{
//	Any a;
//	a.byte = b;
//	a.type = BYTE_TYPE;
//	return a;
//}
Any Null()
{
	Any a;
	a.type = NULL_TYPE;
	//a.b = b;
	return a;
}
// TODO is there a way to take 2+ parameters in one Tuple constructor?
Any Tuple(Any a, Any b)
{
	/*
	 * kept for my reference only.
	 * static reserves memory in this function only
	 * malloc reserves memory for the programs duration or until free()
	 *	static Any x; x = a;
	 *	static Any y; y = b;
	 */

	Any *x = malloc(sizeof(*x));
	Any *y = malloc(sizeof(*y));
	*x = a;
	*y = b;

	Any d;
	d.type = TUPLE_TYPE;
	d.ptr = malloc( sizeof(d.ptr) * 2 );
	Any **any = (Any**)d.ptr;
	any[0] = x;
	any[1] = y;
	return d;
}

/**
 * Frees all memory reserved by this tuple. Including any
 * values held. ie: copy them before calling this.
 * TODO extend to handle recursion?
 */
bool freeTuple(Any a){
	if(a.type != TUPLE_TYPE) return true;
	// A pointer to an array of pointers
	Any **any = (Any**)a.ptr;
	int size = sizeof(a.ptr)/4;
	// free the pointers in the array
	int i = 0;
	while(i < size){
		free(any[i++]);
	}
	// free the array pointer
	free(a.ptr);
	return true;
}

//Any Tuple3(Any a, Any b, Any c)
//{
//	Any d;
//	d.type = TUPLE_TYPE;
//	d.ptr = malloc(3);
//	Any** any = (Any**)d.ptr;
//	any[0] = &a;
//	any[1] = &b;
//	any[2] = &c;
//	return d;
//}

//Any AnyCopy(Any a)
//{
//	Any d;
//	d.type = a.type;
//	d.data = a.data;
//	return d;
//}




Any toStr(Any a){
//	Any* x_address = ((Any**)a.ptr)[0];
//		printf ("x address is %d\n", x_address);
//		printf ("x is %d\n", x_address->i);
//	int y = ((Any**)a.ptr)[1]->i;
//		printf ("y is %d\n", y);
//	printf("type is : %d\n", a.type);
//	printf("ptr size is : %d\n", sizeof(a.ptr));

	if(a.type == NULL_TYPE){
		return Str("null");
	}
	if(a.type == INT_TYPE){
		char str [MAXCHAR+1];
		sprintf(str, "%d", a.i);
		Any b = Str(str);
		return b;
	}
	if(a.type == REAL_TYPE){
		char str [MAXCHAR+1];
		sprintf(str, "%g", a.r); // %g to remove trailing 0's
		if(strchr(str, '.') == NULL){ strcat(str, ".0"); } // add '.0' if not present
		Any b = Str(str);
		return b;
	}
	if(a.type == CHAR_TYPE){
		char str [MAXCHAR+1];
		sprintf(str, "%c", a.c);
		Any b = Str(str);
		return b;
	}
	if(a.type == STR_TYPE){
		return a;
	}
	if(a.type == BOOL_TYPE){
		if(a.b == 0)
			return Str("false");
		else
			return Str("true");
	}
	if(a.type == TUPLE_TYPE){
		// TODO only copes with 2 and 3 tuples.
		// TODO only prints int values, extend to other types.

		char str [MAXCHAR+1];

		if(sizeof(a.ptr)/4 == 2)
			sprintf(str, "(%d, %d)", ((Any**)a.ptr)[0]->i, ((Any**)a.ptr)[1]->i);
		if(sizeof(a.ptr)/4 == 3)
			sprintf(str, "(%d, %d, %d)", ((Any**)a.ptr)[0]->i, ((Any**)a.ptr)[1]->i, ((Any**)a.ptr)[2]->i);
		Any b = Str(str);
		return b;
	}
	error(1, "error, toStr(Any); type unknown");

	return Str("");
}

int dataAsInt(Any a){
	if(a.type == NULL_TYPE){ return 0; }
	if(a.type == INT_TYPE){ return a.i; }
	if(a.type == REAL_TYPE){ return a.r; }
	if(a.type == CHAR_TYPE){ return (int)a.c; }
//	if(a.type == STR_TYPE){ int r = (int)a.s; return r; } //NB pointer cast to int
	if(a.type == BOOL_TYPE){ return (int)a.b; }

	#if(LIBRARY_TESTING)
	error(1, "error, dataAsInt(Any); type unknown");
	#endif

	return 0;
}

//// Math operations
Any wyce_add(Any x, Any y)
{
	if(x.type != y.type){
		error(1, "method error, adding two different types : Any add(Any, Any)");}
	switch(x.type){
	case INT_TYPE:	return Int(x.i + y.i);
	case REAL_TYPE:	return Real(x.r + y.r);
	default:
		error(1, "method failed, cannot add this type : Any add(Any, Any)");
	}
}
Any wyce_sub(Any x, Any y)
{
	if(x.type != y.type){
		error(1, "method error, subtracting two different types : Any sub(Any, Any)");}
	switch(x.type){
	case INT_TYPE:	return Int(x.i - y.i);
	case REAL_TYPE:	return Real(x.r - y.r);
	default:
		error(1, "method failed, cannot subtract this type : Any sub(Any, Any)");
	}
}
Any wyce_neg(Any x)
{
	switch(x.type){
	case INT_TYPE:	return Int(-x.i);
	case REAL_TYPE:	return Real(-x.r);
	default:
		error(1, "method failed, cannot establish negative for this type : Any neg(Any)");
	}
}
Any wyce_mul(Any x, Any y)
{
	if(x.type != y.type){
		error(1, "method error, multiplyinging two different types : Any mul(Any, Any)");}
	switch(x.type){
	case INT_TYPE:	return Int(x.i * y.i);
	case REAL_TYPE:	return Real(x.r * y.r);
	default:
		error(1, "method failed, cannot multiply this type : Any mul(Any, Any)");
	}
}
Any wyce_div(Any x, Any y)
{
//	if(x.type != y.type){
//		error(1, "method error, dividing two different types : Any div(Any, Any)");}

	switch(x.type){
	case INT_TYPE:
		if(y.i == 0){ error(1, "method failed, divisor == 0 : Any div(Any, Any)");}
		return Int(x.i / y.i);
	case REAL_TYPE:
		if(y.r == 0){ error(1, "method failed, divisor == 0 : Any div(Any, Any)");}
		return Real(x.r / y.r);
	default:
		error(1, "method failed, cannot divide this type : Any div(Any, Any)");
	}
}
Any wyce_mod(Any x, Any y)
{
	if(x.type != y.type){
		error(1, "method error, moding two different types : Any mod(Any, Any)");}

	switch(x.type){
	case INT_TYPE:
		if(y.i == 0){ error(1, "method failed, divisor == 0 : Any mod(Any, Any)");}
		return Int(x.i % y.i);
	default:
		error(1, "method failed, cannot mod this type : Any mod(Any, Any)");
	}
}

// Return copy
Any Copy(Any a)
{
	Any copy;
	switch(copy.type){
	case(NULL_TYPE):	return Null();
	case(INT_TYPE):		return Int(a.i);
	case(REAL_TYPE):	return Real(a.r);
	case(CHAR_TYPE):	return Char(a.c);
	case(BOOL_TYPE):	return Bool(a.b);
	case(STR_TYPE):		return Str(a.s);
	case(POINTER_TYPE):	return Ptr(a.ptr);
	default:
		error(1, "method failed, type not catered for : Any Copy(Any)");
	}
	return copy;
}


//// Helpers
#if(LIBRARY_TESTING)
void println(Any a)
{
	// Printing chars. Daves test Char_Valid_2 requires a char to print with single quotes.
	// The bytecode turns the char type to a string before this method is called.
	// Making identifying a char at this point problematic.
	// Changing the toStr for char, creates problems elsewhere...

	Any str = toStr(a); // kept to ensure consistency
	printf("%s\n", str.s);

}

void error(int error_no, char c [200])
{
  printf("    %s\n", c);
  if(!LIBRARY_TESTING) { exit(error_no); }
  //exit(error_no);
}
#endif
// end Helpers



