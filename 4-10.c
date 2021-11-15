#include <stdio.h>
int main()
{
  int a,i=-1;
  printf("正整数：");
  scanf("%d",&a);
  while(++i<a)
  {
    putchar('*');
    putchar('\n');}
  return 0;
}
