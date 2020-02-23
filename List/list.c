//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//@FileName:  list.c
//@Path:      D:\DataStruct\List
//@Description: 单向链表
//@Copyright (c) 2020 Haihui Deng
//@Author     haihui_deng@163.com 2020/02/23
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "list.h"
#include <malloc.h>
/********************************************************************************************************
*@brief:  初始化，构造一个空的线性表
*@param:  
*@return: 
*@warning:
*@Author:  haihui_deng@163.com 2020/02/23
********************************************************************************************************/
tyList* InitList(void)
{
    tyList* ptyList;
    ptyList = (tyList*)malloc(sizeof(tyList));
    ptyList->Data = 0;
    ptyList->Next = ptyList;
    ptyList->Pre = ptyList;
    return ptyList;
}

/********************************************************************************************************
*@brief:  销毁线性表
*@param:  
*@return: 
*@warning:
*@Author:  haihui_deng@163.com 2020/02/23
********************************************************************************************************/
void DestoryList(tyList* List)
{
    tyList* p = List;
    while (p->Next != NULL)
    {
        
    }
    
}
void CleanList(tyList* L)
{
    while (L->Next != )
    {
        /* code */
    }
    

}
void IsListEmpty(tyList* L);