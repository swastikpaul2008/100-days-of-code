/* Write a program to input an integer and check whether it is even or odd using
 * if–else. */
#include <stdio.h>
int main(void) {
  int n;
  if (scanf("%d", &n) != 1) {
    return 1;
  }
  printf("%d is %s\n", n, n % 2 == 0 ? "even" : "odd");
  return 0;
}
