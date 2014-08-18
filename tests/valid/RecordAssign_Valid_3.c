#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any f1; Any f2; } tac1tup;

tac1tup x1x_f ( void );

tac1tup x1x_f (void){
  Any a0 = Int(1);
  Any a1 = Int(3);
  tac1tup a2 = { a0, a1 };
  return a2;
}

int main (){
  tac1tup a2 = x1x_f (  );
  Any a4 = a2.f2;
  Any a5 = Int(2);
  Any a6 = wyce_sub( a4, a5);
  a2.f1 = a6;
  Any a8 = a2.f1;
  Any a10 = a2.f2;
  Any a14 = recordToStr2( "f1", a2.f1, "f2", a2.f2);
  println ( a14 );
  return 0;
}
