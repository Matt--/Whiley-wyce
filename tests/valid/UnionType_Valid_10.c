#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int tenup;
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
  Any a2 = ;
  Any a3 = Int(11);
  Any a1 = null;
  Any a9 = a1;
  Any a8 = f ( a9 );
  println ( a8 );
  return 0;
}
