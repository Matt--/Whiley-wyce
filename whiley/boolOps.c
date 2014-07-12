#define LIBRARY_TESTING true

#include "../cCompiler/mattCompiler.h"
#include "../cCompiler/mattCompiler_library.c"
Any f_bool1 ( Any , Any );
Any f_bool2 ( Any , Any );
Any f_bool3 ( Any , Any );
Any f_bool4 ( Any , Any );
Any f_bool5 ( Any , Any );
Any f_bool6 ( Any , Any );
Any f_bool7 ( Any , Any );
Any f_bool8 ( Any , Any );
Any f_bool9 ( Any , Any );
Any f_bool10 ( Any , Any );
Any f_bool11 ( Any , Any );
Any f_bool12 ( Any , Any );
Any f_bool13 ( Any , Any );
Any f_bool14 ( Any , Any );
Any f_bool15 ( Any , Any );
Any f_bool16 ( Any , Any );
Any f_bool17 ( Any , Any );
Any f_bool18 ( Any , Any );
Any f_bool19 ( Any , Any );
Any f_bool20 ( Any , Any );
Any f_bool21 ( Any , Any );
Any f_bool22 ( Any , Any );
Any f_bool23 ( Any , Any );
Any f_bool24 ( Any , Any );
Any f_bool25 ( Any , Any );

int main (){
  Any a2 = Bool(true);
  Any a4 = Bool(false);
  Any a6 = f_bool1 ( a2, a4 );
  Any a5 = a6;
  Any a12 = a5;
  println ( a12 );
  Any a16 = f_bool2 ( a2, a4 );
  println ( a16 );
  Any a22 = f_bool3 ( a2, a4 );
  println ( a22 );
  Any a28 = f_bool4 ( a2, a4 );
  println ( a28 );
  Any a34 = f_bool5 ( a2, a4 );
  println ( a34 );
  Any a40 = f_bool6 ( a2, a4 );
  println ( a40 );
  Any a46 = f_bool7 ( a2, a4 );
  println ( a46 );
  Any a52 = f_bool8 ( a2, a4 );
  println ( a52 );
  Any a58 = f_bool9 ( a2, a4 );
  println ( a58 );
  Any a64 = Str("10");
  println ( a64 );
  Any a68 = f_bool10 ( a2, a4 );
  println ( a68 );
  Any a74 = f_bool11 ( a2, a4 );
  println ( a74 );
  Any a80 = f_bool12 ( a2, a4 );
  println ( a80 );
  Any a86 = f_bool13 ( a2, a4 );
  println ( a86 );
  Any a92 = f_bool14 ( a2, a4 );
  println ( a92 );
  Any a98 = Str("15");
  println ( a98 );
  Any a102 = f_bool15 ( a2, a4 );
  println ( a102 );
  Any a108 = f_bool16 ( a2, a4 );
  println ( a108 );
  Any a114 = f_bool17 ( a2, a4 );
  println ( a114 );
  Any a120 = f_bool18 ( a2, a4 );
  println ( a120 );
  Any a126 = f_bool19 ( a2, a4 );
  println ( a126 );
  Any a132 = Str("20");
  println ( a132 );
  Any a136 = f_bool20 ( a2, a4 );
  println ( a136 );
  Any a142 = f_bool21 ( a2, a4 );
  println ( a142 );
  Any a148 = f_bool22 ( a2, a4 );
  println ( a148 );
  Any a154 = f_bool23 ( a2, a4 );
  println ( a154 );
  Any a160 = f_bool24 ( a2, a4 );
  println ( a160 );
  Any a166 = Str("25");
  println ( a166 );
  Any a170 = f_bool25 ( a2, a4 );
  println ( a170 );
  return 0;
}

Any f_bool1 ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) == dataAsInt( a1 ) ) { goto label39; };
  Any a5 = Bool(false);
  goto label40;
  label39: ;
  a5 = Bool(true);
  label40: ;
  return a5;
}

Any f_bool2 ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) == dataAsInt( a1 ) ) { goto label41; };
  Any a4 = Bool(false);
  goto label42;
  label41: ;
  a4 = Bool(true);
  label42: ;
  return a4;
}

Any f_bool3 ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) != dataAsInt( a1 ) ) { goto label43; };
  Any a4 = Bool(false);
  goto label44;
  label43: ;
  a4 = Bool(true);
  label44: ;
  return a4;
}

Any f_bool4 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label45; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label45; };
  Any a6 = Bool(false);
  goto label46;
  label45: ;
  a6 = Bool(true);
  label46: ;
  return a6;
}

Any f_bool5 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label47; };
  goto label48;
  label47: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label49; };
  label48: ;
  Any a6 = Bool(false);
  goto label50;
  label49: ;
  a6 = Bool(true);
  label50: ;
  return a6;
}

Any f_bool6 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label51; };
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label51; };
  Any a6 = Bool(false);
  goto label52;
  label51: ;
  a6 = Bool(true);
  label52: ;
  return a6;
}

Any f_bool7 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label53; };
  goto label54;
  label53: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label55; };
  label54: ;
  Any a6 = Bool(false);
  goto label56;
  label55: ;
  a6 = Bool(true);
  label56: ;
  return a6;
}

Any f_bool8 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label57; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label57; };
  Any a6 = Bool(false);
  goto label58;
  label57: ;
  a6 = Bool(true);
  label58: ;
  return a6;
}

Any f_bool9 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label59; };
  goto label60;
  label59: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label61; };
  label60: ;
  Any a6 = Bool(false);
  goto label62;
  label61: ;
  a6 = Bool(true);
  label62: ;
  return a6;
}

Any f_bool10 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label63; };
  goto label64;
  label63: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label65; };
  Any a7 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a7 ) ) { goto label65; };
  label64: ;
  Any a8 = Bool(false);
  goto label66;
  label65: ;
  a8 = Bool(true);
  label66: ;
  return a8;
}

Any f_bool11 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label67; };
  goto label68;
  label67: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label69; };
  Any a7 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a7 ) ) { goto label69; };
  label68: ;
  Any a8 = Bool(false);
  goto label70;
  label69: ;
  a8 = Bool(true);
  label70: ;
  return a8;
}

Any f_bool12 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label71; };
  goto label72;
  label71: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label73; };
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label73; };
  label72: ;
  Any a8 = Bool(false);
  goto label74;
  label73: ;
  a8 = Bool(true);
  label74: ;
  return a8;
}

Any f_bool13 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label75; };
  goto label76;
  label75: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label77; };
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label77; };
  label76: ;
  Any a8 = Bool(false);
  goto label78;
  label77: ;
  a8 = Bool(true);
  label78: ;
  return a8;
}

Any f_bool14 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label79; };
  goto label80;
  label79: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label81; };
  label80: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label81; };
  Any a8 = Bool(false);
  goto label82;
  label81: ;
  a8 = Bool(true);
  label82: ;
  return a8;
}

Any f_bool15 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label83; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label84; };
  goto label85;
  label84: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label83; };
  label85: ;
  Any a8 = Bool(false);
  goto label86;
  label83: ;
  a8 = Bool(true);
  label86: ;
  return a8;
}

Any f_bool16 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label87; };
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label88; };
  goto label89;
  label88: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label87; };
  label89: ;
  Any a8 = Bool(false);
  goto label90;
  label87: ;
  a8 = Bool(true);
  label90: ;
  return a8;
}

Any f_bool17 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label91; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label91; };
  goto label92;
  label91: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label93; };
  label92: ;
  Any a8 = Bool(false);
  goto label94;
  label93: ;
  a8 = Bool(true);
  label94: ;
  return a8;
}

Any f_bool18 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label95; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label95; };
  goto label96;
  label95: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label97; };
  label96: ;
  Any a8 = Bool(false);
  goto label98;
  label97: ;
  a8 = Bool(true);
  label98: ;
  return a8;
}

Any f_bool19 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label99; };
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label100; };
  goto label101;
  label100: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a7 ) ) { goto label99; };
  label101: ;
  Any a8 = Bool(false);
  goto label102;
  label99: ;
  a8 = Bool(true);
  label102: ;
  return a8;
}

Any f_bool20 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label103; };
  Any a5 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a5 ) ) { goto label104; };
  goto label105;
  label104: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a7 ) ) { goto label103; };
  label105: ;
  Any a8 = Bool(false);
  goto label106;
  label103: ;
  a8 = Bool(true);
  label106: ;
  return a8;
}

Any f_bool21 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label107; };
  goto label108;
  label107: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label109; };
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label109; };
  label108: ;
  Any a8 = Bool(false);
  goto label110;
  label109: ;
  a8 = Bool(true);
  label110: ;
  return a8;
}

Any f_bool22 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label111; };
  goto label112;
  label111: ;
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label113; };
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label113; };
  label112: ;
  Any a8 = Bool(false);
  goto label114;
  label113: ;
  a8 = Bool(true);
  label114: ;
  return a8;
}

Any f_bool23 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label115; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label116; };
  goto label117;
  label116: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label115; };
  label117: ;
  Any a8 = Bool(false);
  goto label118;
  label115: ;
  a8 = Bool(true);
  label118: ;
  return a8;
}

Any f_bool24 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a3 ) ) { goto label119; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label120; };
  goto label121;
  label120: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label119; };
  label121: ;
  Any a8 = Bool(false);
  goto label122;
  label119: ;
  a8 = Bool(true);
  label122: ;
  return a8;
}

Any f_bool25 ( Any a0, Any a1 ){
  Any a3 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a3 ) ) { goto label123; };
  Any a5 = Bool(true);
  if ( dataAsInt( a1 ) == dataAsInt( a5 ) ) { goto label124; };
  goto label125;
  label124: ;
  Any a7 = Bool(true);
  if ( dataAsInt( a0 ) == dataAsInt( a7 ) ) { goto label123; };
  label125: ;
  Any a8 = Bool(false);
  goto label126;
  label123: ;
  a8 = Bool(true);
  label126: ;
  return a8;
}
