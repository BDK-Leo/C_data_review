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

//申请空间
void SLCheakCapacity(SL* ps);

//尾插
void SLPushBack(SL* ps, SLDataType x);

//头插
void SLPushFront(SL* ps,SLDataType x);

//指定位置之前插入
void SLInsert(SL* ps,int pos,SLDataType x);

//删除指定位置的数据
void SLErase(SL* ps,int pos);

//尾删
void SLPopBack(SL* ps);

//头删
void SLPopFront(SL* ps);

//查找
int SLFind(SL* ps,SLDataType x);

//打印
void SLPrint(SL s);

//销毁
void SLDestroy(SL* ps);