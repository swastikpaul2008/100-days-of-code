/* Search in a sorted array using binary search. */
#include <stdio.h>
int main(void) {
  int n, a[100], x, l = 0, r;
  if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  if (scanf("%d", &x) != 1)
    return 1;
  r = n - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] == x) {
      printf("Found at index %d\n", m);
      return 0;
    }
    if (a[m] < x)
      l = m + 1;
    else
      r = m - 1;
  }
  puts("-1");
  return 0;
}
