/*
 * Name: ex_16.c
 * Purpose: Determine if two-words are anagrams
 * Author: L. B. Black
 */

#include <stdio.h>

int is_lower(char c) {
  return 'a' <= c && c <= 'z';
}

int alphabet_pos(char c) {
  int pos = is_lower(c) ? c - 'a' : c - 'A';
  return pos;
}

int main(void) {
  int first_letter_occurances[26] = {0};
  int second_letter_occurances[26] = {0};

  int i = 0, j = 0;
  char first_word[20] = {'\0'};
  char second_word[20] = {'\0'};

  printf("Enter first word: ");
  while((first_word[i] = getchar()) != '\n')
    ++i;
  printf("Enter second word: ");
  while((second_word[j] = getchar()) != '\n')
    ++j;

  for (i = 0; i < 20; i++) {
    if (first_word[i] != '\n' || first_word[i] != '\0')
      first_letter_occurances[alphabet_pos(first_word[i])]++;
    if (second_word[i] != '\n' || second_word[i] != '\0')
      second_letter_occurances[alphabet_pos(second_word[i])]++;
  }

  int anagram = 1;
  for (i = 0; i < 26; i++)
    if (first_letter_occurances[i] != second_letter_occurances[i])
      anagram = 0;

  if (anagram)
    printf("The words are anagrams.\n");
  else
    printf("The words are not anagrams.\n");
}