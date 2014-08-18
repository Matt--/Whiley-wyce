#define LIBRARY_TESTING true

#include "../../cCompiler/mattCompiler.h"
#include "../../cCompiler/mattCompiler_library.c"
typedef struct {Any classes; Any pkg; } Class;
typedef struct {Any offset; Any op; } Unit;
typedef struct {Any name; Any offset; Any op; Any owner; Any type; } FieldIndex;
typedef struct {Any name; } Attribute;
typedef struct {Any data; Any name; } CodeAttribute;

Any x1x_codeLength ( Attribute );

Any x1x_codeLength ( Attribute a0 ){
  if(a0.type == ){ goto label370; };
  label377: ;
  goto label371;
  label370: ;
  Any a1 = a0.data;
  int count = 0;
  loop_start_label372: ;
  if(count == a1.i )){ goto label372; }
  Any a2 = Char( a1[count] );
  count++;
  label375: ;
  if(a2.type == ){ goto label373; };
  if( !a2.type == ){ goto label374; };
  Any a3 = a2.type;
  label374: ;
  if( !a3.type == INT_TYPE){ goto label375; };
  label373: ;
