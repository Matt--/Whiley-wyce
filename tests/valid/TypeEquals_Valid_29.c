#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int RowCol;
typedef struct {Any col; Any row; } Pos;
typedef struct {Any row; } RankPos;
typedef struct {Any col; } FilePos;

Any x1x_pos2str ( Pos );
Any x1x_shortPos2str ( Any );

Any x1x_pos2str ( Pos a0 ){
  Any a1 = Str("");
  Any a2 = Char('a');
  a2.type = INT_TYPE;
  Any a9999 = Char(a2.c);
  a2.i = (int) a9999.c;
  Any a4 = a0.col;
  Any a5 = wyce_add( a2 , a4);
  Any a6;
  
  Any charNowStr = toStr(a6);
  Any a7 = Str( strcat ( a1.s , charNowStr.s ) );
  Any a8 = Char('1');
  a8.type = INT_TYPE;
  a9999 = Char(a8.c);
  a8.i = (int) a9999.c;
  Any a10 = a0.row;
  Any a11 = wyce_add( a8 , a10);
  Any a12;
  
  Any charNowStr = toStr(a12);
  Any a13 = Str( strcat ( a7.s , charNowStr.s ) );
  return a13;
}

Any x1x_shortPos2str ( Any a0 ){
  if(a0.type == NULL_TYPE){ goto label116; };
  goto label117;
  label116: ;
  Any a1 = Str("");
  return a1;
  label117: ;
  if(a0.type == ){ goto label116; };
  goto label118;
  Any a2 = Str("");
  Any a3 = Char('1');
  a3.type = INT_TYPE;
  Any a9999 = Char(a3.c);
  a3.i = (int) a9999.c;
  Any a5 = a0.row;
  Any a6 = wyce_add( a3 , a5);
  Any a7;
  
  Any charNowStr = toStr(a7);
  Any a8 = Str( strcat ( a2.s , charNowStr.s ) );
  return a8;
  label118: ;
  if(a0.type == ){ goto label116; };
  goto label119;
  Any a9 = Str("");
  Any a10 = Char('a');
  a10.type = INT_TYPE;
  a9999 = Char(a10.c);
  a10.i = (int) a9999.c;
  Any a12 = a0.col;
  Any a13 = wyce_add( a10 , a12);
  Any a14;
  
  Any charNowStr = toStr(a14);
  Any a15 = Str( strcat ( a9.s , charNowStr.s ) );
  return a15;
  label119: ;
  Any a16 = x1x_pos2str ( a0 );
  return a16;
}

int main (){
  Any a5 = Null();
  Any a4 = x1x_shortPos2str ( a5 );
  println ( a4 );
  Any a10 = Int(1);
  RankPos a11 = { a10 };
  Any a9 = x1x_shortPos2str ( a11 );
  println ( a9 );
  Any a16 = Int(1);
  FilePos a17 = { a16 };
  Any a15 = x1x_shortPos2str ( a17 );
  println ( a15 );
  Any a22 = Int(2);
  Any a23 = Int(1);
  Pos a24 = { a22, a23 };
  Any a21 = x1x_shortPos2str ( a24 );
  println ( a21 );
  return 0;
}
