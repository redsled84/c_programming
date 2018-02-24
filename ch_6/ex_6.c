/*
 * Name: ex_6.c
 * Purpose: Output every other square between 1 and n
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n, square, odd = 3, i = 1;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (square = 1; odd + square < n; odd += 2) {
    if (i % 2 == 0)
      printf("%d\n", square);
    square += odd;
    i++;
  }
  printf("%d\n", n);

  return 0;
}