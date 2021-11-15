#include <stdio.h>
int main()
{
  int i,j,n,m;
  puts("生成直角在左上方的等腰直角三角形");
  printf("短边：");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
      putchar('*');
    putchar('\n');}
     puts("生成直角在右上方的等腰直角三角形");
  printf("短边：");
  scanf("%d",&m);
  for(i=1;i<=m;i++)
  {
    for(j=1;j<i;j++)
      putchar(' ');
    for(j=m;j>=i;j--)
      putchar('*');
    putchar('\n');}
  return 0;
}
