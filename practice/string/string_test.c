#include "my_string.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
  String a;
  String_init(&a, "Hello");

  printf("%s", a.string);
}
