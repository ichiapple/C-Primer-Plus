#include<stdio.h>

int main()
{
	List moveies;
	Item temp;

	/*initialize*/

	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stdderr, "No memeroy available! Bye!\n");
		exit(1);
	}
	return 0;
}
