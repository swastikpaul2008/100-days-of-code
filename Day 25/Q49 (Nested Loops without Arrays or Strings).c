/* Write a program to print the following pattern:\n5\n45\n345\n2345\n12345 */
#include <stdio.h>
int main(void) {
  for (int start = 5; start >= 1; start--) {
    for (int n = start; n <= 5; n++)
      printf("%d", n);
    putchar('\n');
  }
  return 0;
}
