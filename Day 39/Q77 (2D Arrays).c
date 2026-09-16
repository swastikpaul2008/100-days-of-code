/* Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>
int main(void) {
  int n, a[20], x, ok = 1;
  if (scanf("%d", &n) != 1 || n < 1 || n > 20)
    return 1;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      if (scanf("%d", &x) != 1)
        return 1;
      if (i == j) {
        for (int k = 0; k < i; k++)
          if (a[k] == x)
            ok = 0;
        a[i] = x;
      }
    }
  puts(ok ? "True" : "False");
  return 0;
}
