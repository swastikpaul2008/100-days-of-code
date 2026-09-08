/* Reverse an array without taking extra space. */
#include <stdio.h>
int main(void) {
  int n, a[100];
  if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  for (int i = 0; i < n / 2; i++) {
    int t = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = t;
  }
  for (int i = 0; i < n; i++)
    printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
  return 0;
}
