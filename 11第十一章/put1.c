#include<stdio.h>
void put1(const char* string)
{
	//while (*string )
		//putchar(*string++);
	int i = 0;
	while (string[i] != '\0')
		putchar(string[i++]);
}

int main(void)
{
	char ar[] = "Guo Dongjun is a clever student.";
	put1(ar);
	putchar('\n');

	return 0;
}