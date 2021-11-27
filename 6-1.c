#include <stdio.h>
int min2(int a,int b)
{ return(a<b)?a:b;
}
int main()
{ int a,b;
  puts("请输入两个整数。"); 
   printf("整数a:");
   scanf("%d",&a);
   printf("整数b:");
   scanf("%d",&b);
   printf("较小值是%d。\n",min2(a,b));
   return 0;
}
