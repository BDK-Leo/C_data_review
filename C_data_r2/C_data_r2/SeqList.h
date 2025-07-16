#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//初始化
void SLInit(SL* ps);

//头插
void SLPushFront(SL* ps,SLDataType x);

//尾插
void SLPushBack(SL* ps, SLDataType x);

//指定为之前插入
void SLPushInsert(SL* ps,int pos,SLDataType x);

//头删
void SLPopFront(SL* ps);

//尾删
void SLPopBack(SL* ps);

//查找
int SLFind(SL* ps,SLDataType x);

//打印
void SLPrint(SL s);

//销毁
void SLDestroy(SL* ps);