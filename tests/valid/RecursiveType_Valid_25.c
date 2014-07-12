#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any init ( );

Any init (){
  Any a0 = Real(0.0123);
  return a0;
}

int main (){
  Any a2 = init (  );
  Any a1 = a2;
  label49: ;
  if(a1.type == ){ goto label49; };
  goto label50;
  Any a6 = Str("GOT LIST");
  println ( a6 );
  goto label51;
  label50: ;
  Any a11 = a1;
  Any a10 = toStr ( a11 );
  println ( a10 );
  label51: ;
  return 0;
}
