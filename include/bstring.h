//this is titled bstring.h to not conflict with string.h


#include <string.h>

class(string)
char* data;
method_proto(string, int, compare, string* other);
end_class(string)

method_header(string, int, string_open, string* other)
string* string_ctor(char* d){
string* this = new(string);
this->compare = &string_compare;
}
