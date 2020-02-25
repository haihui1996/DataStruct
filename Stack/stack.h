//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//@FileName:  stack.h
//@Path:      D:\DataStruct
//@Description:
//@Copyright (c) 2020 Haihui Deng
//@Author     haihui_deng@163.com 2020/02/25
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef __STACK_H__
#define __STACK_H__

#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10

#define OK 0
#define ERROR 0x01
#define OVERFLOW 0xFE

#define SElemType int

typedef struct stack
{
    SElemType *base;
    SElemType *top;
    unsigned int stacksize;
} SqStack;

int InitStack(SqStack *S);
int DestroyStack(SqStack *S);
int ClearStack(SqStack *S);
int StackEmpty(SqStack *S);
int StackLength(SqStack *S);
int GetTop(SqStack *S, SElemType *e);
int Push(SqStack *S, SElemType e);
int Pop(SqStack *S, SElemType *e);

#endif
