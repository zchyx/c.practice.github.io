#include <stdio.h>
int main()
{int n,i;
 printf("n的值：");
 scanf("%d",&n);
 for(i=0;i<=n;++i)
   if(i%2!=0)
     printf("%d ",i);
 return 0;
}
