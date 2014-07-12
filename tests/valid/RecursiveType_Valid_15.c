#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const int ADD = 1 ;
const int SUB = 2 ;
const int MUL = 3 ;
const int DIV = 4 ;

typedef record XXX binop;
typedef record XXX asbinop;
typedef 

int main (){
  Any a2 = Int(1);
  Any a3 = Int(1);
  Any a4 = Int(2);
  Any a1 = null;
  Any a9 = a1;
  Any a8 = a9;
  Any a12 = Int(2);
  Any a13 = Int(2);
  Any a10 = null;
  Any a19 = a8;
  Any a18 = toStr ( a19 );
  println ( a18 );
  Any a24 = a10;
  Any a23 = toStr ( a24 );
  println ( a23 );
  return 0;
}
