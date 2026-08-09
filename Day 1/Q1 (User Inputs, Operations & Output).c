/*
 * Write a program to input two numbers and display their sum.
 */
#include <stdio.h>

int main(void) {
  double first;
  double second;

  if (scanf("%lf %lf", &first, &second) != 2) {
    fprintf(stderr, "Invalid input. Enter two numbers.\n");
    return 1;
  }

  printf("Sum = %.15g\n", first + second);
  return 0;
}
