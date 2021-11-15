#include <stdio.h>
int main()
{
  int i,j,n;
  puts("让我们来画一个向下的金字塔");
  printf("金字塔有几层：");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {for(j=1;j<=n-i;j++)
    putchar(' ');
   for(j=1;j<=2*i-1;j++)
     printf("%d",(n-i+1)%10);
   putchar('\n');}
   return 0;
}
