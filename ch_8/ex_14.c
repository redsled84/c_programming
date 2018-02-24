/*
 * Name: ex_14.c
 * Purpose: Reverse the order of words in a sentence
 * Author: L. B. Black
 */

#include <stdio.h>

int main(void) {
  char characters[100] = {' '}, c, punctation;
  int count = 1, character_count = 0;
  for (int i = 1; i < 100; i++)
    characters[i] = '\0';


  printf("Enter a sentence: ");
  while((c = getchar()) != '\n') {
    if (c == (int) '!' || c == (int) '.' || c == (int) '?') {
      punctation = c;
      break;
    }
    characters[count] = c;
    count++;
  }

  printf("Reversal of sentence: ");
  for (int i = 99; i >= 0; i--) {
    if (characters[i] != ' ' && characters[i] != '\0') {
      character_count++;
    } else if (characters[i] == ' ') {
      for (int j = i; j <= i + character_count; j++) {
        if (characters[j] != ' ')
          printf("%c", characters[j]);
      }
      
      character_count = 0;
      printf(" ");
    }
  }
  printf("\b%c", punctation);
  printf("\n");

  return 0; 
}