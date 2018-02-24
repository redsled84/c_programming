/*
 * Name: ex_3.c
 * Purpose: Breaks down an ISBN from a published book
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int gsi, group_id, p_code, item, check_digit;

  printf("Enter an ISBN: ");
  scanf("%3d-%d-%3d-%5d-%d", &gsi, &group_id, &p_code, &item, &check_digit);

  printf("GSI Prefix: %d\n", gsi);
  printf("Group identifier: %d\n", group_id);
  printf("Publisher code: %d\n", p_code);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check_digit);
}