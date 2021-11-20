#include <stdio.h>
#define NUMBER 7
int main()
{
    int i,x[NUMBER];
    for(i=0;i<NUMBER;i++)
    {printf("x[%d]:",i);
    scanf("%d",&x[i]);}
    for(i=0;i<3;i++)
    {int temp=x[i];
    x[i]=x[6-i];
    x[6-i]=temp;}
    puts("倒序排列了。");
    for(i=0;i<NUMBER;i++)
    printf("x[%d]=%d\n",i,x[i]);
    return 0;
    }
//如果元素个数为奇数，则交换次数为【(num-1)/3】次;如果为偶数，则交换次数为(num/2)次。但表达形式都是x[i]=x[num-1-i]。
