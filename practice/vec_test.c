#include "stdio.h"
#include "stdlib.h"
#include "vector.h"

int main() {
  Vector v;
  vector_init(&v, 5);
  for (int i = 0; i < 5; i++) {
    v.vector[i] = i;
  }

  for (int i = 0; i < 5; i++) {
    printf("Index %d: %d", i, v.vector[i]);
  }
}
