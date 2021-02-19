#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit):");
	status = scanf("%ld", &num);
	while (1==status)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit):");
		status = scanf("%ld", &num);
	}
	printf("Those integer sum to %ld.\n", sum);

	return 0;
}