/*
 * Name: ex_4.c
 * Purpose: Reads an integer and outputs the corresponding octal value
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &n);

  printf("In octal, your number is: %.5o\n", n);

  return 0;
}