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

	printf("��������͵�������");
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
	printf("%d�������1�ܺ�Ϊ��%lf\n", n, sum1);
	printf("%d�������2�ܺ�Ϊ��%lf\n", n, sum2);
	printf("%d�������1������2�ĺ�sumΪ��%lf\n", n, sum);
	printf("%d�������1������2�ĺ�resultΪ��%lf\n", n, result);
	printf("��������͵�������");
	scanf("%d", &n);
	}
	printf("���������\n");
	
	return 0;
}