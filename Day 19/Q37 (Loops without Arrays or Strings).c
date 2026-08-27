/* Write a program to find the LCM of two numbers. */
#include <stdio.h>
int main(void) {
  long long a, b, x, y, t;
  if (scanf("%lld%lld", &a, &b) != 2 || a == 0 || b == 0)
    return 1;
  x = a < 0 ? -a : a;
  y = b < 0 ? -b : b;
  long long p = x, q = y;
  while (q) {
    t = p % q;
    p = q;
    q = t;
  }
  printf("%lld\n", x / p * y);
  return 0;
}
