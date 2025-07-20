#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

//void Test01()
//{
//	SL sl;
//	SLInit(&sl);
//
//	//头插
//	SLPushFront(&sl,0);
//	SLPushFront(&sl,-1);
//	
//	//尾插
//	SLPushBack(&sl,1);
//	SLPushBack(&sl,2);
//	SLPushBack(&sl,3);
//	SLPushBack(&sl,4);
//	SLPrint(sl);
//
//	//指定为之前插入
//	//SLPushInsert(&sl,sl.size,9);
//
//	//头删
//	//SLPopFront(&sl);
//
//	//尾删
//	//SLPopBack(&sl);
//
//	//查找
//	int find = SLFind(&sl,1);
//	if (find < 0)
//	{
//		printf("没找到！\n");
//	}
//	else
//	{
//		printf("位置为%d\n",find);
//	}
//
//	//销毁
//	SLDestroy(&sl);
//}

//void Test02()
//{
//	Contact con;
//	ContactInit(&con);
//
//	ContactAdd(&con);
//	ContactShow(&con);
//
//	//ContactDel(&con);
//	//ContactModify(&con);
//	ContactFind(&con);
//	//ContactShow(&con);
//
//	ContactDestroy(&con);
//}

//int main()
//{
//	//Test01();
//	//Test02();
//	return 0;
//}

void menu()
{
	printf("*******   通讯录   *******\n");
	printf("***1.添加用户 2.删除用户***\n");
	printf("***3.修改用户 4.查找用户***\n");
	printf("***5.显示用户 6.保存用户***\n");
	printf("***7.加载用户 0.退出程序***\n");
}

int main()
{
	int op = -1;
	Contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDel(&con);
			break;
		case 3:
			ContactModify(&con);
			break;
		case 4:
			ContactFind(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 6:
			ContactSave(&con);
			break;
		case 7:
			LoadContact(&con);
			break;
		case 0:
			printf("已退出！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (op);
	ContactDestroy(&con);
	return 0;
}