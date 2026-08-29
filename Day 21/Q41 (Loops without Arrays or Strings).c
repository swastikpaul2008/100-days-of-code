/* Write a program to swap the first and last digit of a number. */
#include <stdio.h>
int main(void) {
  long long n, p = 1, x, last, first;
  if (scanf("%lld", &n) != 1 || n < 0)
    return 1;
  if (n < 10) {
    printf("%lld\n", n);
    return 0;
  }
  x = n;
  last = x % 10;
  while (x >= 10) {
    x /= 10;
    p *= 10;
  }
  first = x;
  printf("%lld\n", n - first * p - last + last * p + first);
  return 0;
}
