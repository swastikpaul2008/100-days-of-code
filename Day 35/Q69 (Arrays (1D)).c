/* Find the second largest element in an array. */
#include <stdio.h>
int main(void) {
  int n, a[100];
  if (scanf("%d", &n) != 1 || n < 2 || n > 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (a[j] > a[i]) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
  if (a[0] == a[n - 1])
    return 1;
  for (int i = 1; i < n; i++)
    if (a[i] < a[0]) {
      printf("%d\n", a[i]);
      return 0;
    }
  return 1;
}
