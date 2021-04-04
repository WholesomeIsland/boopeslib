#include "../boopes/boopes.h"
#include <stdio.h>

class(File)
FILE* inner;
method_proto(File, void, open, char* filename, char* mode);
method_proto(File, char*, readAllText)
class_end(File)

method_header(File, void, file_open, char* filename, char* mode)
method_header(File, void, file_readAllText)

File* file_ctor(){
FIle* this = new(File);
this->open = &file_open;
this->readAllText = &file_readAllText;
}
