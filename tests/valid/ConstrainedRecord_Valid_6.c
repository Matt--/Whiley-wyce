#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
typedef struct {Any input; Any pos; } state;

state x1x_parseWhiteSpace ( void );
state x1x_parseTerm ( void );

state x1x_parseWhiteSpace (void){
