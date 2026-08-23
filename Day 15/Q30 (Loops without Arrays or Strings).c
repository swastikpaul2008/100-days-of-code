/* Write a program to reverse a given number. */
#include <stdio.h>
int main(void) {
  long long n, r = 0;
  if (scanf("%lld", &n) != 1)
    return 1;
  long long sign = n < 0 ? -1 : 1;
  if (n < 0)
    n = -n;
  do {
    r = r * 10 + n % 10;
    n /= 10;
  } while (n);
  printf("%lld\n", sign * r);
  return 0;
}
