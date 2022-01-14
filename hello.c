#include <stdio.h>

int main(void)
{
  int x = 12;
  float y = 3.14;
  char s[] = "Hello, world!\n";

  printf("x is %d, y is %f\n", x, y);
  printf("%s", s);

  int num = 0;
  while(num<=4)
  {
    int sum = num * 5;
    printf("%d x 5 = %d\n", num, sum);
    num++;
  }
    return 0;
}