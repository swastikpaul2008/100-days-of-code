/* Write a program to find profit or loss percentage given cost price and
 * selling price. */
#include <stdio.h>
int main(void) {
  double cp, sp;
  if (scanf("%lf%lf", &cp, &sp) != 2 || cp <= 0)
    return 1;
  if (sp > cp)
    printf("Profit %.2f%%\n", (sp - cp) * 100 / cp);
  else if (sp < cp)
    printf("Loss %.2f%%\n", (cp - sp) * 100 / cp);
  else
    puts("No Profit No Loss");
  return 0;
}
