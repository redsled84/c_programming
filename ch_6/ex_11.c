/*
 * Name: ex_11.c
 * Purpose: Approximate the constant e
 * Author: L. B. Black
 */

#include <stdio.h>

int factorial(int n) {
  int result = 1, i = 1;
  while (i <= n) {
    result *= i;
    i++;
  }
  return result;
}

int main(void) {
  int n, i;
  float e = 0.0f;
  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n > 12)
    n = 12;

  for (i = 0; i <= n; i++) {
    e += 1.0f / factorial(i);
  }

  printf("Euler's number approximation: %f\n", e);

  return 0;
}