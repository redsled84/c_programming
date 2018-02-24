/*
 * Name: ex_4.c
 * Purpose: Prompts for user to enter dollar amount and applies 5% tax
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  printf("Enter an amount: ");
  float amount;
  scanf("%f", &amount);
  printf("With tax added: $%.2f\n", amount + amount * 0.05f);

  return 0;
}