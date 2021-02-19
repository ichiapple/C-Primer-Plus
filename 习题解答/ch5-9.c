#include<stdio.h>

int Temperatures(double fahrenheit);
int main(int argc, char* argv[])
{
	double input;
	printf("This program convert fahrenheit to celsius and kelvin.\n");
	while (scanf("%lf", &input) == 1)
	{
		Temperatures(input);
		printf("Enter next fahrenheit!(q to quit!): ");
	}
	printf("Done!\n");
	return 0;
}

int Temperatures(double fahrenheit)
{
	const double F_TO_C = 32.0;
	const double C_TO_F = 273.16;
	double celsius, kelvin;
	celsius = 5.0 / 9.0 * (fahrenheit - F_TO_C);
	kelvin = celsius + C_TO_F;
	printf("%.2f. fahrenheit,equal %.2f celsius,and %.2f kelvin\n", fahrenheit, celsius, kelvin);
	return 0;
}