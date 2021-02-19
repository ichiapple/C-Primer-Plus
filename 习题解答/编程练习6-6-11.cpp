#include<stdio.h>
#define MaxSize 20

int main(void)
{
	int ar[MaxSize];
	int i;
	printf("请输入8个整数：");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &ar[i]);
	};
	printf("倒序输出：");
	for (i = 7; i >=0; i--)
	{
		printf("%d ", ar[i]);
	};
	printf("\n");

	return 0;
}
