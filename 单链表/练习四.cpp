#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list_node
{
	int data;
	struct list_node* next;
};

typedef struct list_node list_single;

int main(void)
{
	list_single* node = NULL;
	node = (list_single*)malloc(sizeof(list_single));
	if (node == NULL)
	{
		printf("malloc failure!\n");
	}
	memset(node, 0, sizeof(list_single));
	node->data = 100;
	node->next = NULL;
	printf("%d\n", node->data);
	free(node);
	return 0;
}