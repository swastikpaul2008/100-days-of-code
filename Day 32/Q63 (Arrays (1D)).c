/* Merge two arrays. */
#include <stdio.h>
int main(void) {
  int n, m, a[200], x;
  if (scanf("%d", &n) != 1 || n < 0 || n > 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  if (scanf("%d", &m) != 1 || m < 0 || n + m > 200)
    return 1;
  for (int i = 0; i < m; i++)
    if (scanf("%d", &x) != 1)
      return 1;
    else
      a[n + i] = x;
  for (int i = 0; i < n + m; i++)
    printf("%d%c", a[i], i == n + m - 1 ? '\n' : ' ');
  return 0;
}
