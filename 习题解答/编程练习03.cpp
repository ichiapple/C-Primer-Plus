#include<stdio.h>

int main(void)
{
	char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;
	for (i = 1; i < 7; i++)
	{
		for (j = 0; j < i; j++)
			printf("%c", lets[5 - j]);
		printf("\n");
	}

	return 0;
}