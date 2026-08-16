/* Write a program to input three numbers and find the largest among them using
 * if–else. */
#include <stdio.h>
int main(void) {
  int a, b, c, largest;
  if (scanf("%d%d%d", &a, &b, &c) != 3) {
    return 1;
  }
  largest = a;
  if (b > largest) {
    largest = b;
  }
  if (c > largest) {
    largest = c;
  }
  printf("Largest is %d\n", largest);
  return 0;
}
