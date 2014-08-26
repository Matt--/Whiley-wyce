#define LIBRARY_TESTING true

#include <stdio.h>
#include <stdbool.h>

#define STRINGMAX 10 // used in snprint functions
#define real float // can be changed to suit application
#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int item;

int x1x_inc ( int  );
void x1x_print ( int, int , int  );

int x1x_inc ( int a0 ){
  int a2 = 1;
  int a3 = a0 + a2;
  int a4 = 7;
  int a5 = a3 % a4;
  return a5;
}

void x1x_print ( int a0, int a1, int a2 ){
  int a4 = 0;
  if ( a2 <= a4 ) { goto label195; };
  char * a8 = malloc(59 * sizeof(char));
  a8[0] = '{';
  a8[1] = 'M';
  a8[2] = 'o';
  a8[3] = 'n';
  a8[4] = 'd';
  a8[5] = 'a';
  a8[6] = 'y';
  a8[7] = ',';
  a8[8] = 'T';
  a8[9] = 'u';
  a8[10] = 'e';
  a8[11] = 's';
  a8[12] = 'd';
  a8[13] = 'a';
  a8[14] = 'y';
  a8[15] = ',';
  a8[16] = 'W';
  a8[17] = 'e';
  a8[18] = 'd';
  a8[19] = 'n';
  a8[20] = 'e';
  a8[21] = 's';
  a8[22] = 'd';
  a8[23] = 'a';
  a8[24] = 'y';
  a8[25] = ',';
  a8[26] = 'T';
  a8[27] = 'h';
  a8[28] = 'u';
  a8[29] = 'r';
  a8[30] = 's';
  a8[31] = 'd';
  a8[32] = 'a';
  a8[33] = 'y';
  a8[34] = ',';
  a8[35] = 'F';
  a8[36] = 'r';
  a8[37] = 'i';
  a8[38] = 'd';
  a8[39] = 'a';
  a8[40] = 'y';
  a8[41] = ',';
  a8[42] = 'S';
  a8[43] = 'a';
  a8[44] = 't';
  a8[45] = 'u';
  a8[46] = 'r';
  a8[47] = 'd';
  a8[48] = 'a';
  a8[49] = 'y';
  a8[50] = ',';
  a8[51] = 'S';
  a8[52] = 'u';
  a8[53] = 'n';
  a8[54] = 'd';
  a8[55] = 'a';
  a8[56] = 'y';
  a8[57] = '}';
  a8[58] = '\0';
  char * a10 = a8[ a1 ];
  printf ( "%s\n", a10 );
  int a12 = x1x_inc ( a1 );
  int a15 = 1;
  int a16 = a2 - a15;
  x1x_print ( a0, a12, a16 );
  label195: ;
  return;
}

int main (){
  int a1 = NULL;
  int a2 = 0;
  int a3 = 15;
  x1x_print ( a1, a2, a3 );
  return 0;
}
