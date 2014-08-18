#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any items; } Queue;

Any x1x_get ( Any );
void x1x_put ( Any , Any );
Any x1x_isEmpty ( Any );

Any x1x_get ( Any a0 ){
