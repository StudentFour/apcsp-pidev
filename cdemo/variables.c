#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int t;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  t = a;
  a = c;
  c = t;
 printf("Swap a and c: a is %d and c is %d\n", a, c);
}
