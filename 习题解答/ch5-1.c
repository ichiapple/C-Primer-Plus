#include<stdio.h>
#define MIN_PER_HOU 60

int main(void)
{
	int hours, minutes, input;
	printf("CONVERT MINUTES TO HOURS!\n");
	printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
	scanf("%d", &input);
	while (input > 0) {
		hours = input / MIN_PER_HOU;
		minutes = input % MIN_PER_HOU;
		printf("CONVERT TO %d HOUR AND %d MINUTES\n", hours, minutes);
		printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
		scanf("%d", &input);
	}
	printf("PROGRAM EXIT!\n");
	return 0;
}