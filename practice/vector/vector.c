#include "vector.h"
#include "stdlib.h"

void vector_init(Vector *v, int capacity) {
  v->size = 0;
  v->capacity = capacity;
  v->vector = malloc(sizeof(int *) * v->capacity);
}

void vector_resize(Vector *v) {
  v->capacity = v->capacity * 2;
  v->vector = (int *)realloc(v->vector, sizeof(int *) * v->capacity);
}

void vector_push_back(Vector *v, int a) {
  if (v->size == v->capacity) {
    vector_resize(v);
  }
  v->vector[v->size] = a;
  v->size++;
}
