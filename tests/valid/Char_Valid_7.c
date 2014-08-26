#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
bool x1x_f ( char  );

bool x1x_f ( char a0 ){
  char a2 = '9';
  if ( a0 <= a2 ) { goto label131; };
  bool a3 = false;
  goto label132;
  label131: ;
  a3 = true;
  label132: ;
  return a3;
}

int main (){
  char a3 = '0';
  bool a2 = x1x_f ( a3 );
  char * a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a7 = calloc(STRINGMAX, sizeof(char));
  snprintf( a7, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a7 );
  printf ( "%s\n", a7 );
  char a10 = '1';
  bool a9 = x1x_f ( a10 );
  a2 = a9;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a14 = calloc(STRINGMAX, sizeof(char));
  snprintf( a14, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a14 );
  printf ( "%s\n", a14 );
  char a17 = '2';
  bool a16 = x1x_f ( a17 );
  a2 = a16;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a21 = calloc(STRINGMAX, sizeof(char));
  snprintf( a21, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a21 );
  printf ( "%s\n", a21 );
  char a24 = '3';
  bool a23 = x1x_f ( a24 );
  a2 = a23;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a28 = calloc(STRINGMAX, sizeof(char));
  snprintf( a28, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a28 );
  printf ( "%s\n", a28 );
  char a31 = '4';
  bool a30 = x1x_f ( a31 );
  a2 = a30;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a35 = calloc(STRINGMAX, sizeof(char));
  snprintf( a35, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a35 );
  printf ( "%s\n", a35 );
  char a38 = '5';
  bool a37 = x1x_f ( a38 );
  a2 = a37;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a42 = calloc(STRINGMAX, sizeof(char));
  snprintf( a42, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a42 );
  printf ( "%s\n", a42 );
  char a45 = '6';
  bool a44 = x1x_f ( a45 );
  a2 = a44;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a49 = calloc(STRINGMAX, sizeof(char));
  snprintf( a49, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a49 );
  printf ( "%s\n", a49 );
  char a52 = '7';
  bool a51 = x1x_f ( a52 );
  a2 = a51;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a56 = calloc(STRINGMAX, sizeof(char));
  snprintf( a56, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a56 );
  printf ( "%s\n", a56 );
  char a59 = '8';
  bool a58 = x1x_f ( a59 );
  a2 = a58;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a63 = calloc(STRINGMAX, sizeof(char));
  snprintf( a63, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a63 );
  printf ( "%s\n", a63 );
  char a66 = '9';
  bool a65 = x1x_f ( a66 );
  a2 = a65;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a70 = calloc(STRINGMAX, sizeof(char));
  snprintf( a70, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a70 );
  printf ( "%s\n", a70 );
  char a73 = 'a';
  bool a72 = x1x_f ( a73 );
  a2 = a72;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a77 = calloc(STRINGMAX, sizeof(char));
  snprintf( a77, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a77 );
  printf ( "%s\n", a77 );
  char a80 = 'b';
  bool a79 = x1x_f ( a80 );
  a2 = a79;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a84 = calloc(STRINGMAX, sizeof(char));
  snprintf( a84, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a84 );
  printf ( "%s\n", a84 );
  char a87 = 'c';
  bool a86 = x1x_f ( a87 );
  a2 = a86;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a91 = calloc(STRINGMAX, sizeof(char));
  snprintf( a91, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a91 );
  printf ( "%s\n", a91 );
  char a94 = 'd';
  bool a93 = x1x_f ( a94 );
  a2 = a93;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a98 = calloc(STRINGMAX, sizeof(char));
  snprintf( a98, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a98 );
  printf ( "%s\n", a98 );
  char a101 = 'e';
  bool a100 = x1x_f ( a101 );
  a2 = a100;
  a9002 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9002, "%s", a2 ? "true" : "false" );
  char * a105 = calloc(STRINGMAX, sizeof(char));
  snprintf( a105, STRINGMAX, "%s", a2 ? "true" : "false");
  whileyPrecision( a105 );
  printf ( "%s\n", a105 );
  return 0;
}
