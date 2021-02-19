#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct Node
{
	ElemType data;
	struct Node* next;
}LinkNode;

void createListF(LinkNode*& L, ElemType a[], int n)
{
	LinkNode* S;
	int i;
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
	for (i = 0; i < n; i++)
	{
		S = (LinkNode*)malloc(sizeof(LinkNode));
		S->data = a[i];
		S->next = L->next;
		L->next = S;
	}
}

void DispList(LinkNode* L)
{
	LinkNode* P = L->next;
	while (P != NULL)
	{
		printf("%d ", P->data);
		P = P->next;
	}
	printf("\n");
}

int main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	LinkNode* L;
	createListF(L, a, 10);
	DispList(L);

	return 0;
}