/*
 * Name: length.c
 * Purpose: Count amount of characters a user enters
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  int count = 0;

  printf("Enter some text bro: ");
  while(getchar() != '\n')
    count++;
  printf("Willy nilly! You typed %d characters!\n", count);

  return 0;
}