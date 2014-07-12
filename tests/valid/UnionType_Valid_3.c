#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any[] , Any );

Any f ( Any a0[], Any a1 ){
  Any a3 = Int(0);
  Any a2 = a3;
  int count = a0[0];
  loop_start_label4: ;
  if(count == a0[1]){ goto label4; }
  Any a5 = a0[count];
  count++;
  if ( dataAsInt( a5 ) != dataAsInt( a1 ) ) { goto label5; };
  return a2;
  label5: ;
  Any a10 = Int(1);
  Any a11 = add( a2 , a10);
  a2 = a11;
  goto loop_start_label4;
  label4: ;
  Any a12 = Int(1);
  Any a13 = neg(a12);
  return a13;
}

int main (){
  Any a6 = Null();
  Any a7 = Int(1);
  Any a8 = Int(2);
  Any a9[] = {a6, a7, a8};
  Any a10 = Null();
  Any a5 = f ( a9, a10 );
  Any a4 = toStr ( a5 );
  println ( a4 );
  Any a16 = Int(1);
  Any a17 = Int(2);
  Any a18 = Null();
  Any a19 = Int(10);
  Any a20[] = {a16, a17, a18, a19};
  Any a21 = Int(10);
  Any a15 = f ( a20, a21 );
  Any a14 = toStr ( a15 );
  println ( a14 );
  return 0;
}
