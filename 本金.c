#include <stdio.h>
#include <math.h>
	printf("请输入定期存款的年利率:"); 
	scanf("%lf",&rate);
	printf("请输入存款期：");
	scanf("%lf",&n);
	printf("请输入存款本金：");
	scanf("%lf",&capital);
	printf("本利之和为%f",deposit=capital*pow(1+rate,n));
	return 0;
} 