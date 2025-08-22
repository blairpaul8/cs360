#include <endian.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void replace_newline(char *a) {
  size_t len = strlen(a);
  if (len > 0 && a[len - 1] == '\n') {
    a[len - 1] = '\0';
  }
}

int main(int argc, char *argv[]) {
  char name[1000];
  char streetNum[1000];
  char streetName[1000];

  printf("Enter your name: ");
  if (fgets(name, 1000, stdin) == NULL) {
    printf("Error reading name\n");
    return 1;
  }

  printf("Enter your house number: ");
  if (fgets(streetName, 1000, stdin) == NULL) {
    printf("Error reading street name\n");
    return 1;
  }

  printf("Enter your street name: ");
  if (fgets(streetNum, 1000, stdin) == NULL) {
    printf("Error reading street num\n");
    return 1;
  }

  replace_newline(name);
  replace_newline(streetName);
  replace_newline(streetNum);

  printf("Hi %s you live on %s %s\n", name, streetNum, streetName);

  return 0;
}
