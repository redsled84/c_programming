/*
 * Name: size_of_LL.c
 * Purpose: Output amount of bytes a long long type takes up
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  unsigned long i = 0;
  printf("A long has %lu bytes\n", (unsigned long) sizeof(i));

  return 0;
}