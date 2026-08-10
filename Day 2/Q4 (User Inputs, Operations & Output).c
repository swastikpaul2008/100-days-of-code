/* Write a program to calculate the area and circumference of a circle given its
 * radius. */
#include <stdio.h>
#define PI 3.14159265358979323846
int main(void) {
  double radius;
  if (scanf("%lf", &radius) != 1 || radius < 0) {
    fprintf(stderr, "Invalid radius.\n");
    return 1;
  }
  printf("Area=%.2f, Circumference=%.2f\n", PI * radius * radius,
         2.0 * PI * radius);
  return 0;
}
