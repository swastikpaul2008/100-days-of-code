/* Write a program to display the day of the week based on a number (1–7) using
 * switch-case. */
#include <stdio.h>
int main(void) {
  int n;
  if (scanf("%d", &n) != 1 || n < 1 || n > 7) {
    return 1;
  }
  const char *days[] = {"Monday", "Tuesday",  "Wednesday", "Thursday",
                        "Friday", "Saturday", "Sunday"};
  printf("%s\n", days[n - 1]);
  return 0;
}
