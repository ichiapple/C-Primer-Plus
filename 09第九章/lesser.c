#include<stdio.h>

int main(void)
{
	int imin(int, int);
	int evil1, evil2;

	printf("Enter a pair of integers (q to quit):\n");
	while (scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers (q to quit):\n");
	}
	printf("Bye.\n");

	return 0;
}

int imin(int n, int m)
{
	/*int min*/;

	if (n < m)
		return n;
	else
		return m;
	printf("you are a fopdoodle.\n");
	//return ((n<m)?n:m);
}