/* Write a program to print the following
 * pattern:\n*****\n*****\n*****\n*****\n***** */
#include <stdio.h>
int main(void) {
  for (int r = 0; r < 5; r++) {
    for (int c = 0; c < 5; c++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
