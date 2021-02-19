#include<stdio.h>

int main(void)
{
	int data[8];

	for (int i = 1, n = 1; i <= 8; i++)
	{
		n *= 2;
		data[i - 1] = n;
	}
	int i = 0;
	do
	{
		printf("%d ", data[i++]);
	} while (i < 8);
	printf("\n³ÌÐò½áÊø£¡\n");
	return 0;
}