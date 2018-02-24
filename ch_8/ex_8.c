/*
 * Name: ex_8.c
 * Purpose: Prompts for five students latest five quiz scores, calculates total score
 *          and average score for each student; average, highest score, lowest score
 *          for each quiz
 * Author: L. B. Black
 */

#include <stdio.h>

typedef float Score;

void print_five_values(Score scores[]) {
  for (int i = 0; i < 5; i++)
    printf("%.1f ", scores[i]);
  printf("\n");
}

int main(void) {
  Score a[5][5] = {{0}};
  int i, j;
  for (j = 0; j < 5; j++) {
    printf("Enter student %d's five latest quiz scores: ", j+1);
    scanf("%f%f%f%f%f", &a[j][0], &a[j][1], &a[j][2], &a[j][3], &a[j][4]);
  }
  printf("\n");

  Score totals[5] = {0}, averages[5] = {0},
    average_quizzes[5] = {0}, highest_quizzes[5] = {0}, lowest_quizzes[5] = {0};

  for (j = 0; j < 5; j++) {
    Score total = 0.0f;
    for (i = 0; i < 5; i++)
      total += a[j][i];
    totals[j] = total;
    averages[j] = total / 5.0f;
  }

  for (i = 0; i < 5; i++) {
    Score total_quiz = 0.0f, highest_quiz = 0.0f, lowest_quiz = 100.0f;
    for (j = 0; j < 5; j++) {
      total_quiz += a[j][i];
      highest_quiz = a[j][i] > highest_quiz ? a[j][i] : highest_quiz;
      lowest_quiz = a[j][i] < lowest_quiz ? a[j][i] : lowest_quiz;
    }

    average_quizzes[i] = total_quiz / 5.0f;
    highest_quizzes[i] = highest_quiz;
    lowest_quizzes[i] = lowest_quiz;
  }
  printf("\n");

  printf("Total scores for each student:\t\t");
  print_five_values(totals);
  printf("Average scores for each student:\t");
  print_five_values(averages);
  printf("Average quiz scores for each quiz:\t");
  print_five_values(average_quizzes);
  printf("Highest quiz score for each quiz:\t");
  print_five_values(highest_quizzes);
  printf("Lowest quiz scores for each quiz:\t");
  print_five_values(lowest_quizzes);

  return 0;
}