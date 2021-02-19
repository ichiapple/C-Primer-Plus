#include<stdio.h>

int main(void)
{
	float input;
	printf("Enter a floating-point value:");
	scanf("%f", &input);
	printf("fixed-point notation: %f\n", input);
	printf("exponential notation: %e\n", input);
	printf("p notation: %a \n", input);

	return 0;
}