/*
 * Name: ex_2.c
 * Purpose: Reverse the order of a three-digit number
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a three-digit: ");
  scanf("%d", &n);

  int first_two_digits = n / 10;
  int hundreds = first_two_digits / 10;
  int tens = first_two_digits % 10;
  int ones = n % 10;

  printf("The reversal is: %d%d%d\n", ones, tens, hundreds);

  return 0;
}