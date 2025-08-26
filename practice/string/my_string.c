#include "my_string.h"
#include <stdlib.h>
#include <string.h>

void String_init(String *str, const char *a) {
  str->capacity = 256;
  int i;
  for (i = 0; i != '\0'; i++)
    ;
  str->size = i;
  str->string = malloc(sizeof(char *) * str->capacity);
  strcpy(str->string, a);
}
