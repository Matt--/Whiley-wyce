#define LIBRARY_TESTING true

#define STRINGMAX 10 // used in snprint functions
#include <stdio.h>
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
#define real double // can be changed to suit application
Any x1x_indexOf ( char , char *  );

Any x1x_indexOf ( char a0, char * a1 ){
  int a3 = 0;
  int count = 0;
  loop_start_label167: ;
  if(count == strlen(a1) ){ goto label167; }
  char a5 = a1[count];
  count++;
  if ( a0 != a5 ) { goto label168; };
  ;
  return a3;
  label168: ;
  int a10 = 1;
  int a11 = a3 + a10;
  a3 = a11;
  goto loop_start_label167;
  label167: ;
  null a12 = null;
  ;
  return a12;
}

int main (){
  char a6 = 'H';
  static char a7[] = "Hello World";
  null|int a5 = x1x_indexOf ( a6, a7 );
  ;
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "fail", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  char a13 = 'e';
  static char a14[] = "Hello World";
  null|int a12 = x1x_indexOf ( a13, a14 );
  ;
  char * a11 = calloc(STRINGMAX, sizeof(char));
  snprintf( a11, STRINGMAX, "fail", a12 );
  whileyPrecision( a11 );
  printf ( "%s\n", a11 );
  char a20 = 'l';
  static char a21[] = "Hello World";
  null|int a19 = x1x_indexOf ( a20, a21 );
  ;
  char * a18 = calloc(STRINGMAX, sizeof(char));
  snprintf( a18, STRINGMAX, "fail", a19 );
  whileyPrecision( a18 );
  printf ( "%s\n", a18 );
  char a27 = 'o';
  static char a28[] = "Hello World";
  null|int a26 = x1x_indexOf ( a27, a28 );
  ;
  char * a25 = calloc(STRINGMAX, sizeof(char));
  snprintf( a25, STRINGMAX, "fail", a26 );
  whileyPrecision( a25 );
  printf ( "%s\n", a25 );
  char a34 = ' ';
  static char a35[] = "Hello World";
  null|int a33 = x1x_indexOf ( a34, a35 );
  ;
  char * a32 = calloc(STRINGMAX, sizeof(char));
  snprintf( a32, STRINGMAX, "fail", a33 );
  whileyPrecision( a32 );
  printf ( "%s\n", a32 );
  char a41 = 'W';
  static char a42[] = "Hello World";
  null|int a40 = x1x_indexOf ( a41, a42 );
  ;
  char * a39 = calloc(STRINGMAX, sizeof(char));
  snprintf( a39, STRINGMAX, "fail", a40 );
  whileyPrecision( a39 );
  printf ( "%s\n", a39 );
  char a48 = 'r';
  static char a49[] = "Hello World";
  null|int a47 = x1x_indexOf ( a48, a49 );
  ;
  char * a46 = calloc(STRINGMAX, sizeof(char));
  snprintf( a46, STRINGMAX, "fail", a47 );
  whileyPrecision( a46 );
  printf ( "%s\n", a46 );
  char a55 = 'd';
  static char a56[] = "Hello World";
  null|int a54 = x1x_indexOf ( a55, a56 );
  ;
  char * a53 = calloc(STRINGMAX, sizeof(char));
  snprintf( a53, STRINGMAX, "fail", a54 );
  whileyPrecision( a53 );
  printf ( "%s\n", a53 );
  char a62 = 'z';
  static char a63[] = "Hello World";
  null|int a61 = x1x_indexOf ( a62, a63 );
  ;
  char * a60 = calloc(STRINGMAX, sizeof(char));
  snprintf( a60, STRINGMAX, "fail", a61 );
  whileyPrecision( a60 );
  printf ( "%s\n", a60 );
  char a69 = '1';
  static char a70[] = "Hello World";
  null|int a68 = x1x_indexOf ( a69, a70 );
  ;
  char * a67 = calloc(STRINGMAX, sizeof(char));
  snprintf( a67, STRINGMAX, "fail", a68 );
  whileyPrecision( a67 );
  printf ( "%s\n", a67 );
  return 0;
}
