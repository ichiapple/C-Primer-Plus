/*badcount.c -- 参数错误的情况*/
#include<stdio.h>
int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);
	printf("%d %d %d\n", n);
	printf("%d %d \n", f, g);
	printf("%d %d %f %f\n", n, m, f, g);


	return 0;
}