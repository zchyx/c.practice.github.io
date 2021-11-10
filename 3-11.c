#include <stdio.h>
int main()
{
  int a,b;
  puts("请输入两个整数。");
  printf("整数A：");
  scanf("%d",&a);
   printf("整数B：");
  scanf("%d",&b);
  if(a-b>=11||b-a>=11)
    printf("它们的差大于等于11。\n");
  else
    printf("它们的差小于等于10。\n");
  return 0;
}
