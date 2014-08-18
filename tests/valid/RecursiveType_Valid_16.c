#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_parseTerm ( );
Any x1x_parseIdentifier ( );

Any x1x_parseTerm (){
  Any a0 = x1x_parseIdentifier (  );
  return a0;
}

Any x1x_parseIdentifier (){
  Any a0 = Str("err");
  Any a1;
  
  return a1;
}

int main (){
  Any a2 = x1x_parseTerm (  );
  Any a1 = a2;
  Any a7 = a1;
  Any a6 = toStr ( a7 );
  println ( a6 );
  return 0;
}
