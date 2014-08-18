#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any data; } MyProc2;

void x1x_set ( Any , Any  );
Any x1x_get ( Any  );
Any x1x_create ( Any  );

void x1x_set ( Any a0, Any a1 ){
  Any a2 = a1;
