/* Write a program to check if a number is prime. */
#include <stdio.h>
int main(void) {
  int n, prime = 1;
  if (scanf("%d", &n) != 1 || n < 2)
    return 1;
  for (int i = 2; i <= n / i; i++)
    if (n % i == 0) {
      prime = 0;
      break;
    }
  puts(prime ? "Prime" : "Not prime");
  return 0;
}
