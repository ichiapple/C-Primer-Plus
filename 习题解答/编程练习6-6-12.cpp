#include<stdio.h>

int signal(int n)
{
	if (n % 2 == 0)return -1;
	else
		return 1;
}

int main(void)
{
	int i, n;
	double sum=0.0,sum1=0.0,sum2=0.0,result=0.0;

	printf("请输入求和的项数：");
	scanf("%d", &n);
	while (n > 0)
	{
	for (i = 1; i <=n; i++)
	{
		sum1 += 1.0 / i;
		sum2 += signal(i) / (double) i;
		sum = sum1 + sum2;
		if (i % 2 != 0)result += 2 * 1.0 / i;
	}
	printf("%d项的序列1总和为：%lf\n", n, sum1);
	printf("%d项的序列2总和为：%lf\n", n, sum2);
	printf("%d项的序列1和序列2的和sum为：%lf\n", n, sum);
	printf("%d项的序列1和序列2的和result为：%lf\n", n, result);
	printf("请输入求和的项数：");
	scanf("%d", &n);
	}
	printf("程序结束！\n");
	
	return 0;
}