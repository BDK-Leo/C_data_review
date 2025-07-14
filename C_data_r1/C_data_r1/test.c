#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void Test01()
{
	//初始化
	SL sl;
	SLInit(&sl);

	//尾插
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);

	//头插
	SLPushFront(&sl,0);
	SLPushFront(&sl,-1);
	SLPrint(sl);

	//尾删
	SLPopBack(&sl);

	//头删
	SLPopFront(&sl);
	SLPrint(sl);

	//销毁
	SLDestroy(&sl);
}

int main()
{
	Test01();
	return 0;
}