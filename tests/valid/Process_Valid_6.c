#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any data; } Actor;

Any x1x_get ( Any );
Any x1x_createActor ( Any );
Any* x1x_createActors ( Any );

Any x1x_get ( Any a0 ){
