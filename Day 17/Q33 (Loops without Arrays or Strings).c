/* Write a program to check if a number is an Armstrong number. */
#include <math.h>
#include <stdio.h>
int main(void) {
  long long n, x, sum = 0;
  int digits = 0;
  if (scanf("%lld", &n) != 1 || n < 0)
    return 1;
  x = n;
  do {
    digits++;
    x /= 10;
  } while (x);
  x = n;
  do {
    sum += (long long)pow(x % 10, digits);
    x /= 10;
  } while (x);
  puts(sum == n ? "Armstrong" : "Not Armstrong");
  return 0;
}
