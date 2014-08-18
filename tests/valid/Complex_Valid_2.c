#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any colour; Any kind; } Piece;
typedef int RowCol;
typedef struct {Any col; Any row; } Pos;
typedef struct {Any from; Any piece; Any to; } SingleMove;
typedef struct {Any from; Any piece; Any taken; Any to; } SingleTake;
typedef struct {Any isWhite; Any kingSide; } CastleMove;
typedef struct {Any check; } CheckMove;

Any x1x_move2str ( Any );
Any x1x_piece2str ( Piece );
Any x1x_pos2str ( Pos );

Any x1x_move2str ( Any a0 ){
  if(a0.type == ){ goto label261; };
  goto label262;
  label261: ;
  Any a1 = a0.taken;
  Any a2 = a1.kind;
  label288: ;
