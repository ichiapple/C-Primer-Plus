/*escape.c -- 使用转义序列*/
#include<stdio.h>
int main(void)
{
	float salary;
	float a = 256.0;

	printf("\aEnter your desired monthly salary:");/*1*/
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");
	printf("%d\n", a);

	return 0;
}