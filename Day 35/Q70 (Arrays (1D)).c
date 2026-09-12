/* Rotate an array to the right by k positions. */
#include <stdio.h>
int main(void) {
  int n, k, a[100];
  if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  if (scanf("%d", &k) != 1)
    return 1;
  k = (k % n + n) % n;
  for (int i = 0; i < n; i++)
    printf("%d%c", a[(i + n - k) % n], i == n - 1 ? '\n' : ' ');
  return 0;
}
