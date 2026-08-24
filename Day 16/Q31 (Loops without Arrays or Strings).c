/* Write a program to take a number as input and print its equivalent binary
 * representation. */
#include <stdio.h>
int main(void) {
  unsigned long long n;
  char s[65];
  int i = 64;
  if (scanf("%llu", &n) != 1)
    return 1;
  if (n == 0) {
    puts("0");
    return 0;
  }
  s[i] = '\0';
  while (n) {
    s[--i] = (char)('0' + n % 2);
    n /= 2;
  }
  puts(&s[i]);
  return 0;
}
