/* Write a program to print the following pattern:\n1\n12\n123\n1234\n12345 */
#include <stdio.h>
int main(void) {
  for (int r = 1; r <= 5; r++) {
    for (int c = 1; c <= r; c++)
      printf("%d", c);
    putchar('\n');
  }
  return 0;
}
