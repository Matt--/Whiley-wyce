#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any lhs; Any op; Any rhs; } BinOp;
typedef struct {Any id; } Var;
typedef struct {Any index; Any src; } ListAccess;

Any x1x_evaluate ( Any );

Any x1x_evaluate ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label85; };
  label93: ;
  goto label86;
  label85: ;
  Any a1 = a0;
  label92: ;
  return a1;
  label86: ;
  if(a0.type == ){ goto label85; };
  goto label87;
  label91: ;
  Any a2 = a0.op;
  label96: ;
