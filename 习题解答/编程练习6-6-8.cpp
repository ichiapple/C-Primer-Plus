#include<stdio.h>

float calc(float x, float y);

int main(void)
{
	float x, y;

	printf("请输入两个浮点数：");
	
	while (scanf("%f,%f", &x, &y) == 2)
	{
	printf("(%.2f-%.2f)/(%.2f*%.2f)=%f\n",x,y,x,y,calc(x,y));
	printf("请输入两个浮点数：");
	}

	printf("程序结束！\n");

	return 0;
}
float calc(float x, float y)
{
	return(x - y) / (x * y);
}