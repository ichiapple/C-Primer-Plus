#include<stdio.h>

double cubic(double n);

int main(void)
{
	double input;
	printf("Enter the double datum to calc cubic : ");
	scanf("%lf", &input);

	cubic(input);

	printf("PROGRAM EXIT!");

	return 0;
}

double cubic(double n)
{
	double t = n * n * n;
	printf("The %lg's cublic is %lg !\n", n, t);
	return t;
}