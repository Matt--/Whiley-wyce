#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"

int main (){
  bool a2 = true;
  bool a4 = false;
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  printf ( "%s\n", a2 ? "true" : "false");
  char * a9004 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9004, "%s", a4 ? "true" : "false" );
  printf ( "%s\n", a4 ? "true" : "false");
  char * a16 = "AND";
  printf ( "%s\n", a16 );
  bool a18 = true;
  if ( a2 == a18 ) { goto label136; };
  goto label137;
  label136: ;
  bool a20 = true;
  if ( a4 == a20 ) { goto label138; };
  label137: ;
  bool a21 = false;
  goto label139;
  label138: ;
  a21 = true;
  label139: ;
  a2 = a21;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  printf ( "%s\n", a2 ? "true" : "false");
  char * a29 = "NOT";
  printf ( "%s\n", a29 );
  bool a36 = true;
  if ( a21 == a36 ) { goto label140; };
  bool a34 = true;
  char * a9034 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9034, "%s", a34 ? "true" : "false" );
  goto label141;
  label140: ;
  a34 = false;
  a9034 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9034, "%s", a34 ? "true" : "false" );
  label141: ;
  printf ( "%s\n", a34 ? "true" : "false");
  return 0;
}
