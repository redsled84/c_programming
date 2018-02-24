/*
 * Name: ex_5.c
 * Purpose: Reverse the order of a n-digit integer
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("The reversal is: ");
  while (n > 0) {
    printf("%d", n % 10);
    n /= 10;
  }
  printf("\n");

  return 0;
}