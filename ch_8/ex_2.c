/*
 * Name: ex_2.c
 * Purpose: Display occurances of repeated digits in an integer
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

  printf("Digit:\t\t");
  for (int i = 0; i < 10; i++)
    printf("%d ", i);
  printf("\n");

  printf("Occurances:\t");
  for (int i = 0; i < 10; i++)
    printf("%d ", repeated[i]);
  printf("\n");

  return 0;
}