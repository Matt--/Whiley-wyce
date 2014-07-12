#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX State;
typedef 
Any parse ( Any );
Any parseAddSubExpr ( Any );

Any parse ( Any a0 ){
  Any a4 = Int(0);
  Any a2 = parseAddSubExpr ( a5 );
