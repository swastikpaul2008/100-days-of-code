/* Write a program to print the following
 * pattern:\n*\n***\n*****\n*******\n*********\n*******\n*****\n***\n* */
#include <stdio.h>
int main(void) {
  for (int r = 1; r <= 9; r++) {
    int width = r <= 5 ? 2 * r - 1 : 19 - 2 * r;
    for (int c = 0; c < width; c++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
