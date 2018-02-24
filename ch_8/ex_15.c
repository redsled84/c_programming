/*
 * Name: ex_15.c
 * Purpose: Use Caesar cipher to encrypt a message
 * Author: L. B. Black
 */

#include <stdio.h>

int is_lower(char c) {
  return 'a' <= c && c <= 'z';
}

int main(void) {
  int count = 0, shift = 0;
  char message[100] = {'\0'};
  printf("Enter a message to be encrypted: ");

  while((message[count] = getchar()) != '\n')
    count++;

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");
  for (int i = 0; i < 100; i++) {
    if(message[i] == '\0')
      break;

    if (message[i] != ' ' && message[i] != '.' && message[i] != '!'
    && message[i] != '?' && message[i] != ',' && message[i] != '\n') {
      char shifted_character = is_lower(message[i])
        ? ((message[i] - 'a') + shift) % 26 + 'a'
        : ((message[i] - 'A') + shift) % 26 + 'A';
      printf("%c", shifted_character);
    } else {
      printf("%c", message[i]);
    }
  }
  printf("\n");

  return 0;
}