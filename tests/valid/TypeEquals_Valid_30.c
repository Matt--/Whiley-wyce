#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any lhs; Any op; Any rhs; } BinOp;
typedef struct {Any index; Any src; } ListAccess;

Any x1x_evaluate ( Any );

Any x1x_evaluate ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label124; };
  label135: ;
  goto label125;
  label124: ;
  return a0;
  label125: ;
  if(a0.type == ){ goto label124; };
  label144: ;
  goto label126;
  label133: ;
  Any a2 = a0.op;
  label143: ;
