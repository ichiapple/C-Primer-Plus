#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[40];
	int width;
	printf("Please input your name:");
	scanf("%s", name);
	width = printf("\"%s\".\n", name);
	//width -= 4;
	printf("\"%20s\".\n", name);
	printf("\"%-20s\".\n", name);
	printf("\"%*s\".\n", (width + 3), name);

	printf("width=%d\n", width);
	printf("width=%d\n", strlen(name));

	return 0;
}