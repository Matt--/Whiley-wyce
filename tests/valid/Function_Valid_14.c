#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any f ( Any );
Any f ( Any );
Any f ( Any[] );
Any f ( Any );

Any f ( Any a0 ){
  Any a1 = Str("F(INT)");
  return a1;
}

Any f ( Any a0 ){
  Any a1 = Str("F(REAL)");
  return a1;
}

Any f ( Any a0[] ){
  Any a1 = Str("F([int])");
  return a1;
}

Any f ( Any a0 ){
  Any a1 = Str("F({int})");
  return a1;
}

int main (){
  Any a5 = Real(1.234);
  Any a4 = f ( a5 );
  println ( a4 );
  Any a10 = Int(1);
  Any a9 = f ( a10 );
  println ( a9 );
  Any a15 = Int(1);
  Any a16 = Int(2);
  Any a17 = Int(3);
  Any a18[] = {a15, a16, a17};
  Any a14 = f ( a18 );
  println ( a14 );
  Any a23 = Int(1);
  Any a24 = Int(2);
  Any a25 = Int(3);
  Any a22 = f ( a26 );
  println ( a22 );
  return 0;
}
