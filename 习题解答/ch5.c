#include<stdio.h>
#define END 'g'

int main(int argc,char *argv[])
{
	char n = 'a' - 1;

	while (n++ < END)
	{
		printf("%25c", n);
		printf("\n");
	}
	return 0;
}