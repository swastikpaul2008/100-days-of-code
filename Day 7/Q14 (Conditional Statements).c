/* Write a program to input a character and check whether it is a vowel or
 * consonant using if–else. */
#include <ctype.h>
#include <stdio.h>
int main(void) {
  char c;
  if (scanf(" %c", &c) != 1 || !isalpha((unsigned char)c)) {
    return 1;
  }
  c = (char)tolower((unsigned char)c);
  puts(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ? "Vowel"
                                                                : "Consonant");
  return 0;
}
