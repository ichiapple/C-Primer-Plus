#include<stdio.h>
#include<string.h>
#define MaxSize 50

int main(void)
{
	int i;
	char ch[MaxSize];

	printf("������һ�����ʣ�");
	scanf("%s", ch);
	printf("������ĵ���Ϊ��%s\n", ch);
	printf("���ʳ���Ϊ��%d\n", strlen(ch));
	printf("���ʵ����ӡΪ��");

	for (i = strlen(ch)-1; i >= 0; i--)
		printf("%c", ch[i]);
	printf("\n");

	return 0;
}