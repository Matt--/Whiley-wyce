#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any data; Any lhs; Any rhs; } Node;

Any x1x_Tree ( Any , Any , Any );

Any x1x_Tree ( Any a0, Any a1, Any a2 ){
  Node a12 = { a0, a1, a2 };
  if(a12.type == NULL_TYPE){ goto label64; };
  label66: ;
  if( !a12.type == ){ goto label65; };
  Any a14 = a12.data;
  Any a15 = a12.rhs;
  Any a16 = a12.lhs;
  if(a16.type == NULL_TYPE){ goto label66; };
  Any a18 = a16.data;
  label65: ;
  if(a15.type == NULL_TYPE){ goto label66; };
  label64: ;
  Any a21 = a15.data;
  return a12;
}

int main (){
  Any a3 = Int(1);
  Any a4 = Null();
  label69: ;
  Any a5 = Null();
  if(a4.type == NULL_TYPE){ goto label67; };
  if( !a4.type == ){ goto label68; };
  Any a10 = a4.data;
  Any a11 = a4.rhs;
  Any a12 = a4.lhs;
  label68: ;
  if(a12.type == NULL_TYPE){ goto label69; };
  label67: ;
  Any a14 = a12.data;
  if(a11.type == NULL_TYPE){ goto label69; };
  Any a17 = a11.data;
  if(a5.type == NULL_TYPE){ goto label67; };
  if( !a5.type == ){ goto label68; };
  a10 = a5.data;
  a11 = a5.rhs;
  a12 = a5.lhs;
  if(a12.type == NULL_TYPE){ goto label69; };
  a14 = a12.data;
  if(a11.type == NULL_TYPE){ goto label69; };
  a17 = a11.data;
  if(a4.type == NULL_TYPE){ goto label69; };
  a10 = a4.data;
  if(a5.type == NULL_TYPE){ goto label69; };
  Any a13 = a5.data;
  Any a2 = x1x_Tree ( a3, a4, a5 );
  Any a1 = a2;
  Any a8 = Int(3);
  Any a9 = Null();
  a10 = Null();
  if(a9.type == NULL_TYPE){ goto label67; };
  if( !a9.type == ){ goto label68; };
  Any a15 = a9.data;
  Any a16 = a9.rhs;
  a17 = a9.lhs;
  if(a17.type == NULL_TYPE){ goto label69; };
  Any a19 = a17.data;
  if(a16.type == NULL_TYPE){ goto label69; };
  Any a22 = a16.data;
  if(a10.type == NULL_TYPE){ goto label67; };
  if( !a10.type == ){ goto label68; };
  a15 = a10.data;
  a16 = a10.rhs;
  a17 = a10.lhs;
  if(a17.type == NULL_TYPE){ goto label69; };
  a19 = a17.data;
  if(a16.type == NULL_TYPE){ goto label69; };
  a22 = a16.data;
  if(a9.type == NULL_TYPE){ goto label69; };
  a15 = a9.data;
  if(a10.type == NULL_TYPE){ goto label69; };
  Any a18 = a10.data;
  Any a7 = x1x_Tree ( a8, a9, a10 );
  Any a6 = a7;
  a13 = Int(5);
  a14 = Null();
  a15 = Null();
  if(a14.type == NULL_TYPE){ goto label67; };
  if( !a14.type == ){ goto label68; };
  Any a20 = a14.data;
  Any a21 = a14.rhs;
  a22 = a14.lhs;
  if(a22.type == NULL_TYPE){ goto label69; };
  Any a24 = a22.data;
  if(a21.type == NULL_TYPE){ goto label69; };
  Any a27 = a21.data;
  if(a15.type == NULL_TYPE){ goto label67; };
  if( !a15.type == ){ goto label68; };
  a20 = a15.data;
  a21 = a15.rhs;
  a22 = a15.lhs;
  if(a22.type == NULL_TYPE){ goto label69; };
  a24 = a22.data;
  if(a21.type == NULL_TYPE){ goto label69; };
  a27 = a21.data;
  if(a14.type == NULL_TYPE){ goto label69; };
  a20 = a14.data;
  if(a15.type == NULL_TYPE){ goto label69; };
  Any a23 = a15.data;
  a12 = x1x_Tree ( a13, a14, a15 );
  a11 = a12;
  a18 = Int(2);
  a19 = a1;
  a20 = a6;
  if(a19.type == NULL_TYPE){ goto label67; };
  if( !a19.type == ){ goto label68; };
  Any a25 = a19.data;
  Any a26 = a19.rhs;
  a27 = a19.lhs;
  if(a27.type == NULL_TYPE){ goto label69; };
  Any a29 = a27.data;
  if(a26.type == NULL_TYPE){ goto label69; };
  Any a32 = a26.data;
  if(a20.type == NULL_TYPE){ goto label67; };
  if( !a20.type == ){ goto label68; };
  a25 = a20.data;
  a26 = a20.rhs;
  a27 = a20.lhs;
  if(a27.type == NULL_TYPE){ goto label69; };
  a29 = a27.data;
  if(a26.type == NULL_TYPE){ goto label69; };
  a32 = a26.data;
  if(a19.type == NULL_TYPE){ goto label69; };
  a25 = a19.data;
  if(a20.type == NULL_TYPE){ goto label70; };
  Any a28 = a20.data;
  a17 = x1x_Tree ( a18, a19, a20 );
  a16 = a17;
  a24 = a16;
  println ( a24 );
  a27 = Int(4);
  a28 = a16;
  a29 = a11;
  if(a28.type == NULL_TYPE){ goto label71; };
  if( !a28.type == ){ goto label72; };
  Any a34 = a28.data;
  Any a35 = a28.rhs;
  Any a36 = a28.lhs;
  if(a36.type == NULL_TYPE){ goto label70; };
  Any a38 = a36.data;
  if(a35.type == NULL_TYPE){ goto label70; };
  Any a41 = a35.data;
  if(a29.type == NULL_TYPE){ goto label71; };
  if( !a29.type == ){ goto label72; };
  a34 = a29.data;
  a35 = a29.rhs;
  a36 = a29.lhs;
  if(a36.type == NULL_TYPE){ goto label70; };
  a38 = a36.data;
  if(a35.type == NULL_TYPE){ goto label70; };
  a41 = a35.data;
  if(a28.type == NULL_TYPE){ goto label70; };
  a34 = a28.data;
  if(a29.type == NULL_TYPE){ goto label70; };
  Any a37 = a29.data;
  a26 = x1x_Tree ( a27, a28, a29 );
  a25 = a26;
  Any a33 = a25;
  println ( a33 );
  return 0;
}
