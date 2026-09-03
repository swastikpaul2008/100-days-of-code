/* Write a program to print the following
 * pattern:\n\n*\n\n*\n*\n*\n\n*\n*\n*\n*\n*\n\n*\n*\n*\n\n*\n */
#include <stdio.h>
int main(void) {
  int groups[] = {1, 3, 5, 3, 1};
  for (int g = 0; g < 5; g++) {
    for (int i = 0; i < groups[g]; i++)
      puts("*");
    putchar('\n');
  }
  return 0;
}
