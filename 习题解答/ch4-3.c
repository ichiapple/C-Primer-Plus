#include<stdio.h>
int main(void)
{
	float input;
	printf("Enter a float number:");
	scanf("%f", &input);
	printf("The input is %.1f or %.1e \n", input, input);
	printf("The input is %f or %e \n", input, input);

	return 0;
}