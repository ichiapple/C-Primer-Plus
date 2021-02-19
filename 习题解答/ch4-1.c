#include<stdio.h>
int main(void)
{
	char name[40];
	char surname[40];
	printf("Please input your first name:");
	scanf("%s", name);

	printf("Please input your last name:");
	scanf("%s", surname);

	printf("Hello,%s %s.\n", name, surname);

	return 0;
}
