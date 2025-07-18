#pragma once
#define NAME_MAX 20
#define GERDER_MAX 2
#define TEL_MAX 20
#define ADDR_MAX 100

typedef struct personInfo
{
	char name[NAME_MAX];
	char gender[GERDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

typedef struct SeqList Contact;//前置声明

void ContactInit(Contact* con);

void ContactAdd(Contact* con);

void ContactFind(Contact* con);

void ContactModify(Contact* con);

void ContactShow(Contact* con);

void ContactSave(Contact* con);

void LoadContact(Contact* con);

void ContactDel(Contact* con);

void ContactDestroy(Contact* con);

