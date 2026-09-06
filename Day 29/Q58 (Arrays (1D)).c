/* Find the maximum and minimum element in an array. */
#include <stdio.h>
int main(void) {
  int n, x, mn, mx;
  if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    return 1;
  if (scanf("%d", &x) != 1)
    return 1;
  mn = mx = x;
  for (int i = 1; i < n; i++) {
    if (scanf("%d", &x) != 1)
      return 1;
    if (x < mn)
      mn = x;
    if (x > mx)
      mx = x;
  }
  printf("Max=%d, Min=%d\n", mx, mn);
  return 0;
}
