/*
 * Name: ex_6.c
 * Purpose: Translate readable language into BIFF-speak
 * Author: L. B. Black
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
  int count = 0;
  char message[100] = {'\0'};

  printf("Enter message: ");
  while((message[count] = getchar()) != '\n')
    count++;

  int i = 0;
  char biff_message[100] = {'\0'};
  do {
    if (tolower(message[i]) == 'e')
      biff_message[i] = '3';
    else if (tolower(message[i] == 'i'))
      biff_message[i] = '1';
    else if (tolower(message[i] == 's'))
      biff_message[i] = '5';
    else if (tolower(message[i] == 'o'))
      biff_message[i] = '0';
    else if (tolower(message[i] == 'a'))
      biff_message[i] = '4';
    else if (tolower(message[i] == 'b'))
      biff_message[i] = '8';
    else if (message[i] == '\n')
      ;
    else
      biff_message[i] = toupper(message[i]);
    i++;
  } while(message[i] != '\0');

  int exclamation_count = 0;
  for (; i < 100; i++) {
    if (exclamation_count > 9)
      break;
    biff_message[i] = '!';
    exclamation_count++;
  }

  printf("In BIFF-speak: ");
  for (int j = 0; j < 100; j++) {
    printf("%c", biff_message[j]);
  }
  printf("\n");

  return 0;
}