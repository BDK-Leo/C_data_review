#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//基于顺序表实现通讯录的练习02

//test01()
//{
//	SL sl;
//	SLInit(&sl);
//
//	SLPushFront(&sl,0);
//	SLPushFront(&sl,-1);
//
//	SLPushBack(&sl,1);
//	SLPushBack(&sl,2);
//	SLPushBack(&sl,3);
//	SLPushBack(&sl,4);
//
//	SLInsert(&sl,0,-2);
//	SLInsert(&sl,sl.size,5);
//	SLPrint(sl);
//
//	SLPopFront(&sl);
//	SLPopBack(&sl);
//	SLPrint(sl);
//
//	SLErase(&sl,sl.size-1);
//	SLPrint(sl);
//
//	int find = SLFind(&sl,-2);
//	if (find < 0)
//	{
//		printf("Nothing!\n");
//	}
//	else
//	{
//		printf("Got it!\n");
//		printf("%d \n",find);
//	}
//
//	SLDestroy(&sl);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

void menu()
{
	printf("*********************\n");
	printf("***1.Load 2.Add   ***\n");
	printf("***3.Find 4.Modify***\n");
	printf("***5.Show 6.Del   ***\n");
	printf("***7.Save 0.exit  ***\n");
	printf("*********************\n");
}

int main()
{
	int op = -1;
	Contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("Please Choice:\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			LoadContact(&con);
			break;
		case 2:
			ContactAdd(&con);
			break;
		case 3:
			ContactFind(&con);
			break;
		case 4:
			ContactModify(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 6:
			ContactDel(&con);
			break;
		case 7:
			ContactSave(&con);
			break;
		case 0:
			printf("Exited!\n");
			break;
		default:
			printf("Wrong selection, please select again!\n");
			break;
		}
	} while (op);
	ContactDestroy(&con);
	return 0;
}