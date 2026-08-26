/* Write a program to print all factors of a given number. */
#include <stdio.h>
int main(void) {
  int n, first = 1;
  if (scanf("%d", &n) != 1 || n < 1)
    return 1;
  for (int i = 1; i <= n; i++)
    if (n % i == 0) {
      if (!first)
        putchar(' ');
      printf("%d", i);
      first = 0;
    }
  putchar('\n');
  return 0;
}
