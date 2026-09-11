/* Delete an element from an array. */
#include <stdio.h>
int main(void) {
  int n, a[100], p;
  if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  if (scanf("%d", &p) != 1 || p < 0 || p >= n)
    return 1;
  for (int i = p; i < n - 1; i++)
    a[i] = a[i + 1];
  for (int i = 0; i < n - 1; i++)
    printf("%d%c", a[i], i == n - 2 ? '\n' : ' ');
  return 0;
}
