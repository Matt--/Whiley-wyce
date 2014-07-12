#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef 
Any f ( Any );

Any f ( Any a0 ){
  if(a0.type == ){ goto label552; };
  goto label553;
  label552: ;
  Any a1 = Str("[*]");
  return a1;
  label553: ;
  Any a2 = Str("int");
  return a2;
}

int main (){
  Any a5 = Int(1);
  Any a6[] = {a5};
  Any a4 = f ( a6 );
  println ( a4 );
  Any a11 = Int(1);
  Any a12[] = {a11};
  Any a13[] = {a12};
  Any a10 = f ( a13 );
  println ( a10 );
  Any a18 = Int(1);
  Any a19[] = {a18};
  Any a20[] = {a19};
  Any a21[] = {a20};
  Any a17 = f ( a21 );
  println ( a17 );
  Any a26 = Int(1);
  Any a25 = f ( a26 );
  println ( a25 );
  return 0;
}
