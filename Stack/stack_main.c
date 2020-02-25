//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//@FileName:  stack_main.c
//@Path:      D:\DataStruct
//@Description:
//@Copyright (c) 2020 Haihui Deng
//@Author     haihui_deng@163.com 2020/02/25
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include "stack.h"
int main(int argc, char const *argv[])
{
    SqStack Stack;
    int i, Elem;
    InitStack(&Stack);
    for (i = 0; i < STACK_INIT_SIZE + STACK_INCREMENT; i++)
    {
        if (Push(&Stack, i) != OK)
        {
            printf("OverFlow: %d\n", i);
            break;
        }
    }

    for (i = 0; i < STACK_INIT_SIZE + STACK_INCREMENT; i++)
    {
        if (OK == Pop(&Stack, &Elem))
        {
            printf("%d ", Elem);
        }
    }

    return 0;
}
