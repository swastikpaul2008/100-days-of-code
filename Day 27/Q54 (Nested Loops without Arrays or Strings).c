/* Write a program to print the following pattern:\n\n   *\n  ***\n
 * *****\n*******\n *****\n  ***\n   *\n */
#include <stdio.h>
int main(void) {
  for (int r = 0; r < 7; r++) {
    int d = r < 4 ? r : 6 - r;
    for (int s = 0; s < 3 - d; s++)
      putchar(' ');
    for (int c = 0; c < 2 * d + 1; c++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
