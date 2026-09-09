/* Find the digit that occurs the most times in an integer number. */
#include <stdio.h>
int main(void) {
  char s[101];
  int count[10] = {0}, best = 0;
  if (scanf("%100s", s) != 1)
    return 1;
  for (int i = 0; s[i]; i++)
    if (s[i] >= '0' && s[i] <= '9')
      count[s[i] - '0']++;
    else
      return 1;
  for (int d = 1; d < 10; d++)
    if (count[d] > count[best])
      best = d;
  printf("%d\n", best);
  return 0;
}
