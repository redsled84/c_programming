/*
 * Name: ex_3.c
 * Purpose: Reduce a fraction to its most simplified form
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int i1, i2, remainder, j1, j2;

  printf("Enter a fraction: ");
  scanf("%d/%d", &i1, &i2);

  j1 = i1;
  j2 = i2;

  // i2 becomes the GDC
  while(i1 > 0) {
    remainder = i2 % i1;
    i2 = i1;
    i1 = remainder;
  }

  printf("In lowest terms: %d/%d\n", j1 / i2, j2 / i2);

  return 0;
}