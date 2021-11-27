#include <stdio.h>
int main(){
    int a[4][3],b[3][4],c[4][4]={0};
    int i,j,k;
    for(i=0;i<4;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    putchar('\n');
    for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<4;i++)
    {for(j=0;j<4;j++)
    for(k=0;k<3;k++)
    c[i][j]+=a[i][k]*b[k][j];}
	for(i=0;i<4;i++)
    {for(j=0;j<4;j++)
    printf("%4d",c[i][j]);
    putchar('\n');}
	return 0;
}
