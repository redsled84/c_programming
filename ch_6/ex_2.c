/*
 * Name: ex_2.c
 * Purpose: Find the greatest common divisor from two integers
 *          using Euclid's algorithm
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int i1, i2, remainder;

  printf("Enter two integers: ");
  scanf("%d%d", &i1, &i2);

  // i2 becomes the GDC
  while (i1 > 0) {
    remainder = i2 % i1;
    i2 = i1;
    i1 = r;
  }

  printf("The GCD is: %d\n", i2);

  return 0;
}