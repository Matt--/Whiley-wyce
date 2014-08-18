#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( Any  );

Any x1x_f ( Any a0 ){
  if(a0.type == ){ goto label67; };
  goto label68;
  label67: ;
  Any a1 = Str("GOT IT");
  return a1;
  label68: ;
  Any a2 = Str("NOPE");
  return a2;
}

int main (){
  Any a5 = Real(1.2);
  Any a6 = Real(1.2);
  typedef struct {Any x; Any y; }Record7;
  Record7 a7 = { a5, a6 };
  Any a4 = x1x_f ( a7 );
  println ( a4 );
  Any a12 = Int(1);
  Any a13 = Int(1);
  typedef struct {Any x; Any y; }Record14;
  Record14 a14 = { a12, a13 };
  Any a11 = x1x_f ( a14 );
  println ( a11 );
  Any a19 = Int(1);
  Any a20 = Int(1);
  typedef struct {Any x; Any z; }Record21;
  Record21 a21 = { a19, a20 };
  Any a18 = x1x_f ( a21 );
  println ( a18 );
  return 0;
}
