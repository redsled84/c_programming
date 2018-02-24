/*
 * Name: ex_2.c
 * Purpose: Find volume of a sphere with a radius of 10 m
 * Author: L. B. Black
 */

#include <stdio.h>
#define RADIUS 10.0f
#define RADIUS_CUBED RADIUS * RADIUS * RADIUS

int main(void) {
  printf("V = %f\n", (4.0f / 3.0f) * 3.14159f * RADIUS_CUBED);

  return 0;
}