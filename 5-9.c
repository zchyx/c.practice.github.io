#include <stdio.h>
#define NUMBER 80
int main(){
    int i,j,num,m,n,max;
    int tensu[NUMBER],bunpu[11]={0};
    printf("请输入学生人数:");
    do
    {scanf("%d",&num);
    if(num<0||num>NUMBER)
    printf("请输入1~%d的数:",NUMBER);}
    while(num<0||num>NUMBER);
    printf("请输入%d人的分数。\n",num);
    for(i=0;i<num;i++)
    {printf("%2d号:",i+1);
    do
    {scanf("%d",&tensu[i]);
    if(tensu[i]<0||tensu[i]>100)
    printf("请输入1~100的数:");
    bunpu[tensu[i]/10]++;}//数组自增积累 
    while(tensu[i]<0||tensu[i]>100);}
    max=bunpu[0];
    for(i=0;i<=10;i++)
    {if(bunpu[i]>max) max=bunpu[i];}
    for(;max>0;max--)//有max行 ，外循环max次
    {for(j=0;j<11;j++)//有11列， 内循环11次 
    {if(bunpu[j]>=max)
    printf("   *");
    else
    printf("    ");}
    putchar('\n');}
    for(i=0;i<45;i++)
    {printf("-");}
    putchar('\n');
    for(i=0;i<11;i++)
    {printf("%4d",i*10);}
    putchar('\n');
    return 0;
}
