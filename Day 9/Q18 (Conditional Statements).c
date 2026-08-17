/* Write a program that accepts a percentage (0-100) and assigns a grade based
 * on the following criteria: \n90-100: Grade A \n80-89: Grade B \n70-79: Grade
 * C \n60-69: Grade D \nbelow 60: Grade F. */
#include <stdio.h>
int main(void) {
  double p;
  if (scanf("%lf", &p) != 1 || p < 0 || p > 100) {
    return 1;
  }
  puts(p >= 90   ? "Grade A"
       : p >= 80 ? "Grade B"
       : p >= 70 ? "Grade C"
       : p >= 60 ? "Grade D"
                 : "Grade F");
  return 0;
}
