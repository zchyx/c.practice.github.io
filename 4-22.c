#include <stdio.h>
int main()
{ int i,j,m,n,max,min;
 puts("让我们来画一个长方形。");
 printf("一边：");
 scanf("%d",&m);
  printf("另一边：");
 scanf("%d",&n);
 if(m>n) max=m,min=n;
 else max=n,min=m;
 for(i=1;i<=min;i++)
 {
   for(j=1;j<=max;j++)
     putchar('*');
   putchar('\n');}
 return 0;
}
