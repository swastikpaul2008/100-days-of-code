/* Check if a matrix is symmetric. */
#include <stdio.h>
int main(void) {
  int n, a[20][20], ok = 1;
  if (scanf("%d", &n) != 1 || n < 1 || n > 20)
    return 1;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (scanf("%d", &a[i][j]) != 1)
        return 1;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i][j] != a[j][i])
        ok = 0;
  puts(ok ? "True" : "False");
  return 0;
}
