#include <stdio.h>
int main()
{
  int a,i=1,n;
  printf("请输入一个整数：");
  scanf("%d",&a);
  while(i*2<a)
  {
    i=i*2;
    printf("%d ",i);}
  printf("\n");
  return 0;
}
