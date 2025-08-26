#ifndef MY_STRING_H
#define MY_STRING_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char *string;
  size_t size;
  size_t capacity;
} String;

void String_init(String *str, const char *a);
void String_length();

#endif // !MY_STRING_H
