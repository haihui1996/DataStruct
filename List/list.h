#ifndef __LIST_H__
#define __LIST_H__
#define DataType    int
typedef struct list
{
    DataType Data;
    struct list *pNext;
}tyList;

tyList* InitList(void);
void DestoryList(tyList* L);
void CleanList(tyList* L);
int IsListEmpty(tyList* L);
int ListLength(tyList *List);
void GetElem(tyList *List, unsigned int offset, tyList)


#endif
