/* Write a program to check if a number is a palindrome. */
#include <stdio.h>
int main(void) {
  long long n, x, r = 0;
  if (scanf("%lld", &n) != 1 || n < 0)
    return 1;
  x = n;
  do {
    r = r * 10 + x % 10;
    x /= 10;
  } while (x);
  puts(r == n ? "Palindrome" : "Not palindrome");
  return 0;
}
