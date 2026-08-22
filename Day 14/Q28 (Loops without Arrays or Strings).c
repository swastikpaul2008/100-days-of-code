/* Write a program to print the product of even numbers from 1 to n. */
#include <stdio.h>
int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n < 1)
    return 1;
  unsigned long long p = 1;
  for (int i = 2; i <= n; i += 2)
    p *= (unsigned)i;
  printf("%llu\n", p);
  return 0;
}
