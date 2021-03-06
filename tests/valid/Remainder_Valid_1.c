#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
int x1x_f ( int , int  );

int x1x_f ( int a0, int a1 ){
  int a4 = a0 % a1;
  return a4;
}

int main (){
  int a6 = 10;
  int a7 = 5;
  int a5 = x1x_f ( a6, a7 );
  char * a9005 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9005, "%d", a5 );
  char * a4 = calloc(STRINGMAX, sizeof(char));
  snprintf( a4, STRINGMAX, "%d", a5 );
  whileyPrecision( a4 );
  printf ( "%s\n", a4 );
  int a13 = 10;
  int a14 = 4;
  int a12 = x1x_f ( a13, a14 );
  char * a9012 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9012, "%d", a12 );
  char * a11 = calloc(STRINGMAX, sizeof(char));
  snprintf( a11, STRINGMAX, "%d", a12 );
  whileyPrecision( a11 );
  printf ( "%s\n", a11 );
  int a20 = 1;
  int a21 = 4;
  int a19 = x1x_f ( a20, a21 );
  char * a9019 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9019, "%d", a19 );
  char * a18 = calloc(STRINGMAX, sizeof(char));
  snprintf( a18, STRINGMAX, "%d", a19 );
  whileyPrecision( a18 );
  printf ( "%s\n", a18 );
  int a27 = 103;
  int a28 = 2;
  int a26 = x1x_f ( a27, a28 );
  char * a9026 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9026, "%d", a26 );
  char * a25 = calloc(STRINGMAX, sizeof(char));
  snprintf( a25, STRINGMAX, "%d", a26 );
  whileyPrecision( a25 );
  printf ( "%s\n", a25 );
  int a34 = 10;
  int a35 = -a34;
  int a36 = 5;
  int a33 = x1x_f ( a35, a36 );
  char * a9033 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9033, "%d", a33 );
  char * a32 = calloc(STRINGMAX, sizeof(char));
  snprintf( a32, STRINGMAX, "%d", a33 );
  whileyPrecision( a32 );
  printf ( "%s\n", a32 );
  int a42 = 10;
  int a43 = -a42;
  int a44 = 4;
  int a41 = x1x_f ( a43, a44 );
  char * a9041 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9041, "%d", a41 );
  char * a40 = calloc(STRINGMAX, sizeof(char));
  snprintf( a40, STRINGMAX, "%d", a41 );
  whileyPrecision( a40 );
  printf ( "%s\n", a40 );
  int a50 = 1;
  int a51 = -a50;
  int a52 = 4;
  int a49 = x1x_f ( a51, a52 );
  char * a9049 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9049, "%d", a49 );
  char * a48 = calloc(STRINGMAX, sizeof(char));
  snprintf( a48, STRINGMAX, "%d", a49 );
  whileyPrecision( a48 );
  printf ( "%s\n", a48 );
  int a58 = 103;
  int a59 = -a58;
  int a60 = 2;
  int a57 = x1x_f ( a59, a60 );
  char * a9057 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9057, "%d", a57 );
  char * a56 = calloc(STRINGMAX, sizeof(char));
  snprintf( a56, STRINGMAX, "%d", a57 );
  whileyPrecision( a56 );
  printf ( "%s\n", a56 );
  int a66 = 10;
  int a67 = -a66;
  int a68 = 5;
  int a69 = -a68;
  int a65 = x1x_f ( a67, a69 );
  char * a9065 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9065, "%d", a65 );
  char * a64 = calloc(STRINGMAX, sizeof(char));
  snprintf( a64, STRINGMAX, "%d", a65 );
  whileyPrecision( a64 );
  printf ( "%s\n", a64 );
  int a75 = 10;
  int a76 = -a75;
  int a77 = 4;
  int a78 = -a77;
  int a74 = x1x_f ( a76, a78 );
  char * a9074 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9074, "%d", a74 );
  char * a73 = calloc(STRINGMAX, sizeof(char));
  snprintf( a73, STRINGMAX, "%d", a74 );
  whileyPrecision( a73 );
  printf ( "%s\n", a73 );
  int a84 = 1;
  int a85 = -a84;
  int a86 = 4;
  int a87 = -a86;
  int a83 = x1x_f ( a85, a87 );
  char * a9083 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9083, "%d", a83 );
  char * a82 = calloc(STRINGMAX, sizeof(char));
  snprintf( a82, STRINGMAX, "%d", a83 );
  whileyPrecision( a82 );
  printf ( "%s\n", a82 );
  int a93 = 103;
  int a94 = -a93;
  int a95 = 2;
  int a96 = -a95;
  int a92 = x1x_f ( a94, a96 );
  char * a9092 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9092, "%d", a92 );
  char * a91 = calloc(STRINGMAX, sizeof(char));
  snprintf( a91, STRINGMAX, "%d", a92 );
  whileyPrecision( a91 );
  printf ( "%s\n", a91 );
  int a102 = 10;
  int a103 = 5;
  int a104 = -a103;
  int a101 = x1x_f ( a102, a104 );
  char * a9101 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9101, "%d", a101 );
  char * a100 = calloc(STRINGMAX, sizeof(char));
  snprintf( a100, STRINGMAX, "%d", a101 );
  whileyPrecision( a100 );
  printf ( "%s\n", a100 );
  int a110 = 10;
  int a111 = 4;
  int a112 = -a111;
  int a109 = x1x_f ( a110, a112 );
  char * a9109 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9109, "%d", a109 );
  char * a108 = calloc(STRINGMAX, sizeof(char));
  snprintf( a108, STRINGMAX, "%d", a109 );
  whileyPrecision( a108 );
  printf ( "%s\n", a108 );
  int a118 = 1;
  int a119 = 4;
  int a120 = -a119;
  int a117 = x1x_f ( a118, a120 );
  char * a9117 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9117, "%d", a117 );
  char * a116 = calloc(STRINGMAX, sizeof(char));
  snprintf( a116, STRINGMAX, "%d", a117 );
  whileyPrecision( a116 );
  printf ( "%s\n", a116 );
  int a126 = 103;
  int a127 = 2;
  int a128 = -a127;
  int a125 = x1x_f ( a126, a128 );
  char * a9125 = calloc(STRINGMAX, sizeof(char));
  sprintf( a9125, "%d", a125 );
  char * a124 = calloc(STRINGMAX, sizeof(char));
  snprintf( a124, STRINGMAX, "%d", a125 );
  whileyPrecision( a124 );
  printf ( "%s\n", a124 );
  return 0;
}
