#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int id;
	int data;
	struct Node* next;
};

struct Node* createList()   //创建表头
{
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	headNode->next = NULL;
	return headNode;
}

struct Node* createNode(int data)    //创建结点
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertNode(struct Node* headNode, int data)   //头插法建表
{
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

void printList(struct Node* headNode)   //链表遍历
{
	struct Node* pMove = headNode->next;
	while (pMove)
	{
		printf("%d ", pMove->data);
		pMove = pMove->next;
	}
	printf("\n");
}
int main(void)
{
	struct Node* list = createList();
	insertNode(list, 1);
	insertNode(list, 2);
	insertNode(list, 3);
	insertNode(list, 4);
	insertNode(list, 5);
	insertNode(list, 6);
	insertNode(list, 7); 
	insertNode(list, 8); 
	insertNode(list, 9);
	
	printList(list);

	return 0;
}