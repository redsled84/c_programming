/*
 * Name: ex_1.c
 * Purpose: Ask for user input until 0 or negative number is entered
 *          and find largest nonnegative number
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  float max = 0.0f, n = 1.0f;

  while (n > 0.0f) {
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n > max)
      max = n;
  }

  printf("The largest number entered was %f\n", max);

  return 0;
}