#include<stdio.h>
#define SIZE 5
int main(void)
{
	int counter, evens[SIZE];

	for (counter = 0; counter < SIZE; counter++)
		evens[counter] = 2 * counter;


	return 0;
}
