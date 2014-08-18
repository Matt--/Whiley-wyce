#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } wmcr6tup;

Any x1x_get ( void );
wmcr6tup x1x_f ( Any  );

Any x1x_get (void){
  Any a0 = Int(1);
  return a0;
}

wmcr6tup x1x_f ( Any a0 ){
  Any a2 = x1x_get (  );
  wmcr6tup a3 = { a0, a2 };
  return a3;
}

int main (){
  Any a6 = Int(1);
  wmcr6tup a5 = x1x_f ( a6 );
  Any a4 = recordToStr2( "x", a5.x, "y", a5.y);
  println ( a4 );
  return 0;
}
