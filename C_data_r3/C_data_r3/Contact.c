#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
#include"SeqList.h"
#include<string.h>

void LoadContact(Contact* con)
{
	FILE* pf = fopen("Contact.txt","rb");
	if (pf == NULL)
	{
		perror("fopen error!\n");
		return;
	}

	peoInfo info;
	while (fread(&info,sizeof(peoInfo),1,pf))
	{
		SLPushBack(con, info);
	}
	printf("Import Success!\n");
}

void ContactInit(Contact* con)
{
	SLInit(con);
}

void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("Enter new contact name:\n");
	scanf("%s",info.name);

	printf("Enter new contact gender:\n");
	scanf("%s", info.gender);

	printf("Enter new contact age:\n");
	scanf("%d", &info.age);

	printf("Enter new contact phone number :\n");
	scanf("%s", info.tel);

	printf("Enter new contact address:\n");
	scanf("%s", info.addr);

	SLPushBack(con,info);
}
int FindByName(Contact* con, char* name)
{
	for (int i = 0;i < con->size;i++)
	{
		if (strcmp(con->arr[i].name,name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("Please enter the name:\n");
	scanf("%s",name);

	int find = FindByName(con,name);
	if (find < 0)
	{
		printf("Nothing!\n");
		return;
	}
	printf("name:%s\n",con->arr[find].name);
	printf("name:%s\n",con->arr[find].gender);
	printf("name:%d\n",con->arr[find].age);
	printf("name:%s\n",con->arr[find].tel);
	printf("name:%s\n",con->arr[find].addr);
	printf("\n");
}

void ContactModify(Contact* con)
{
	char name[NAME_MAX];
	printf("Please enter the name of the contact to be modified:\n");
	scanf("%s", name);

	int find = FindByName(con,name);
	if (find < 0)
	{
		printf("Nothing!\n");
		return;
	}
	printf("Enter the new name:\n");
	scanf("%s",con->arr[find].name);

	printf("Enter the new gender:\n");
	scanf("%s", con->arr[find].gender);

	printf("Enter the new age:\n");
	scanf("%d", &con->arr[find].age);

	printf("Enter the new number:\n");
	scanf("%s", con->arr[find].tel);

	printf("Enter the new address:\n");
	scanf("%s", con->arr[find].addr);

	printf("Successful!\n");
}

void ContactShow(Contact* con)
{
	if (con->size == 0)
	{
		printf("Nothing!\n");
	}
	for (int i = 0;i < con->size;i++)
	{
		printf("name:%s\n", con->arr[i].name);
		printf("name:%s\n", con->arr[i].gender);
		printf("name:%d\n", con->arr[i].age);
		printf("name:%s\n", con->arr[i].tel);
		printf("name:%s\n", con->arr[i].addr);
		printf("\n");
	}
}

void ContactDel(Contact* con)
{
	char name[NAME_MAX];
	printf("Please enter the name of the contact to be deleted:\n");
	scanf("%s", name);

	int find = FindByName(con,name);
	if (find < 0)
	{
		printf("Nothing");
		return;
	}
	SLErase(con,find);
	printf("Deleted successfully!\n");
}

void ContactSave(Contact* con)
{
	FILE* pf = fopen("Contact.txt","wb");
	if (pf == NULL)
	{
		perror("fopen error!\n");
		return;
	}

	for (int i = 0;i < con->size;i++)
	{
		fwrite(con->arr + i, sizeof(peoInfo), 1, pf);
	}
	printf("Saved Successfully!\n");
}

void ContactDestroy(Contact* con)
{
	//ContactSave(con);
	SLDestroy(con);
}