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
  label1142: ;
  Any a3 = Int(11);
  Any a1 = null;
  label1141: ;
  Any a9 = a1;
  if(a9.type == ){ goto label1141; };
