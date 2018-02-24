/*
 * Name: ex_3.c
 * Purpose: Compute a rival broker and broker's commission
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n_shares;
  float price_per_share, value, commission, rival_commission;

  printf("Enter number of shares bought: ");
  scanf("%d", &n_shares);
  printf("Enter price per share: ");
  scanf("%f", &price_per_share);

  value = n_shares * price_per_share;

  // Original broker's commission
  if (value < 2500.00f)
    commission = 30.00f + 0.017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + 0.0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + 0.0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + 0.0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + 0.0011f * value;
  else
    commission = 255.00f + 0.0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  // Rival broker's commission
  if (n_shares < 2000)
    rival_commission = 33.00f + 0.03f * n_shares;
  else
    rival_commission = 33.00f + 0.02f * n_shares;

  printf("Original broker's commission: $%.2f\n", commission);
  printf("Rival broker's commission: $%.2f\n", rival_commission);

  return 0;
}