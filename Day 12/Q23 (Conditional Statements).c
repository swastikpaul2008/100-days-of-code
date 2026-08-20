/* Write a program to calculate library fine based on late days as follows:
 * \nFirst 5 days late: ₹2/day \nNext 5 days late: ₹4/day \nNext 20 days days
 * late: ₹6/day \nMore than 30 days: Membership Cancelled. */
#include <stdio.h>
int main(void) {
  int n, f = 0;
  if (scanf("%d", &n) != 1 || n < 0)
    return 1;
  if (n > 30) {
    puts("Membership Cancelled");
    return 0;
  }
  f = (n > 5 ? 10 : n * 2);
  if (n > 10)
    f += (n - 10) * 6;
  else if (n > 5)
    f += (n - 5) * 4;
  printf("Fine %d\n", f);
  return 0;
}
