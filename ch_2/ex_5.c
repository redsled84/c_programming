/*
 * Name: ex_5.c
 * Purpose: Prompt user to enter a value for `x` and compute a polynomial
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int x;
  printf("x = ");
  scanf("%d", &x);

  int x2 = x * x;
  int x3 = x * x * x;
  int x4 = x * x * x * x;
  int x5 = x * x * x * x * x;

  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = ");
  printf("%d\n", 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6);

  return 0;
}