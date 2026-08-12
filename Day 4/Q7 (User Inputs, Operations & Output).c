/* Write a program to swap two numbers without using a third variable. */
#include <stdio.h>
int main(void) {
  double first, second;
  if (scanf("%lf %lf", &first, &second) != 2) {
    fprintf(stderr, "Invalid input.\n");
    return 1;
  }
  first += second;
  second = first - second;
  first -= second;
  printf("After swap: %.15g %.15g\n", first, second);
  return 0;
}
