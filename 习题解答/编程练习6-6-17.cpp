#include<stdio.h>

int main(void)
{
	float money = 100.00;
	float rat = 0.08f;
	int n = 0;

	do
	{
		money = money + money * rat;
		money -= 10;
		n++;
		printf("��%2d����˻����Ϊ��$%.2f����Ԫ��\n", n, money);
	} while (money >= 9.0);

	printf("��%2d����˻����Ϊ�㡣\n", ++n);
	return 0;
}
