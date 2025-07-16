#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//初始化
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//申请空间
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	int NewCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, NewCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!\n");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = NewCapacity;
	}
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	for (int i = ps->size;i > 0;i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}

//指定为之前插入
void SLPushInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	for (int i = ps->size;i > pos;i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

//头删
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0;i < ps->size - 1;i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--;
}

//查找
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0;i < ps->size;i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//打印
void SLPrint(SL s)
{
	for (int i = 0;i < s.size;i++)
	{
		printf("%d ",s.arr[i]);
	}
	printf("\n");
}

//销毁
void SLDestroy(SL* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}