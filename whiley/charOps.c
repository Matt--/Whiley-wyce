#define LIBRARY_TESTING true

#include "../cCompiler/mattCompiler.h"
#include "../cCompiler/mattCompiler_library.c"
Any f_char1 ( Any , Any );
Any f_char2 ( Any , Any );
Any f_char3 ( Any , Any );
Any f_char4 ( Any , Any );
Any f_char5 ( Any , Any );
Any f_char6 ( Any , Any );
Any f_char7 ( Any , Any );
Any f_char8 ( Any , Any );
Any f_char9 ( Any , Any );
Any f_char10 ( Any , Any );

int main (){
  Any a2 = Char('m');
  Any a4 = Char('n');
  Any a8 = f_char1 ( a2, a4 );
  Any a7 = a8;
  Any a14 = a7;
  println ( a14 );
  Any a18 = f_char2 ( a2, a4 );
  println ( a18 );
  Any a24 = f_char3 ( a2, a4 );
  println ( a24 );
  Any a30 = f_char4 ( a2, a4 );
  println ( a30 );
  Any a36 = f_char5 ( a2, a4 );
  println ( a36 );
  Any a42 = f_char6 ( a2, a4 );
  println ( a42 );
  Any a48 = f_char7 ( a2, a4 );
  println ( a48 );
  Any a54 = f_char8 ( a2, a4 );
  println ( a54 );
  Any a60 = f_char9 ( a2, a4 );
  println ( a60 );
  Any a66 = f_char10 ( a2, a4 );
  println ( a66 );
  return 0;
}

Any f_char1 ( Any a0, Any a1 ){
  Any a4 = Char('0');
  if ( dataAsInt( a0 ) > dataAsInt( a4 ) ) { goto label16; };
  Any a5 = Bool(false);
  goto label17;
  label16: ;
  a5 = Bool(true);
  label17: ;
  return a5;
}

Any f_char2 ( Any a0, Any a1 ){
  Any a3 = Char('0');
  if ( dataAsInt( a0 ) > dataAsInt( a3 ) ) { goto label18; };
  Any a4 = Bool(false);
  goto label19;
  label18: ;
  a4 = Bool(true);
  label19: ;
  return a4;
}

Any f_char3 ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) == dataAsInt( a1 ) ) { goto label20; };
  Any a4 = Bool(false);
  goto label21;
  label20: ;
  a4 = Bool(true);
  label21: ;
  return a4;
}

Any f_char4 ( Any a0, Any a1 ){
  if ( dataAsInt( a0 ) != dataAsInt( a1 ) ) { goto label22; };
  Any a4 = Bool(false);
  goto label23;
  label22: ;
  a4 = Bool(true);
  label23: ;
  return a4;
}

Any f_char5 ( Any a0, Any a1 ){
  Any a3 = Char('0');
  if ( dataAsInt( a0 ) < dataAsInt( a3 ) ) { goto label24; };
  Any a4 = Bool(false);
  goto label25;
  label24: ;
  a4 = Bool(true);
  label25: ;
  return a4;
}

Any f_char6 ( Any a0, Any a1 ){
  Any a3 = Char('z');
  if ( dataAsInt( a0 ) < dataAsInt( a3 ) ) { goto label26; };
  Any a4 = Bool(false);
  goto label27;
  label26: ;
  a4 = Bool(true);
  label27: ;
  return a4;
}

Any f_char7 ( Any a0, Any a1 ){
  Any a3 = Char('z');
  if ( dataAsInt( a0 ) > dataAsInt( a3 ) ) { goto label28; };
  Any a4 = Bool(false);
  goto label29;
  label28: ;
  a4 = Bool(true);
  label29: ;
  return a4;
}

Any f_char8 ( Any a0, Any a1 ){
  Any a2 = Char('a');
  if ( dataAsInt( a2 ) >= dataAsInt( a0 ) ) { goto label30; };
  Any a5 = Char('z');
  if ( dataAsInt( a0 ) < dataAsInt( a5 ) ) { goto label31; };
  label30: ;
  Any a6 = Bool(false);
  goto label32;
  label31: ;
  a6 = Bool(true);
  label32: ;
  return a6;
}

Any f_char9 ( Any a0, Any a1 ){
  Any a3 = Char('0');
  if ( dataAsInt( a0 ) <= dataAsInt( a3 ) ) { goto label33; };
  Any a5 = Char('z');
  if ( dataAsInt( a0 ) >= dataAsInt( a5 ) ) { goto label33; };
  if ( dataAsInt( a0 ) < dataAsInt( a1 ) ) { goto label34; };
  label33: ;
  Any a8 = Bool(false);
  goto label35;
  label34: ;
  a8 = Bool(true);
  label35: ;
  return a8;
}

Any f_char10 ( Any a0, Any a1 ){
  Any a3 = Char('0');
  if ( dataAsInt( a0 ) <= dataAsInt( a3 ) ) { goto label36; };
  Any a5 = Char('z');
  if ( dataAsInt( a0 ) >= dataAsInt( a5 ) ) { goto label36; };
  if ( dataAsInt( a0 ) < dataAsInt( a1 ) ) { goto label37; };
  label36: ;
  Any a8 = Bool(false);
  goto label38;
  label37: ;
  a8 = Bool(true);
  label38: ;
  return a8;
}
