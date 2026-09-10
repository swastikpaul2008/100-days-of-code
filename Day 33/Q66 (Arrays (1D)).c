/* Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>
int main(void) {
  int n, a[101], x;
  if (scanf("%d", &n) != 1 || n < 0 || n >= 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  if (scanf("%d", &x) != 1)
    return 1;
  int p = n;
  while (p > 0 && a[p - 1] > x) {
    a[p] = a[p - 1];
    p--;
  }
  a[p] = x;
  for (int i = 0; i <= n; i++)
    printf("%d%c", a[i], i == n ? '\n' : ' ');
  return 0;
}
