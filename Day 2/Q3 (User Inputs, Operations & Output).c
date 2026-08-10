/* Write a program to calculate the area and perimeter of a rectangle given its
 * length and breadth. */
#include <stdio.h>
int main(void) {
  double length, breadth;
  if (scanf("%lf %lf", &length, &breadth) != 2 || length < 0 || breadth < 0) {
    fprintf(stderr, "Invalid dimensions.\n");
    return 1;
  }
  printf("Area=%.2f, Perimeter=%.2f\n", length * breadth,
         2.0 * (length + breadth));
  return 0;
}
