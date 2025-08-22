#include "stdio.h"
#include "stdlib.h"
#include "vector.h"

int main() {
  Vector v;
  vector_init(&v, 2);
  printf("Size: %d\n", v.size);
  printf("Capacity: %d\n", v.capacity);
  for (int i = 0; i < 5; i++) {
    vector_push_back(&v, i);
  }

  for (int i = 0; i < 5; i++) {
    printf("Index %d: %d\n", i, v.vector[i]);
  }
  printf("Size: %d\n", v.size);
  printf("Capacity: %d\n", v.capacity);
}
