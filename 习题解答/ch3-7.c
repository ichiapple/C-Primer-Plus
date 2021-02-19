#include<stdio.h>
#define INCH_TO_CM 2.54

int main(void)
{
	float inch, cm;
	printf("Enter the inch of your heigh:");
	scanf("%f", &inch);
	cm = inch * INCH_TO_CM;

	printf("Hi ,your are %0.2f inch ,or %.2f cm heigh\n", inch, cm);

	return 0;
}