#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } rec;

Any* x1x_f ( Any[] );

Any* x1x_f ( Any a0[] ){
  Any a1 [10];
  int count = a0[0];
  loop_start_label266: ;
  if(count == a0[1]){ goto label266; }
  Any a4 = Char( a0[count] );
  count++;
  Any a6 = Int(0);
  if ( dataAsInt( a4 ) >= dataAsInt( a6 ) ) { goto label267; };
  Any a8 = Bool(true);
  Any a9[] = {a8};
  #### appending arrays not yet catered for;
  a1 = Null();
  goto label268;
  label267: ;
  Any a12 = Null();
  Any a13[] = {a12};
  #### appending arrays not yet catered for;
  a1 = Null();
  label268: ;
  goto loop_start_label266;
  label266: ;
  return a1;
}

int main (){
  Any a7 [10];
  Any a6 = x1x_f ( a7 );
  println ( a6 );
  Any a8 = Int(1);
  Any a9 = Int(2);
  Any a10 = Int(3);
  Any a11 = Int(4);
  Any a12[] = {a8, a9, a10, a11};
  Any a16 = x1x_f ( a12 );
  println ( a16 );
  return 0;
}
