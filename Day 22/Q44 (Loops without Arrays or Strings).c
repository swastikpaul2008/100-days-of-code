/* Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to
 * n terms. */
#include <stdio.h>
int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n < 1)
    return 1;
  double s = 0;
  for (int i = 1; i <= n; i++)
    s += (2.0 * i - 1) / (i == 1 ? 1 : 2.0 * i);
  printf("Approximate sum: %.2f\n", s);
  return 0;
}
