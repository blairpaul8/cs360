#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fptr = NULL;
  fptr = fopen("input.txt", "r");

  if (fptr == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  char line[256];
  int line_count = 1;

  while (fgets(line, 256, fptr) != NULL) {
    printf("Line %d: %s", line_count, line);
    line_count++;
  }

  return 0;
}
