#include<stdio.h>

int main(void)
{
	int i=1, n = 5;

	while(n<150)
	{
		n = (n - i) * 2;
		printf("第%d周的朋友数：%d\n", i, n);
		i++;
	}
	printf("\nDone!\n");
	return 0;
}