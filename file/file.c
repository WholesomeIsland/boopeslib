#include "../include/file.h"

method_def(File, void, open, char* filename, char* mode){
this->inner = fopen(filename, mode);
}

method_def(File, char*, readAllText){
fseek(this->inner, 0, SEEK_END);
int cpos = ftell(this->inner);
fseek(this->inner, 0, SEEK_SET);
char* retval = malloc(cpos);
fread(retval, 1, cpos, this->inner);
return retval;
}
