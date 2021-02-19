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
		printf("第%2d年后账户余额为：$%.2f万美元。\n", n, money);
	} while (money >= 9.0);

	printf("第%2d年后账户余额为零。\n", ++n);
	return 0;
}
