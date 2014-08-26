#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
Any x1x_f ( null|int  );

Any x1x_f ( null|int a0 ){
  if(a0.type == NULL_TYPE){ goto label0; };
  goto label1;
  label0: ;
  string a1 = "GOT NULL";
  return a1;
  label1: ;
  string a2 = "GOT INT";
  return a2;
}

int main (){
  null a2 = null;
  string a6 = x1x_f ( a2 );
