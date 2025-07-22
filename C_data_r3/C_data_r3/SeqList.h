#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Contact.h"

typedef peoInfo SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);

void SLCheckCapacity(SL* ps);

void SLPushFront(SL* ps, SLDataType x);

void SLPushBack(SL* ps, SLDataType x);

void SLInsert(SL* ps,int pos,SLDataType x);

void SLPopFront(SL* ps);

void SLPopBack(SL* ps);

void SLErase(SL* ps,int pos);

//int SLFind(SL* ps,SLDataType x);

//void SLPrint(SL sl);

void SLDestroy(SL* ps);
