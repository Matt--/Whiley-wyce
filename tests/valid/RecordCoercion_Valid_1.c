#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any x; } Rec1;
typedef struct {Any x; } Rec2;

Any x1x_f ( Rec2  );

Any x1x_f ( Rec2 a0 ){
  Any a3 = a0.x;
