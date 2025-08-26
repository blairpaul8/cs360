#include "stdio.h"
#include "stdlib.h"

int main() {
  char *ptr = "hello";
  char arr[] = "world";

  printf("%p %p\n", ptr, arr);
}
