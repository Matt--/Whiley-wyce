#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  Any a2 = Int(2);
  Any a3 = Int(3);
  typedef struct {Any f1; Any f2; }Record4;
  Record4 a4 = { a2, a3 };
  Any a6 = Int(1);
  Any a7 = Int(3);
  Record4 a8 = { a6, a7 };
  Any a12 = recordToStr2( "f1", a4.f1, "f2", a4.f2);
  println ( a12 );
  Any a17 = recordToStr2( "f1", a8.f1, "f2", a8.f2);
  println ( a17 );
  Any a21 = Int(1);
  a4.f1 = a21;
  Any a25 = recordToStr2( "f1", a4.f1, "f2", a4.f2);
  println ( a25 );
  Any a30 = recordToStr2( "f1", a8.f1, "f2", a8.f2);
  println ( a30 );
  return 0;
}
