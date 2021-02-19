#include<stdio.h>

int main(void)
{
	int i;
	int array[10] = {0};
	int* ptr = array;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		(*ptr)++;
		ptr++;
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}