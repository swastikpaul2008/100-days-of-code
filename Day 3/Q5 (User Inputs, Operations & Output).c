/* Write a program to convert temperature from Celsius to Fahrenheit. */
#include <stdio.h>
int main(void) {
  double celsius;
  if (scanf("%lf", &celsius) != 1) {
    fprintf(stderr, "Invalid temperature.\n");
    return 1;
  }
  printf("Fahrenheit=%.2f\n", celsius * 9.0 / 5.0 + 32.0);
  return 0;
}
