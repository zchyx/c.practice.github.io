#include <stdio.h>
int main()
{
  int a,b,sum=0,max,min,i=min,x;
  puts("请输入两个整数：");
  printf("整数a：");
  scanf("%d",&a);
  printf("整数b：");
  scanf("%d",&b);
  if(a>b)
  {max=a;
   min=b;
   x=a-b+1;}
  else {
    max=b;
    min=a;
    x=b-a+1;
  }
  do
  {x=x-1;
   sum+=min+x;
  }
  while(x!=0);
  printf("大于等于%d小于等于%d的所有整数的和是%d。",min,max,sum);
  retuen 0;
}
