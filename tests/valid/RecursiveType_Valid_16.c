#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any parseTerm ( );
Any parseIdentifier ( );

Any parseTerm (){
  Any a0 = parseIdentifier (  );
  return a0;
}

Any parseIdentifier (){
  Any a0 = Str("err");
  return a1;
}

int main (){
  Any a2 = parseTerm (  );
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = toStr ( a7 );
  println ( a6 );
  return 0;
}
