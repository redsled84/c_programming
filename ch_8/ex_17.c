/*
 * Name: ex_17.c
 * Purpose: Generate a N x N magic square
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int n;
  printf("This program creates a magic sqaure of a specified size\n");
  printf("The size must be an odd number between 1 and 99\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  int magic[99][99] = {{0}};
  int x = (n / 2), y = 0, jy = 0;
  int count = 1, max = n * n;

  while(count <= max) {
    if (magic[y][x] == 0) {
      magic[y][x] = count;
    } else {
      // add two since we subtract one below
      y += 2;
      y %= n;
      // go back one row since we added one below
      x--;
      x = x % n < 0 ? 5 + x % n : x % n;
      magic[y][x] = count;
    }

    count++;

    x++;
    y--;

    y = y % n < 0 ? 5 + y % n : y % n;
    x = x % n;
  }

  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n; i++)
      printf("%5d", magic[j][i]);
    printf("\n");
  }

  return 0;
}