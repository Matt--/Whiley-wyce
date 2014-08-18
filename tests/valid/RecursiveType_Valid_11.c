#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const int ADD = 1 ;
const int SUB = 2 ;
const int MUL = 3 ;
const int DIV = 4 ;

typedef struct {Any left; Any op; Any right; } binop;


int main (){
  Any a2 = Int(1);
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a1 = Null();
  Any a8 = Int(2);
  Any a9 = Int(2);
  Any a6 = Null();
  Any a12 = Int(2);
  Any a13 = Int(3);
  Any a14 = Int(2);
  Any a16 = Int(2);
  Any a17 = Int(2);
  Any a11 = Null();
  Any a23 = a1;
  Any a22 = toStr ( a23 );
  println ( a22 );
  Any a28 = a6;
  Any a27 = toStr ( a28 );
  println ( a27 );
  Any a33 = a11;
  Any a32 = toStr ( a33 );
  println ( a32 );
  return 0;
}
