#include <stdio.h>
int pow2(int x) 
{ return x*x;}
int pow4(int x)
{ return pow2(pow2(x));}
int main()
{ int x;
  printf("请输入一个整数：");
  scanf("%d",&x);
  printf("该整数的四次幂是%d",pow4(x));
   return 0;
}
