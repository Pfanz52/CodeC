/*#include<stdio.h>
int main()
{
    int i = 3;
    printf("%d\n",++i);
    printf("%d\n",i);
    printf("%d\n",i++);
    printf("%d\n",i);
    printf("%d\n",--i);
    printf("%d\n",i);
    printf("%d\n",i--);
    printf("%d\n",i);
    return 0;
}*/
#include <stdio.h>

int main()
{

  int i = 0;

  int a = i++ * 2;

  printf("i=0, i++*2=%d\n", a);

  i = 0;

  a = ++i * 2;

  printf("i=0, ++i*2=%d\n", a);

  i = 0;

  a = (++i) * 2;

  printf("i=0, (++i)*2=%d\n", a);

  i = 0;

  a = (++i) * 2;

  printf("i=0, (++i)*2=%d\n", a);

  return 0;
}