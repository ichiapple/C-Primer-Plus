#include<stdio.h>
int main(void)
{
	int counter, i = 0;
	printf("PRINT COUNTINUE 10 NUMBERS!\n");
	printf("PLEASE INPUT THE START NUMBER: ");
	scanf("%d", &counter);
	while (i++ < 11) {
		printf("%d\n", counter++);
	}
	printf("PROGRAM EXIT!\n");
	return 0;
 }