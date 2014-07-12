#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef record XXX Point;
typedef record XXX Point3D;
typedef record XXX Points;

Any test ( Any );

Any test ( Any a0 ){
  if(a0.type == ){ goto label602; };
  goto label603;
  label602: ;
  Any a1 = Str("GOT POINT3D
");
