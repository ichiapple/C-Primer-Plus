#include<stdio.h>
int main(void)
{
	char alphabet[26];
	int i;
	char c = 'a';
	for (i = 0; i < 26; i++, c++)
		alphabet[i] = c;
	for (i = 0; i < 26; i++)
		printf("%c ", alphabet[i]);
	printf("\n");
	return 0;
}