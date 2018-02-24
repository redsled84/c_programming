/*
 * Name: ex_9.c
 * Purpose: Walk randomly along a 10 x 10 array and attempt to place
 *          each letter of the alpabet
 * Author: L. B. Black
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  char a[10][10];
  char letters[26] = {'\0'};
  int count = 0;
  for (char letter = 'A'; letter <= 'Z'; letter++) {
    letters[count] = letter;
    count++;
  }

  for (int j = 0; j < 10; j++)
    for (int i = 0; i < 10; i++)
      a[j][i] = '.';

  count = 1;
  int x = 0, y = 0;
  a[0][0] = letters[0];
  do {
    // get random direction (0, 1, 2, 3) = (North, East, South, West)
    unsigned int direction = (unsigned) rand() % 4;

    // terminate if x, y are surrounded only by letters
    int left_most, right_most, top_most, bottom_most;
    left_most = x - 1 >= 0 ? x - 1 : 0;
    right_most = x + 1 < 10 ? x + 1 : 9;
    top_most = y - 1 >= 0 ? y - 1 : 0;
    bottom_most = y + 1 < 10 ? y + 1 : 9;
    if (a[y][left_most] != '.' && a[y][right_most] != '.'
    && a[top_most][x] != '.' && a[bottom_most][x] != '.') {
      break;
    }

    switch (direction) {
      case 0:
        if (y - 1 >= 0 && a[y-1][x] == '.') {
          y--;
          a[y][x] = letters[count];
          count++;
          break;
        }
      case 1:
        if (x + 1 < 10 && a[y][x+1] == '.') {
          x++;
          a[y][x] = letters[count];
          count++;
          break;
        }
      case 2:
        if (y + 1 < 10 && a[y+1][x] == '.') {
          y++;
          a[y][x] = letters[count];
          count++;
          break;
        }
      case 3:
        if (x - 1 >= 0 && a[y][x-1] == '.') {
          x--;
          a[y][x] = letters[count];
          count++;
          break;
        }
      default:;
    }
  } while (count < 26);

  for (int j = 0; j < 10; j++) {
    for (int i = 0; i < 10; i++)
      printf("%c ", a[j][i]);
    printf("\n");
  }

  return 0;
}