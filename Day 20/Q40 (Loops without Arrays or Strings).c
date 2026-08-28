/* Write a program to find the 1’s complement of a binary number and print it.
 */
#include <stdio.h>
int main(void) {
  char s[65];
  if (scanf("%64s", s) != 1)
    return 1;
  for (int i = 0; s[i]; i++) {
    if (s[i] != '0' && s[i] != '1')
      return 1;
    s[i] = s[i] == '0' ? '1' : '0';
  }
  puts(s);
  return 0;
}
