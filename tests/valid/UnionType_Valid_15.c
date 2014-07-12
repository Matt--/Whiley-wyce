#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX msg1;
typedef record XXX msg2;
typedef 
Any f ( Any );

Any f ( Any a0 ){
  Any *a2 = a0;
  Any a1 = toStr ( a2 );
  return a1;
}

int main (){
  Any a2 = Int(1);
  Any a3 = Int(2);
  Any a4 = Int(3);
  Any a5[] = {a2, a3, a4};
  Any a6 = Int(1);
  Any *a1 = null;
  Any *a12 = a1;
  Any a11 = f ( a12 );
  println ( a11 );
