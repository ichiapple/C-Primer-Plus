#include<stdio.h>
#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950

int main(void)
{
	float quart, quantity;
	printf("Enter how many quart:");
	scanf("%f", &quart);
	quantity = quart * MASS_PER_QUART / MASS_PER_MOLE;
	printf("There are %e molecule.\n", quantity);

	return 0;
}