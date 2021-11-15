#include "../../include/bstring.h"
#include <string.h>
method_def(string, int, compare, string* other) {
	return strcmp(this->data, other->data);	
}
