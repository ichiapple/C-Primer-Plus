#include<stdio.h>

int main(void)
{
	int i=1, n = 5;

	while(n<150)
	{
		n = (n - i) * 2;
		printf("��%d�ܵ���������%d\n", i, n);
		i++;
	}
	printf("\nDone!\n");
	return 0;
}