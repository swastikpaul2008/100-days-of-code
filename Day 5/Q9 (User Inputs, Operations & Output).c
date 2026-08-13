/* Write a program to calculate simple and compound interest for given
 * principal, rate, and time. */
#include <math.h>
#include <stdio.h>
int main(void) {
  double principal, rate, time;
  if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3 || principal < 0 ||
      rate < 0 || time < 0) {
    fprintf(stderr, "Principal, rate, and time must be non-negative.\n");
    return 1;
  }
  printf("Simple Interest=%.2f, Compound Interest=%.2f\n",
         principal * rate * time / 100.0,
         principal * pow(1.0 + rate / 100.0, time) - principal);
  return 0;
}
