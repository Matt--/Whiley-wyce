#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef int nat;
typedef struct {Any data; Any height; Any width; } Matrix;

Matrix x1x_Matrix ( Any , Any , Any[]  );
Matrix x1x_run ( Matrix , Matrix  );

Matrix x1x_Matrix ( Any a0, Any a1, Any a2[] ){
  Matrix *a15 = { a2, a1, a0 };
  Any a24 = a15.width;
  Any a27 = a15.height;
  Any *a30 = a15.data;
  return a15;
}

Matrix x1x_run ( Matrix a0, Matrix a1 ){
  Any a6 [10];
  Any a8 = Int(0);
  Any a10 = a0.height;
  a8, a10};
  int count = a11[0];
  loop_start_label199: ;
  if(count == a11[1]){ goto label199; }
  Any a12 = Char( a11[count] );
  count++;
  Any a13 [10];
  Any a15 = Int(0);
  Any a17 = a1.width;
  a15, a17};
  int count = a18[0];
  loop_start_label200: ;
  if(count == a18[1]){ goto label200; }
  Any a19 = Char( a18[count] );
  count++;
  Any a21 = Int(0);
  Any a20 = a21;
  Any a22 = Int(0);
  Any a24 = a0.width;
  a22, a24};
  int count = a25[0];
  loop_start_label201: ;
  if(count == a25[1]){ goto label201; }
  Any a26 = Char( a25[count] );
  count++;
  Any *a29 = a0.data;
  Any a58 = Int(0);
  Any a59 = Int( sizeof( a29 ) / sizeof( a29[0] ) );
  Any *a31 = a29[a12.i];
  a58 = Int(0);
  a59 = Int( sizeof( a31 ) / sizeof( a31[0] ) );
  Any a33 = a31[a26.i];
  Any *a35 = a1.data;
  a58 = Int(0);
  a59 = Int( sizeof( a35 ) / sizeof( a35[0] ) );
  Any *a37 = a35[a26.i];
  a58 = Int(0);
  a59 = Int( sizeof( a37 ) / sizeof( a37[0] ) );
  Any a39 = a37[a19.i];
  Any a40 = wyce_mul( a33 , a39);
  Any a41 = wyce_add( a20 , a40);
  a20 = a41;
  goto loop_start_label201;
  label201: ;
  Any a44[] = {a20};
  #### appending arrays not yet catered for;
  a13 = Null();
  goto loop_start_label200;
  label200: ;
  Any a48[] = {a13};
  #### appending arrays not yet catered for;
  a6 = Null();
  goto loop_start_label199;
  label199: ;
  Any a52 = a1.width;
  Any a54 = a0.height;
  Any a61 = Int(0);
  a61 = Int(0);
  Any a60 = Int( sizeof( a6 ) / sizeof( a6[0] ) );
  int count = 0;
  loop_start_label202: ;
  if(count == a1.i )){ goto label202; }
  Any a62 = Char( a6[count] );
  count++;
  Any a64 = Int( sizeof( a62 ) / sizeof( a62[0] ) );
  if ( dataAsInt( a64 ) != dataAsInt( a52 ) ) { goto label203; };
  goto loop_start_label202;
  label202: ;
  goto label204;
  label203: ;
  Any a66 = Bool(false);
  goto label205;
  label204: ;
  a66 = Bool(true);
  label205: ;
  Any a67 = Bool(true);
  Matrix *a50 = x1x_Matrix ( a52, a54, a6 );
  a62 = a50.width;
  a64 = a1.width;
  a66 = a50.height;
  Any a68 = a0.height;
  return a50;
}

int main (){
  Any a3 = Int(2);
  Any a4 = Int(2);
  Any a5 = Int(1);
  Any a6 = Int(0);
  Any a7[] = {a5, a6};
  Any a8 = Int(3);
  Any a9 = wyce_neg(a8);
  Any a10 = Int(2);
  Any a11[] = {a9, a10};
  Any a12[] = {a7, a11};
  Any a18 = Int(0);
  a18 = Int(0);
  Any a17 = Int( sizeof( a12 ) / sizeof( a12[0] ) );
  int count = 0;
  loop_start_label206: ;
  if(count == a1.i )){ goto label206; }
  Any a19 = Char( a12[count] );
  count++;
  Any a21 = Int( sizeof( a19 ) / sizeof( a19[0] ) );
  if ( dataAsInt( a21 ) != dataAsInt( a3 ) ) { goto label207; };
  goto loop_start_label206;
  label206: ;
  goto label208;
  label207: ;
  Any a23 = Bool(false);
  goto label209;
  label208: ;
  a23 = Bool(true);
  label209: ;
  Any a24 = Bool(true);
  Matrix *a2 = x1x_Matrix ( a3, a4, a12 );
  Any a15 = Int(2);
  Any a16 = Int(2);
  a17 = Int(1);
  a18 = wyce_neg(a17);
  a19 = Int(4);
  Any a20[] = {a18, a19};
  a21 = Int(3);
  Any a22 = Int(5);
  Any a23[] = {a21, a22};
  Any a24[] = {a20, a23};
  Any a30 = Int(0);
  a30 = Int(0);
  Any a29 = Int( sizeof( a24 ) / sizeof( a24[0] ) );
  int count = 0;
  loop_start_label210: ;
  if(count == a1.i )){ goto label210; }
  Any a31 = Char( a24[count] );
  count++;
  Any a33 = Int( sizeof( a31 ) / sizeof( a31[0] ) );
  if ( dataAsInt( a33 ) != dataAsInt( a15 ) ) { goto label211; };
  goto loop_start_label210;
  label210: ;
  goto label212;
  label211: ;
  Any a35 = Bool(false);
  goto label213;
  label212: ;
  a35 = Bool(true);
  label213: ;
  Any a36 = Bool(true);
  Matrix *a14 = x1x_Matrix ( a15, a16, a24 );
  Any a32 = a2.height;
  a33 = a2.width;
  Any *a34 = a2.data;
  a36 = Int( sizeof( a34 ) / sizeof( a34[0] ) );
  int count = 0;
  loop_start_label214: ;
  if(count == a1.i )){ goto label214; }
  Any a38 = Char( a34[count] );
  count++;
  Any a40 = Int( sizeof( a38 ) / sizeof( a38[0] ) );
  if ( dataAsInt( a40 ) != dataAsInt( a33 ) ) { goto label215; };
  goto loop_start_label214;
  label214: ;
  goto label216;
  label215: ;
  Any a42 = Bool(false);
  goto label217;
  label216: ;
  a42 = Bool(true);
  label217: ;
  Any a43 = Bool(true);
  a32 = a14.height;
  a33 = a14.width;
  a34 = a14.data;
  a36 = Int( sizeof( a34 ) / sizeof( a34[0] ) );
  int count = 0;
  loop_start_label218: ;
  if(count == a1.i )){ goto label218; }
  a38 = Char( a34[count] );
  count++;
  a40 = Int( sizeof( a38 ) / sizeof( a38[0] ) );
  if ( dataAsInt( a40 ) != dataAsInt( a33 ) ) { goto label219; };
  goto loop_start_label218;
  label218: ;
  goto label220;
  label219: ;
  a42 = Bool(false);
  goto label221;
  label220: ;
  a42 = Bool(true);
  label221: ;
  a43 = Bool(true);
  a32 = a2.width;
  a34 = a14.height;
  Matrix *a26 = x1x_run ( a2, a14 );
  Matrix *a25 = a26;
  a32 = a25;
  println ( a32 );
  a34 = Int(3);
  a35 = Int(2);
  a36 = Int(1);
  Any a37 = Int(2);
  a38 = Int(3);
  Any a39[] = {a36, a37, a38};
  a40 = Int(4);
  Any a41 = Int(5);
  a42 = Int(6);
  Any a43[] = {a40, a41, a42};
  Any a44[] = {a39, a43};
  Any a50 = Int(0);
  a50 = Int(0);
  Any a49 = Int( sizeof( a44 ) / sizeof( a44[0] ) );
  int count = 0;
  loop_start_label222: ;
  if(count == a1.i )){ goto label222; }
  Any a51 = Char( a44[count] );
  count++;
  Any a53 = Int( sizeof( a51 ) / sizeof( a51[0] ) );
  if ( dataAsInt( a53 ) != dataAsInt( a34 ) ) { goto label223; };
  goto loop_start_label222;
  label222: ;
  goto label224;
  label223: ;
  Any a55 = Bool(false);
  goto label225;
  label224: ;
  a55 = Bool(true);
  label225: ;
  Any a56 = Bool(true);
  a33 = x1x_Matrix ( a34, a35, a44 );
  Any a46 = Int(2);
  Any a47 = Int(3);
  Any a48 = Int(1);
  a49 = Int(2);
  Any a50[] = {a48, a49};
  a51 = Int(3);
  Any a52 = Int(4);
  Any a53[] = {a51, a52};
  Any a54 = Int(5);
  a55 = Int(6);
  Any a56[] = {a54, a55};
  Any a57[] = {a50, a53, a56};
  Any a63 = Int(0);
  a63 = Int(0);
  Any a62 = Int( sizeof( a57 ) / sizeof( a57[0] ) );
  int count = 0;
  loop_start_label226: ;
  if(count == a1.i )){ goto label226; }
  Any a64 = Char( a57[count] );
  count++;
  Any a66 = Int( sizeof( a64 ) / sizeof( a64[0] ) );
  if ( dataAsInt( a66 ) != dataAsInt( a46 ) ) { goto label227; };
  goto loop_start_label226;
  label226: ;
  goto label228;
  label227: ;
  Any a68 = Bool(false);
  goto label229;
  label228: ;
  a68 = Bool(true);
  label229: ;
  Any a69 = Bool(true);
  Matrix *a45 = x1x_Matrix ( a46, a47, a57 );
  a64 = a33.height;
  Any a65 = a33.width;
  a66 = a33.data;
  a68 = Int( sizeof( a66 ) / sizeof( a66[0] ) );
  int count = 0;
  loop_start_label230: ;
  if(count == a1.i )){ goto label230; }
  Any a70 = Char( a66[count] );
  count++;
  Any a72 = Int( sizeof( a70 ) / sizeof( a70[0] ) );
  if ( dataAsInt( a72 ) != dataAsInt( a65 ) ) { goto label231; };
  goto loop_start_label230;
  label230: ;
  goto label232;
  label231: ;
  Any a74 = Bool(false);
  goto label233;
  label232: ;
  a74 = Bool(true);
  label233: ;
  Any a75 = Bool(true);
  a64 = a45.height;
  a65 = a45.width;
  a66 = a45.data;
  a68 = Int( sizeof( a66 ) / sizeof( a66[0] ) );
  int count = 0;
  loop_start_label234: ;
  if(count == a1.i )){ goto label234; }
  a70 = Char( a66[count] );
  count++;
  a72 = Int( sizeof( a70 ) / sizeof( a70[0] ) );
  if ( dataAsInt( a72 ) != dataAsInt( a65 ) ) { goto label235; };
  goto loop_start_label234;
  label234: ;
  goto label236;
  label235: ;
  a74 = Bool(false);
  goto label237;
  label236: ;
  a74 = Bool(true);
  label237: ;
  a75 = Bool(true);
  a64 = a33.width;
  a66 = a45.height;
  Matrix *a58 = x1x_run ( a33, a45 );
  a25 = a58;
  a64 = a25;
  println ( a64 );
  a66 = Int(3);
  Any a67 = Int(2);
  a68 = Int(1);
  a69 = Int(2);
  a70 = Int(3);
  Any a71[] = {a68, a69, a70};
  a72 = Int(4);
  Any a73 = Int(5);
  a74 = Int(6);
  Any a75[] = {a72, a73, a74};
  Any a76[] = {a71, a75};
  Any a82 = Int(0);
  a82 = Int(0);
  Any a81 = Int( sizeof( a76 ) / sizeof( a76[0] ) );
  int count = 0;
  loop_start_label238: ;
  if(count == a1.i )){ goto label238; }
  Any a83 = Char( a76[count] );
  count++;
  Any a85 = Int( sizeof( a83 ) / sizeof( a83[0] ) );
  if ( dataAsInt( a85 ) != dataAsInt( a66 ) ) { goto label239; };
  goto loop_start_label238;
  label238: ;
  goto label240;
  label239: ;
  Any a87 = Bool(false);
  goto label241;
  label240: ;
  a87 = Bool(true);
  label241: ;
  Any a88 = Bool(true);
  a65 = x1x_Matrix ( a66, a67, a76 );
  Any a78 = Int(4);
  Any a79 = Int(3);
  Any a80 = Int(1);
  a81 = Int(2);
  a82 = Int(3);
  a83 = Int(4);
  Any a84[] = {a80, a81, a82, a83};
  a85 = Int(5);
  Any a86 = Int(6);
  a87 = Int(7);
  a88 = Int(8);
  Any a89[] = {a85, a86, a87, a88};
  Any a90 = Int(9);
  Any a91 = Int(10);
  Any a92 = Int(11);
  Any a93 = Int(12);
  Any a94[] = {a90, a91, a92, a93};
  Any a95[] = {a84, a89, a94};
  Any a101 = Int(0);
  a101 = Int(0);
  Any a100 = Int( sizeof( a95 ) / sizeof( a95[0] ) );
  int count = 0;
  loop_start_label242: ;
  if(count == a1.i )){ goto label242; }
  Any a102 = Char( a95[count] );
  count++;
  Any a104 = Int( sizeof( a102 ) / sizeof( a102[0] ) );
  if ( dataAsInt( a104 ) != dataAsInt( a78 ) ) { goto label243; };
  goto loop_start_label242;
  label242: ;
  goto label244;
  label243: ;
  Any a106 = Bool(false);
  goto label245;
  label244: ;
  a106 = Bool(true);
  label245: ;
  Any a107 = Bool(true);
  Matrix *a77 = x1x_Matrix ( a78, a79, a95 );
  a102 = a65.height;
  Any a103 = a65.width;
  a104 = a65.data;
  a106 = Int( sizeof( a104 ) / sizeof( a104[0] ) );
  int count = 0;
  loop_start_label246: ;
  if(count == a1.i )){ goto label246; }
  Any a108 = Char( a104[count] );
  count++;
  Any a110 = Int( sizeof( a108 ) / sizeof( a108[0] ) );
  if ( dataAsInt( a110 ) != dataAsInt( a103 ) ) { goto label247; };
  goto loop_start_label246;
  label246: ;
  goto label248;
  label247: ;
  Any a112 = Bool(false);
  goto label249;
  label248: ;
  a112 = Bool(true);
  label249: ;
  Any a113 = Bool(true);
  a102 = a77.height;
  a103 = a77.width;
  a104 = a77.data;
  a106 = Int( sizeof( a104 ) / sizeof( a104[0] ) );
  int count = 0;
  loop_start_label250: ;
  if(count == a1.i )){ goto label250; }
  a108 = Char( a104[count] );
  count++;
  a110 = Int( sizeof( a108 ) / sizeof( a108[0] ) );
  if ( dataAsInt( a110 ) != dataAsInt( a103 ) ) { goto label251; };
  goto loop_start_label250;
  label250: ;
  goto label252;
  label251: ;
  a112 = Bool(false);
  goto label253;
  label252: ;
  a112 = Bool(true);
  label253: ;
  a113 = Bool(true);
  a102 = a65.width;
  a104 = a77.height;
  Matrix *a96 = x1x_run ( a65, a77 );
  a25 = a96;
  a102 = a25;
  println ( a102 );
  return 0;
}
