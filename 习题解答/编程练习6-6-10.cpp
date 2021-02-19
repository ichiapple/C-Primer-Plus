#include<stdio.h>

int main(void)
{
	int lower, upper;
	printf("请输入一个下限整数和一个上限整数：");
	scanf("%d %d", &lower, &upper);

	while (lower < upper)
	{
	int sum = 0;
	for (int i = lower; i <= upper; i++)sum += i * i;
	printf("从%d到%d的平方和为：%d\n", lower, upper, sum);
	printf("请输入一个下限整数和一个上限整数：");
	scanf("%d %d", &lower, &upper);
	}
	printf("程序结束！\n");

	return 0;
}