/*
 * Name: ex_6.c
 * Purpose: Calculate the check digit of an EAN
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, z,
    first_sum, second_sum, total, check_digit;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
    &j1, &j2, &j3, &j4, &j5, &z);

  first_sum = i1 + i3 + i5 + j2 + j4 + z;
  second_sum = d + i2 + i4 + j1 + j3 + j5;

  total = 3 * first_sum + second_sum - 1;
  check_digit = 9 - total % 10;

  printf("Check digit: %d\n", check_digit);

  return 0;
}
