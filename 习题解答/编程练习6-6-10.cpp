#include<stdio.h>

int main(void)
{
	int lower, upper;
	printf("������һ������������һ������������");
	scanf("%d %d", &lower, &upper);

	while (lower < upper)
	{
	int sum = 0;
	for (int i = lower; i <= upper; i++)sum += i * i;
	printf("��%d��%d��ƽ����Ϊ��%d\n", lower, upper, sum);
	printf("������һ������������һ������������");
	scanf("%d %d", &lower, &upper);
	}
	printf("���������\n");

	return 0;
}