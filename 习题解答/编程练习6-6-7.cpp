#include<stdio.h>
#include<string.h>
#define MaxSize 50

int main(void)
{
	int i;
	char ch[MaxSize];

	printf("请输入一个单词：");
	scanf("%s", ch);
	printf("你输入的单词为：%s\n", ch);
	printf("单词长度为：%d\n", strlen(ch));
	printf("单词倒序打印为：");

	for (i = strlen(ch)-1; i >= 0; i--)
		printf("%c", ch[i]);
	printf("\n");

	return 0;
}