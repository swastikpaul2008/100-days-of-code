/* Write a program to input a character and check whether it is an uppercase
 * alphabet, lowercase alphabet, digit, or special character. */
#include <ctype.h>
#include <stdio.h>
int main(void) {
  char c;
  if (scanf(" %c", &c) != 1) {
    return 1;
  }
  if (isupper((unsigned char)c)) {
    puts("Uppercase alphabet");
  } else if (islower((unsigned char)c)) {
    puts("Lowercase alphabet");
  } else if (isdigit((unsigned char)c)) {
    puts("Digit");
  } else {
    puts("Special character");
  }
  return 0;
}
