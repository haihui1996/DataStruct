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
tyList *InitList(void)
{
    tyList *ptyList;
    ptyList = (tyList *)malloc(sizeof(tyList));
    ptyList->Data = 0;
    ptyList->pNext = NULL;
    return ptyList;
}

/********************************************************************************************************
*@brief:  销毁线性表
*@param:  
*@return: 
*@warning:
*@Author:  haihui_deng@163.com 2020/02/23
********************************************************************************************************/
void DestoryList(tyList *List)
{
    tyList *p = List;
    while (1)
    {
        while (p->pNext != NULL)
        {
            p = p->pNext;   /* 定位到最后一个节点 */
        }
        free(p);
        p = List;
        if (p->pNext = NULL)
            break;
    }
    free(p);
}

/********************************************************************************************************
*@brief:  
*@param:  
*@return: 
*@warning:
*@Author:  haihui_deng@163.com 2020/02/23
********************************************************************************************************/
void CleanList(tyList *List)
{
    tyList *p = List;
    while (1)
    {
        while (p->pNext != NULL)
        {
            p = p->pNext;   /* 定位到最后一个节点 */
        }
        free(p);
        p = List;
        if (p->pNext = NULL)
            break;
    }
}
int IsListEmpty(tyList *L)
{

}