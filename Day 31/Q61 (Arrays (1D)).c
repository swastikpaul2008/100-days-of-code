/* Search for an element in an array using linear search. */
#include <stdio.h>
int main(void) {
  int n, a[100], x;
  if (scanf("%d", &n) != 1 || n < 1 || n > 100)
    return 1;
  for (int i = 0; i < n; i++)
    if (scanf("%d", &a[i]) != 1)
      return 1;
  if (scanf("%d", &x) != 1)
    return 1;
  for (int i = 0; i < n; i++)
    if (a[i] == x) {
      printf("Found at index %d\n", i);
      return 0;
    }
  puts("-1");
  return 0;
}
