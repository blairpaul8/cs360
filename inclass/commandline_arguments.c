#include "stdio.h"

int main(int argc, char *argv[]) {
  int a;
  int b;
  int c;
  if (argc < 4) {
    printf("Usage: ./main <a> <b> <c>\n");
    return 1;
  }

  if (sscanf(argv[1], "%d", &a) != 1) {
    printf("Invalid value for a\n");
    return 2;
  }
  if (sscanf(argv[2], "%d", &b) != 1) {
    printf("Invalid value for b\n");
    return 3;
  }
  if (sscanf(argv[3], "%d", &c) != 1) {
    printf("Invalid value for c\n");
    return 4;
  }

  double result = (double)a * b / c;
  printf("Result = %.3lf\n", result);

  return 0;
}
