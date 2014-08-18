#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; } OpenRecord;

Any x1x_getField ( OpenRecord );

Any x1x_getField ( OpenRecord a0 ){
  if(a0.type == ){ goto label380; };
  goto label381;
  label380: ;
  Any a1 = Str("(1 field): ");
  Any a3 = a0.x;
  a3 = toStr ( a3 );
  Any a4 = Str( strcat ( a1.s , a3.s ) );
  return a4;
  label381: ;
  if(a0.type == ){ goto label380; };
  goto label382;
  Any a5 = Str("(2 fields): ");
  Any a7 = a0.x;
  a7 = toStr ( a7 );
  Any a8 = Str( strcat ( a5.s , a7.s ) );
  Any a9 = Str(", ");
  Any a10 = Str( strcat ( a8.s , a9.s ) );
  Any a12 = a0.y;
  a12 = toStr ( a12 );
  Any a13 = Str( strcat ( a10.s , a12.s ) );
  return a13;
  label382: ;
  Any a14 = Str("(? fields): ");
  Any a16 = a0.x;
  a16 = toStr ( a16 );
  Any a17 = Str( strcat ( a14.s , a16.s ) );
  Any a18 = Str(", ...");
  Any a19 = Str( strcat ( a17.s , a18.s ) );
  return a19;
}

int main (){
  Any a2 = Int(1);
  {int x} a3 = { a2 };
   a1 = a3;
   a8 = a1;
  Any a7 = x1x_getField ( a8 );
  println ( a7 );
  Any a9 = Int(2);
  Any a10 = Str("hello");
  {int x,string y} a11 = { a9, a10 };
  a1 = a11;
   a16 = a1;
  Any a15 = x1x_getField ( a16 );
  println ( a15 );
  Any a17 = Int(3);
  Any a18 = Int(1);
  {int x,int y} a19 = { a17, a18 };
  a1 = a19;
   a24 = a1;
  Any a23 = x1x_getField ( a24 );
  println ( a23 );
  Any a25 = Int(3);
  Any a26 = Int(1);
  Any a27 = Int(1);
  {int x,int y,int z} a28 = { a25, a26, a27 };
  a1 = a28;
   a33 = a1;
  Any a32 = x1x_getField ( a33 );
  println ( a32 );
  return 0;
}
