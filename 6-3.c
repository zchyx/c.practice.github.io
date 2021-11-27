#include <stdio.h>
int cube(int x) 
{ return x*x*x;
}
int main()
{ int x;
  printf("请输入一个整数：");
  scanf("%d",&x);
  printf("该整数的立方是%d",cube(x));
   return 0;
}
