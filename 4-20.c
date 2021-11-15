#include <stdio.h>
int main()
{
  int i,j,a;
  printf(" |");
  for(i=1;i<=9;i++)
    printf("%3d",i);
  putchar('\n');
  for(a=1;a<=30;a++)
    putchar('-');
  putchar('\n');
  for(i=1;i<=9;i++)
  {printf("%d |",i);
   for(j=1;j<=9;j++)
     printf("%3d",i*j);
   putchar('\n');}
  return 0;
}
