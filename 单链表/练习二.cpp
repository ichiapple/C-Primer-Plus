#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct node
{
	DataType data;
	struct node* next;
}Node,*Link;

void displayNode(Link head);          //单链表的遍历操作
int length(Link head);                //求单链表的元素个数
bool queryNode(Link head, DataType x);//单链表的查找
Link newListF(DataType a[], int n);    //头插法创建单链表
bool insertNode(Link head, int i, DataType x);//单链表的插入
Link newLinkT(DataType a[], int n);//尾插法创建单链表
bool deleteNode(Link head, DataType x);//指定节点删除
void clearLink(Link head);//单链表的释放


int main(void)
{
	Link L;
	DataType a[5] = { 35,12,24,33,42 };
	L = newListF(a, 5);
	displayNode(L);
	printf("单链表L的元素个数为：%d个\n", length(L));
	if (queryNode(L, 12))
		printf("在单链表L中找到元素12！\n");
	else
		printf("在单链表L中没有找到元素12！\n");
	if (insertNode(L, 3, 0))
		printf("成功在单链表L位置3中插入元素0！\n");
	else
		printf("插入失败！\n");
	displayNode(L);
	printf("尾插法建立链表L:");
		L=newLinkT(a, 5);
	displayNode(L);

	if (deleteNode(L, 33))
		printf("成功在单链表L中删除元素33！\n");
	else
		printf("删除失败！\n");
	displayNode(L);

	clearLink(L);
	//displayNode(L);

	return 0;
}

void displayNode(Link head)
{
	Link p;
	p = head->next;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int length(Link head)
{
	Link p;
	int count = 0;

	p = head->next;
	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return count;
}

bool queryNode(Link head, DataType x)
{
	Link p;
	p = head->next;
	while (p)
	{
		if (p->data == x)
		{
			//printf("找到元素：%d\n", p->data);
			return true;
		}
		p = p->next;
	}
	return false;
}

Link newListF(DataType a[], int n)
{
	Link head,node;
	head = (Link)malloc(sizeof(Node));
	head->next = NULL;

	for (int i = 0; i < n; i++)
	{
		node = (Link)malloc(sizeof(Node));
		node->data = a[i];
		node->next = head->next;
		head->next = node;
	}
	return head;
}

bool insertNode(Link head, int i, DataType x)
{
	Link p = head;
	int count = 0;
	while (p != NULL && count < i - 1)
	{
		p = p->next;
		count++;
	}
	if (p == NULL)
		return false;
	else
	{
		Link node = (Link)malloc(sizeof(Node));
		node->data = x;
		node->next = p->next;
		p->next = node;
		return true;
	}
}

Link newLinkT(DataType a[], int n)
{
	Link head, rear;
	head = (Link)malloc(sizeof(Node));
	head->next = NULL;
	rear = head;
	for (int i = 0; i < n; i++)
	{
		Link node = (Link)malloc(sizeof(Node));
		node->data = a[i];
		node->next = NULL;
		rear->next = node;
		rear = node;
	}
	return head;
}

bool deleteNode(Link head, DataType x)
{
	Link p, q;
	if (head == NULL || head->next == NULL)
		return false;
	p = head->next;
	q = head;
	while (p != NULL)
	{
		if (p->data == x) 
		{
			q->next = p->next;
			free(p);
			return true;
		}
		else
		{
			q = p;
			p = p->next;
		}
	}
	return false;
}

void clearLink(Link head)
{
	Link pre=head,p=head->next;
	while (p!=NULL)
	{
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}