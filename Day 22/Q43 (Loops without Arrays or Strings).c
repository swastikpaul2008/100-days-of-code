/* Write a program to check if a number is a strong number. */
#include <stdio.h>
int main(void) {
  int n, x, sum = 0;
  if (scanf("%d", &n) != 1 || n < 0)
    return 1;
  x = n;
  do {
    int d = x % 10, f = 1;
    for (int i = 2; i <= d; i++)
      f *= i;
    sum += f;
    x /= 10;
  } while (x);
  puts(sum == n ? "Strong number" : "Not strong number");
  return 0;
}
