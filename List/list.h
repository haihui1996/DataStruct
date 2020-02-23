#ifndef __LIST_H__
#define __LIST_H__
#define DataType    int
typedef struct list
{
    DataType Data;
    struct list *Pre;
}tyList;

tyList* InitList(void);
void DestoryList(tyList* L);
void CleanList(tyList* L);
void IsListEmpty(tyList* L);


#endif
