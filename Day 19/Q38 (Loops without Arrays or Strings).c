/* Write a program to find the sum of digits of a number. */
#include <stdio.h>
int main(void) {
  long long n, sum = 0;
  if (scanf("%lld", &n) != 1)
    return 1;
  if (n < 0)
    n = -n;
  do {
    sum += n % 10;
    n /= 10;
  } while (n);
  printf("%lld\n", sum);
  return 0;
}
