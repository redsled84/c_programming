/*
 * Name: ex_8.c
 * Purpose: Simulate a game of craps
 * Author: L. B. Black
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
  srand(time(NULL));
  int n_wins = 0, n_loses = 0;
  bool won = false;
  char play_again = 'y';

  while(play_again == 'y') {
    // play_again = '\0';
    bool won = play_game();
    if (won) {
      n_wins++;
      printf("You won!\n");
    } else {
      n_loses++;
      printf("You lose!\n");
    }

    printf("Play again? ");
    // need a space to discard the newline character in the input buffer
    scanf(" %c", &play_again);
    printf("\n");
  }

  printf("\n");
  printf("Wins: %d Lose: %d\n", n_wins, n_loses);

  return 0;
}

int roll_dice(void) {
  return rand() % 5 + 1 + rand() % 5 + 1;
}

bool play_game(void) {
  // First roll
  int point = roll_dice(), roll = 1;
  printf("You rolled: %d\n", point);

  if (point == 7 || point == 11)
    return true;
  else if (point == 2 || point == 3 || point == 12)
    return false;

  printf("Your point is %d\n", point);

  do {
    roll = roll_dice();
    printf("You rolled: %d\n", roll);
  } while (roll != 7 && roll != point);

  return roll == point;
}