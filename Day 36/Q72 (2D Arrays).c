/* Find the sum of all elements in a matrix. */
#include <stdio.h>
int main(void) {
  int r, c, x;
  long long s = 0;
  if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 20 || c < 1 || c > 20)
    return 1;
  for (int i = 0; i < r * c; i++)
    if (scanf("%d", &x) != 1)
      return 1;
    else
      s += x;
  printf("%lld\n", s);
  return 0;
}
