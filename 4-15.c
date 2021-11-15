#include <stdio.h>
int main()
{
  int n1,n2,i,hight;
  printf("开始数值（cm）：");
  scanf("%d",&n1);
   printf("结束数值（cm）：");
  scanf("%d",&n2);
   printf("间隔数值（cm）：");
  scanf("%d",&i);
  for(hight=n1;hight<=n2;hight+=i)
  {
    printf("%dcm    %.2fkg\n",hight,(hight-100)*0.9);}
  return 0;
}
