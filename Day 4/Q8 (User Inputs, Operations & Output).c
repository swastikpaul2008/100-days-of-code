/* Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>
int main(void) {
  long long n;
  if (scanf("%lld", &n) != 1 || n < 1) {
    fprintf(stderr, "n must be a positive integer.\n");
    return 1;
  }
  if (n > 3037000499LL) {
    fprintf(stderr, "n is too large for a 64-bit sum.\n");
    return 1;
  }
  printf("Sum=%lld\n", n * (n + 1) / 2);
  return 0;
}
