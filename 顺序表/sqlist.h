#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50

typedef int ElemType;

typedef struct
{
	ElemType data[MaxSize];
	int length;
}SqList;

void InitList(SqList* L)
{
	L = (SqList*)malloc(sizeof(SqList));
	L->length = 0;
}