/* Write a program to print numbers from 1 to n. */
#include <stdio.h>
int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n < 1)
    return 1;
  for (int i = 1; i <= n; i++)
    printf("%d%c", i, i == n ? '\n' : ' ');
  return 0;
}
