#include <stdio.h>
int sumup(int n)
{ int i,a=0;
 while(n>0)
 {a+=n;
 n--;}
 return a;
}
int main()
{ int n;
  printf("请输入一个整数：");
  scanf("%d",&n);
  printf("1到%d之间所有整数的和是%d。\n",n,sumup(n));
   return 0;
}
