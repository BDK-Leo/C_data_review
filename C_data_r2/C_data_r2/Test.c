#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void Test01()
{
	SL sl;
	SLInit(&sl);

	//头插
	SLPushFront(&sl,0);
	SLPushFront(&sl,-1);
	
	//尾插
	SLPushBack(&sl,1);
	SLPushBack(&sl,2);
	SLPushBack(&sl,3);
	SLPushBack(&sl,4);
	SLPrint(sl);

	//指定为之前插入
	//SLPushInsert(&sl,sl.size,9);

	//头删
	//SLPopFront(&sl);

	//尾删
	//SLPopBack(&sl);

	//查找
	int find = SLFind(&sl,1);
	if (find < 0)
	{
		printf("没找到！\n");
	}
	else
	{
		printf("位置为%d\n",find);
	}

	//销毁
	SLDestroy(&sl);
}

int main()
{
	Test01();
	return 0;
}