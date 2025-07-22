#pragma once
#pragma once
#define NAME_MAX 20
#define GENDER_MAX 2
#define TEL_MAX 20
#define ADDR_MAX 20


typedef struct PersonInfo
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoInfo;

typedef struct SeqList Contact;

void LoadContact(Contact* con);

void ContactInit(Contact* con);

void ContactAdd(Contact* con);

void ContactFind(Contact* con);

void ContactModify(Contact* con);

void ContactShow(Contact* con);

void ContactDel(Contact* con);

void ContactSave(Contact* con);

void ContactDestroy(Contact* con);