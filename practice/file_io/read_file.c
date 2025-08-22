#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fptr = NULL;
  fptr = fopen("input.txt", "r");

  if (fptr == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  char *line = NULL;
  size_t buffsize = 0;
  ssize_t read;
  int line_count = 0;

  while ((read = getline(&line, &buffsize, fptr)) != EOF) {
    printf("Line %d: %s\n", line_count, line);
    buffsize = 0;
    line_count++;
  }

  return 0;
}
