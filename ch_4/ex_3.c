/*
 * Name: ex_3.c
 * Purpose: Reverses order of three-digit number w/o arithmetic
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n1, n2, n3;
  
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &n1, &n2, &n3);
  printf("The reversal is: %1d%1d%1d\n", n3, n2, n1);

  return 0;
}