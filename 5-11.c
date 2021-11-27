#include <stdio.h>
int main()
{ int a[6][2],b[6]={0};
  int i,j,sum1=0,sum2=0;
  float aver1,aver2,c[6]={0};
  for(i=0;i<6;i++)
  for(j=0;j<2;j++)
  scanf("%d",&a[i][j]);
  for(i=0;i<6;i++)
  sum1+=a[i][0];
  printf("语文的总分是%d。\n",sum1);
  aver1=(float)sum1/6;
  printf("语文的平均分是%f。\n",aver1);
  for(i=0;i<6;i++)
  sum2+=a[i][1];
  printf("数学的总分是%d。\n",sum2);
  aver2=(float)sum2/6;
  printf("数学的平均分是%.2f。\n",aver2);
  for(i=0;i<6;i++)
  {b[i]=a[i][0]+a[i][1];
  c[i]=(float)b[i]/2;} 
   printf("各个同学的总分分别是：");
  for(i=0;i<6;i++)
  {printf("%4d",b[i]);
  putchar(' ');}
  putchar('\n');
  printf("各个同学的平均分分别是："); 
  for(i=0;i<6;i++)
  {printf("%.2f",c[i]);
   putchar(' ');}
   putchar('\n');
  return 0;
}
