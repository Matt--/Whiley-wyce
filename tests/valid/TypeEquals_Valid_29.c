#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int RowCol;
typedef record XXX Pos;
typedef record XXX RankPos;
typedef record XXX FilePos;
typedef 
Any pos2str ( Any );
Any shortPos2str ( Any );

Any pos2str ( Any a0 ){
  Any a1 = Str("");
  Any a2 = Char('a');
