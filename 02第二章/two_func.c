/*two_func.c --һ���ļ��а�����������*/
#include<stdio.h>
void butler(void);/*ANSI/ISO C����ԭ��*/
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)/*�������忪ʼ*/
{
	printf("You rang,sir?\n");
}
