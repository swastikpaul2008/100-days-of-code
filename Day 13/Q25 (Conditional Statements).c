/* Write a program to implement a basic calculator using switch-case for +, -,
 * *, /, %. */
#include <stdio.h>
int main(void) {
  long long a, b;
  char op;
  if (scanf("%lld%lld %c", &a, &b, &op) != 3 ||
      ((op == '/' || op == '%') && b == 0))
    return 1;
  switch (op) {
  case '+':
    printf("%lld\n", a + b);
    break;
  case '-':
    printf("%lld\n", a - b);
    break;
  case '*':
    printf("%lld\n", a * b);
    break;
  case '/':
    printf("%lld\n", a / b);
    break;
  case '%':
    printf("%lld\n", a % b);
    break;
  default:
    return 1;
  }
  return 0;
}
