#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; Any y; } Point;
typedef struct {Any x; Any y; Any z; } Point3D;

void x1x_test ( Any );

void x1x_test ( Any a0 ){
  if(a0.type == ){ goto label110; };
  goto label111;
  label110: ;
  Any a1 = Str("GOT POINT
");
