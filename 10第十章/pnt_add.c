#include<stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];
	short* pti;
	short index;
	double bills[SIZE];
	double* ptf;
	pti = dates;
	ptf = bills;
	ptf = &bills[0];
	printf("%p\n", ptf);
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
		printf("pointers+%d:   %10p      %10p\n", index, pti + index, ptf + index);
	printf("%d\n", ((dates + 2) == &dates[2]));
	printf("%d\n", (*(dates + 2) == dates[2]));
	return 0;
}