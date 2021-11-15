#include <stdio.h>
int main()
{
  int i=1,no;
  printf("请输入一个正整数：");
  scanf("%d",&no);
  if(no>=0)
  {
    while(i<=0)
      printf("%d ",i++);
    printf("\n");
  }
  return 0;
}
