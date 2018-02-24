/*
 * Name: ex_3.c
 * Purpose: Find the volume of a sphere with a variable radius
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  float radius;

  printf("Enter radius of sphere: ");
  scanf("%f", &radius);

  float radius_cubed = radius * radius * radius;
  printf("V = %f\n", (4.0f / 3.0f) * 3.14159f * radius_cubed);

  return 0;
}