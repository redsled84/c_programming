/*
 * Name: ex_7.c
 * Purpose: Prompt user for dollar amount and find minimum amount of different bills
 *          required to make up the sum of said inputted integer
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  printf("Enter a dollar amount: ");
  int amount;
  scanf("%d", &amount);

  int n_twenties = amount / 20;
  amount -= n_twenties * 20;

  int n_tens = amount / 10;
  amount -= n_tens * 10;

  int n_fives = amount / 5;
  amount -= n_fives * 5;
  
  int n_ones = amount;

  printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",
    n_twenties, n_tens, n_fives, n_ones); 
  return 0;
}