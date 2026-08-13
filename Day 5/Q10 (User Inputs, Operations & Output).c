/* Write a program to input time in seconds and convert it to
 * hours:minutes:seconds format. */
#include <stdio.h>
int main(void) {
  long long seconds;
  if (scanf("%lld", &seconds) != 1 || seconds < 0) {
    fprintf(stderr, "Time must be a non-negative number of seconds.\n");
    return 1;
  }
  printf("%lld:%lld:%lld\n", seconds / 3600, (seconds % 3600) / 60,
         seconds % 60);
  return 0;
}
