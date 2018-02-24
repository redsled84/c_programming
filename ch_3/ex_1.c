/*
 * Name: ex_1.c
 * Purpose: Read date from user as mm/dd/yyyy and output it in the format of yyyymmdd
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  printf("Enter a date: ");
  int day, month, year;

  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

  return 0;
}