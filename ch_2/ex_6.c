/*
 * Name: ex_6.c
 * Purpose: Prompt user for input and compute a polynomial using Horner's Rule
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int x;
  printf("x = ");
  scanf("%d", &x);

  printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 = ");
  printf("%d\n", ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

  return 0;
}