/* Find the transpose of a matrix. */
#include <stdio.h>
int main(void) {
  int r, c, a[20][20];
  if (scanf("%d%d", &r, &c) != 2 || r < 1 || r > 20 || c < 1 || c > 20)
    return 1;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      if (scanf("%d", &a[i][j]) != 1)
        return 1;
  for (int j = 0; j < c; j++) {
    for (int i = 0; i < r; i++)
      printf("%d%c", a[i][j], i == r - 1 ? '\n' : ' ');
  }
  return 0;
}
