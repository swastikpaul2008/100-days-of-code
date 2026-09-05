/* Write a program to print all the prime numbers from 1 to n. */
#include <stdio.h>
int main(void) {
  int n, first = 1;
  if (scanf("%d", &n) != 1 || n < 2)
    return 1;
  for (int x = 2; x <= n; x++) {
    int p = 1;
    for (int d = 2; d <= x / d; d++)
      if (x % d == 0)
        p = 0;
    if (p) {
      if (!first)
        putchar(' ');
      printf("%d", x);
      first = 0;
    }
  }
  putchar('\n');
  return 0;
}
