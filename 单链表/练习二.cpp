#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct node
{
	DataType data;
	struct node* next;
}Node,*Link;

void displayNode(Link head);          //������ı�������
int length(Link head);                //�������Ԫ�ظ���
bool queryNode(Link head, DataType x);//������Ĳ���
Link newListF(DataType a[], int n);    //ͷ�巨����������
bool insertNode(Link head, int i, DataType x);//������Ĳ���
Link newLinkT(DataType a[], int n);//β�巨����������
bool deleteNode(Link head, DataType x);//ָ���ڵ�ɾ��
void clearLink(Link head);//��������ͷ�


int main(void)
{
	Link L;
	DataType a[5] = { 35,12,24,33,42 };
	L = newListF(a, 5);
	displayNode(L);
	printf("������L��Ԫ�ظ���Ϊ��%d��\n", length(L));
	if (queryNode(L, 12))
		printf("�ڵ�����L���ҵ�Ԫ��12��\n");
	else
		printf("�ڵ�����L��û���ҵ�Ԫ��12��\n");
	if (insertNode(L, 3, 0))
		printf("�ɹ��ڵ�����Lλ��3�в���Ԫ��0��\n");
	else
		printf("����ʧ�ܣ�\n");
	displayNode(L);
	printf("β�巨��������L:");
		L=newLinkT(a, 5);
	displayNode(L);

	if (deleteNode(L, 33))
		printf("�ɹ��ڵ�����L��ɾ��Ԫ��33��\n");
	else
		printf("ɾ��ʧ�ܣ�\n");
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
			//printf("�ҵ�Ԫ�أ�%d\n", p->data);
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