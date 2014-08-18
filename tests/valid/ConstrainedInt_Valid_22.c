#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int item;

Any x1x_inc ( Any  );
void x1x_print ( Any , Any , Any  );

Any x1x_inc ( Any a0 ){
  Any a2 = Int(1);
  Any a3 = wyce_add( a0, a2);
  Any a4 = Int(7);
  Any a5 = wyce_mod( a3, a4);
  Any a7 = Int(0);
  Any a10 = Int(7);
  return a5;
}

void x1x_print ( Any a0, Any a1, Any a2 ){
  Any a4 = Int(0);
  if ( dataAsInt( a2 ) <= dataAsInt( a4 ) ) { goto label216; };
  Any a8[] = {Str( "Monday" ), Str( "Tuesday" ), Str( "Wednesday" ), Str( "Thursday" ), Str( "Friday" ), Str( "Saturday" ), Str( "Sunday" )};
  Any a17 = Int(0);
  Any a18 = Int( sizeof( a8 ) / sizeof( a8[0] ) );
  Any a10 = a8[a1.i];
  println ( a10 );
  Any a16 = Int(0);
  Any a19 = Int(7);
  Any a12 = x1x_inc ( a1 );
  Any a15 = Int(1);
  a16 = wyce_sub( a2, a15);
  Any a21 = Int(0);
  Any a24 = Int(7);
  x1x_print ( a0, a12, a16 );
  label216: ;
}

int main (){
  Any a1 = Null();
  Any a2 = Int(0);
  Any a3 = Int(15);
  Any a8 = Int(0);
  Any a11 = Int(7);
  x1x_print ( a1, a2, a3 );
  return 0;
}
