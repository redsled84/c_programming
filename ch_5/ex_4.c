/*
 * Name: ex_4.c
 * Purpose: Determine wind force based off wind speed (knots)
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int wind_speed;
  printf("Enter wind speed (in knots): ");
  scanf("%d", &wind_speed);

  printf("Description of wind force: ");
  if (wind_speed < 1)
    printf("Calm\n");
  else if (wind_speed >= 1 && wind_speed <= 3)
    printf("Light air\n");
  else if (wind_speed >= 4 && wind_speed <= 27)
    printf("Breeze\n");
  else if (wind_speed >= 28 && wind_speed <= 47)
    printf("Gale\n");
  else if (wind_speed >= 48 && wind_speed <= 63)
    printf("Storm\n");
  else if (wind_speed > 63)
    printf("Hurricane\n");

  return 0;
}