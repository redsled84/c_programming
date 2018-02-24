/*
 * Name: ex_1.c
 * Purpose: Swap the digits of a two-digit number
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a two-digit number: ");
  scanf("%d", &n);

  int tens = n / 10, ones = n % 10;
  printf("The reversal is: %d%d\n", ones, tens);

  return 0;
}