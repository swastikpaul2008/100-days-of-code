/* Write a program to check if a number is a perfect number. */
#include <stdio.h>
int main(void) {
  int n, sum = 1;
  if (scanf("%d", &n) != 1 || n < 1)
    return 1;
  if (n == 1)
    sum = 0;
  for (int i = 2; i <= n / i; i++)
    if (n % i == 0) {
      sum += i;
      if (i != n / i)
        sum += n / i;
    }
  puts(sum == n ? "Perfect number" : "Not perfect number");
  return 0;
}
