#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const int IHDR_TYPE = 1380206665 ;
const int IEND_TYPE = 1145980233 ;
const int IDAT_TYPE = 1413563465 ;
const int PLTE_TYPE = 1163152464 ;
const int PHYS_TYPE = 1935231088 ;
const int TIME_TYPE = 1162692980 ;

Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  switch( a0.i ){
    case 1380206665 : goto label193;
    case 1145980233 : goto label194;
    case 1163152464 : goto label195;
    case 1935231088 : goto label196;
    case 1162692980 : goto label197;
    default : goto label192;
  }
  label193: ;
  Any a2 = Int(1);
  return a2;
  label194: ;
  Any a3 = Int(2);
  return a3;
  label195: ;
  Any a4 = Int(3);
  return a4;
  label196: ;
  Any a5 = Int(4);
  return a5;
  label197: ;
  Any a6 = Int(5);
  return a6;
  label192: ;
  Any a7 = Int(6);
  return a7;
}

int main (){
  Any a4 = Str("GOT: ");
  Any a6 = Int(1380206665);
  Any a5 = x1x_f ( a6 );
  a5 = toStr ( a5 );
  Any a7 = Str( strcat ( a4.s , a5.s ) );
  println ( a7 );
  Any a11 = Str("GOT: ");
  Any a13 = Int(1145980233);
  Any a12 = x1x_f ( a13 );
  a12 = toStr ( a12 );
  Any a14 = Str( strcat ( a11.s , a12.s ) );
  println ( a14 );
  Any a18 = Str("GOT: ");
  Any a20 = Int(1163152464);
  Any a19 = x1x_f ( a20 );
  a19 = toStr ( a19 );
  Any a21 = Str( strcat ( a18.s , a19.s ) );
  println ( a21 );
  Any a25 = Str("GOT: ");
  Any a27 = Int(1935231088);
  Any a26 = x1x_f ( a27 );
  a26 = toStr ( a26 );
  Any a28 = Str( strcat ( a25.s , a26.s ) );
  println ( a28 );
  Any a32 = Str("GOT: ");
  Any a34 = Int(1162692980);
  Any a33 = x1x_f ( a34 );
  a33 = toStr ( a33 );
  Any a35 = Str( strcat ( a32.s , a33.s ) );
  println ( a35 );
  return 0;
}
