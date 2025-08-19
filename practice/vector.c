#include "vector.h"
#include "stdlib.h"

void vector_init(Vector *v, int size) {
  v->size = size;
  v->vector = malloc(sizeof(int *) * v->capacity);
  v->capacity = size;
}

void resize(Vector *v) {
  v->capacity = v->capacity * 2;
  v->vector = (int *)realloc(v->vector, sizeof(int *) * v->capacity);
}

void push_back(Vector *v, int a) {
  if (v->size == v->capacity) {
    resize(v);
  }
  v->vector[v->size] = a;
}
