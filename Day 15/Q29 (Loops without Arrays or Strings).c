/* Write a program to calculate the factorial of a number. */
#include <stdio.h>
int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n < 0 || n > 20)
    return 1;
  unsigned long long f = 1;
  for (int i = 2; i <= n; i++)
    f *= (unsigned)i;
  printf("%llu\n", f);
  return 0;
}
