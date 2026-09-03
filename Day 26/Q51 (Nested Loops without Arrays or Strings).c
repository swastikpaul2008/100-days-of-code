/* Write a program to print the following pattern:\n    5\n   45\n  345\n
 * 2345\n12345 */
#include <stdio.h>
int main(void) {
  for (int r = 0; r < 5; r++) {
    for (int s = 0; s < 4 - r; s++)
      putchar(' ');
    for (int n = 4 - r; n <= 5; n++)
      printf("%d", n);
    putchar('\n');
  }
  return 0;
}
