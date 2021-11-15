#include <stdio.h>
int main()
{
  int no,i=0;
  printf("请输入一个正整数：");
  scanf("%d",&no);
  printf("%d的位数是",no);
  while(no>0)
  {
    no/=10;
    ++i;
  }
  printf("%d。\n",i);
  return 0;
}
