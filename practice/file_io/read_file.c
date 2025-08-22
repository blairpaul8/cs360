#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fptr = NULL;
  fptr = fopen("input.txt", "r");

  if (fptr == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  char line[1000];
  int line_count = 0;

  while (fgets(line, 1000, fptr) != NULL) {
    printf("Line %d: %s", line_count, line);
    line_count++;
  }

  return 0;
}
