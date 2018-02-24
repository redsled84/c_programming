/*
 * Name: ex_14.c
 * Purpose: Print last name first then first letter of first name
 * Author: L. B. Black
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  printf("Enter a first and last name: ");

  char first_initial;
  char last_name[20] = {'\0'};
  char c;
  int count = 0;
  int get_last_name = 0;

  while((c = getchar()) != '\n') {
    if (count == 0)
      first_initial = c;
    if (get_last_name)
      last_name[count] = c;
    if (c == 32) {
      get_last_name = 1;
      count = 0;
    }

    count++;
  }

  for (int i = 0; i < 20; i++) {
    printf("%c", last_name[i]);
  }

  printf(", %c.\n", first_initial);

  return 0;
}