/*
 * Name: ex_2.c
 * Purpose: Display a 24-hour time in the 12-hour format
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int hour, minute;

  printf("Enter a 24-hour time [hh:mm]: ");
  scanf("%2d:%2d", &hour, &minute);

  printf("Equivalent 12-hour time: ");
  if (hour > 12 && hour < 24)
    printf("%.2d:%.2d PM\n", hour - 12, minute);
  else if (hour > 0 && hour < 12)
    printf("%.2d:%.2d AM\n", hour, minute);
  else if (hour == 12)
    printf("12:%.2d PM\n", minute);
  else if (hour == 0)
    printf("12:%.2d AM\n", minute);

  return 0;
}