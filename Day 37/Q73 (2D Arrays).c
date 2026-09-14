/* Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>
int main(void) {
  int r, c, x;
  if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 20 || c < 1 || c > 20)
    return 1;
  for (int i = 0; i < r; i++) {
    int s = 0;
    for (int j = 0; j < c; j++) {
      if (scanf("%d", &x) != 1)
        return 1;
      s += x;
    }
    printf("%d%c", s, i == r - 1 ? '\n' : ' ');
  }
  return 0;
}
