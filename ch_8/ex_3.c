/*
 * Name: ex_3.c
 * Purpose: Continually prompt user for integers to display repeated digits
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n = 1;
  while (n != 0) {
    printf("Enter a number: ");
    scanf("%d", &n);

    // count number of digits
    int count = 0, j;
    j = n;
    while (j > 0) {
      j /= 10;
      ++count;
    }
    j = n;

    // increment value at index digit
    int repeated[10] = {0}, digit;
    while (n > 0) {
      digit = n % 10;
      n /= 10;
      repeated[digit]++;
    }
    n = j;

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
      if (repeated[i] > 1)
        printf("%d ", i);
    }
    printf("\n");
  }

  return 0;
}