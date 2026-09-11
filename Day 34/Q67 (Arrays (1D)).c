/* Insert an element in an array at a given position. */
#include <stdio.h>
int main(void) {
  int n, a[101], p, x;
  if (scanf("%d", &n) != 1 || n < 0 || n >= 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  if (scanf("%d%d", &p, &x) != 2 || p < 0 || p > n)
    return 1;
  for (int i = n; i > p; i--)
    a[i] = a[i - 1];
  a[p] = x;
  for (int i = 0; i <= n; i++)
    printf("%d%c", a[i], i == n ? '\n' : ' ');
  return 0;
}
