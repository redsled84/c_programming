/*
 * Name: ex_5.c
 * Purpose: Determine income tax
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  float income, income_tax;

  printf("Enter an amount of taxable income: ");
  scanf("%f", &income);

  if (income < 750.0f)
    income_tax = income * 0.01f;
  else if (income >= 750.0f && income < 2250.0f)
    income_tax = 7.5f + income * 0.02f;
  else if (income >= 2250.0f && income < 3750.0f)
    income_tax = 37.5f + income * 0.03f;
  else if (income >= 3750.0f && income < 5250.0f)
    income_tax = 82.5f + income * 0.04f;
  else if (income >= 5250.0f && income < 7000.0f)
    income_tax = 142.5f + income * 0.05f;
  else if (income >= 7000.0f)
    income_tax = 230.0f + income * 0.06f;

  printf("Tax amount due: %.2f\n", income_tax);

  return 0;
}