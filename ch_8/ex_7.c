/*
 * Name: ex_7.c
 * Purpose: Read a 5 x 5 array of integers and output row sums & column sums
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int a[5][5] = {{0}};

  int i, j, row_total = 0, column_total = 0;
  for (j = 0; j < 5; j++) {
    printf("Enter row %d: ", j+1);
    scanf("%d%d%d%d%d", &a[j][0], &a[j][1], &a[j][2], &a[j][3], &a[j][4]);
  }
  printf("\n");

  printf("Row totals: \t");
  for (j = 0; j < 5; j++) {
    for (i = 0; i < 5; i++)
      row_total += a[j][i];
    printf("%d ", row_total);
    row_total = 0;
  }
  printf("\n");

  printf("Column totals: \t");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++)
      column_total += a[j][i];
    printf("%d ", column_total);
    column_total = 0;
  }
  printf("\n");

  return 0;
}