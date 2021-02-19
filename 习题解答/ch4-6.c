#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[40], surname[40];
	int wname, wsurname;
	printf("Please input your first name:");
	scanf("%s", name);
	printf("Please input your last name:");
	scanf("%s", surname);

	wname = printf("%s", name);
	printf(" ");
	wsurname = printf("%s", surname);
	//printf("\n%*d %*d\n", wname, wname, wsurname, wsurname);
	printf("\n%-*d %-*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
	return 0;
}