#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
const int BLANK = 0 ;
const int CIRCLE = 1 ;
const int CROSS = 2 ;

typedef int nat;
typedef int piece;
typedef record XXX Board;
typedef record XXX EmptyBoard;

Any EmptyBoard ( );

Any EmptyBoard (){
  Any a0 = Int(0);
  Any a1 = Int(0);
  Any a2 = Int(0);
  Any a3 = Int(0);
  Any a4 = Int(0);
  Any a5 = Int(0);
  Any a6 = Int(0);
  Any a7 = Int(0);
  Any a8 = Int(0);
  Any a9 = Int(0);
  Any a10[] = {a1, a2, a3, a4, a5, a6, a7, a8, a9};
