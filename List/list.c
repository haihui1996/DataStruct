//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//@FileName:  list.c
//@Path:      D:\DataStruct\List
//@Description: ��������
//@Copyright (c) 2020 Haihui Deng
//@Author     haihui_deng@163.com 2020/02/23
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "list.h"
#include <malloc.h>
/********************************************************************************************************
*@brief:  ��ʼ��������һ���յ����Ա�
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
*@brief:  �������Ա�
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