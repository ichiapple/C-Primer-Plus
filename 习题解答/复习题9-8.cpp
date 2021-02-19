#include<stdio.h>

int largest(int x, int y, int z);

int main(void)
{
	int a, b, c, d;
	scanf("%d,%d,%d", &a, &b, &c);
	d = largest(a, b, c);
	printf("largest=%d\n", d);

	return 0;
}

int largest(int x, int y, int z)
{
	int max = x;
	if (y > max)max = y;
	if (z > max)max = z;
	return max;
}
