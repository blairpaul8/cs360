#ifndef LCD_H
#define LCD_H

typedef struct {
  int *vector;
  int size;
  int capacity;
} Vector;

void vector_init(Vector *v, int size);
void push_back(Vector *v, int a);
void resize(Vector *v);

#endif // !LCD_H
