/*
 * Name: ex_1.c
 * Purpose: Outputs which digits in an integer are repeated
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  // count number of digits
  int count = 0, j;
  j = n;
  while (j > 0) {
    j /= 10;
    ++count;
  }

  // increment value at index digit
  int repeated[10] = {0}, digit;
  while (n > 0) {
    digit = n % 10;
    n /= 10;
    repeated[digit]++;
  }

  printf("Repeated digit(s): ");
  for (int i = 0; i < 10; i++) {
    if (repeated[i] > 1)
      printf("%d ", i);
  }
  printf("\n");

  return 0;
}