/*
 * Name: ex_8.c
 * Purpose: Calculate the remaining balance of a loan after
 *          the first, second, and third monthly payments
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  float amount, interest_rate, monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  float monthly_interest_rate = (1.0f / 100.0f) * interest_rate / 12.0f;

  amount += -monthly_payment + amount * monthly_interest_rate;
  printf("Balance remaining after first payment: $%d\n", amount);

  amount += -monthly_payment + amount * monthly_interest_rate;
  printf("Balance remaining after second payment: $%.2f\n", amount);

  amount += -monthly_payment + amount * monthly_interest_rate;
  printf("Balance remaining after third payment: $%.2f\n", amount);

  return 0;
}