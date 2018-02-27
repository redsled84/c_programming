/*
 * Name: ex_1.c
 * Purpose: Selection sort method
 * Author: L. B. Black
 */

#include <stdio.h>

#define ARRAY_MAX 5

void selection_sort(int a[], int count) {
  if (count >= 0) {
    int max_i = 0;
    for (int i = 0; i <= count; i++) {
      if (a[max_i] < a[i])
        max_i = i;
    }

    int temp = a[count];
    a[count] = a[max_i];
    a[max_i] = temp;

    count--;
    selection_sort(a, count);
  }
}

int main(void) {
  int a[ARRAY_MAX] = {0};
  printf("Enter %d integers: ", ARRAY_MAX);
  int i = 0;
  while (i < ARRAY_MAX && (scanf("%d", &a[i])) == 1) { i++; }

  printf("Before sort: ");
  for (i = 0; i < ARRAY_MAX; i++)
    printf("%d ", a[i]);
  printf("\n");

  int count = ARRAY_MAX - 1;
  selection_sort(a, count);

  printf("After sort: ");
  for (int i = 0; i < ARRAY_MAX; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}