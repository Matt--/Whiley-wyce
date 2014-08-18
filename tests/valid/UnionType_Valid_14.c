#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any lhs; Any op; Any rhs; } BinOp;
typedef struct {Any index; Any src; } ListAccess;

Any x1x_f ( Any );

Any x1x_f ( Any a0 ){
  if(a0.type == INT_TYPE){ goto label128; };
  goto label129;
  label128: ;
  return a0;
  label129: ;
  if(a0.type == ){ goto label128; };
  goto label130;
  Any a3 = Int( sizeof( a0 ) / sizeof( a0[0] ) );
  return a3;
  label130: ;
  Any a4 = Int(1);
  return a4;
}

int main (){
  label134: ;
  label133: ;
  Any a5 = Int(1);
  label132: ;
  if(a5.type == INT_TYPE){ goto label131; };
  if( !a5.type == ){ goto label132; };
  Any a8 = a5.op;
  label131: ;
  if(a5.type == ){ goto label133; };
  if(a5.type == ){ goto label134; };
  Any a4 = x1x_f ( a5 );
  println ( a4 );
  Any a10 = Int(1);
  Any a11 = Int(2);
  Any a12 = Int(3);
  Any a13[] = {a10, a11, a12};
  if(a13.type == INT_TYPE){ goto label131; };
  if( !a13.type == ){ goto label132; };
  Any a16 = a13.op;
  if(a13.type == ){ goto label133; };
  if(a13.type == ){ goto label134; };
  a9 = x1x_f ( a13 );
  println ( a9 );
  Any a18 = Int(1);
  Any a19 = Int(0);
  Any a20 = Int(2);
  Any a21;
  
  if(a21.type == INT_TYPE){ goto label131; };
  if( !a21.type == ){ goto label132; };
  Any a24 = a21.op;
  if(a21.type == ){ goto label133; };
  if(a21.type == ){ goto label134; };
  a17 = x1x_f ( a21 );
  println ( a17 );
  return 0;
}
