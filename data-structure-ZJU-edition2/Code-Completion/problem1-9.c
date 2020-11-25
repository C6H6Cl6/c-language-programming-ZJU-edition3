#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
typedef enum {false, true} bool;
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标0开始存储 */
void PrintList( List L ); /* 裁判实现，细节不表 */
bool Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;

    L = ReadInput();
    scanf("%d", &X);
    if ( Insert( L, X ) == false )
        printf("Insertion failed.\n");
    PrintList( L );

    return 0;
}

bool Insert( List L, ElementType X )
{
    if(L -> Last == MAXSIZE - 1)
    {
        return false;
    }

    for(int i = 0; i <= L -> Last; i++)
    {
        if(L -> Data[i] > X)
        {
            if(i == L -> Last)
            {
                L -> Data[i + 1] = X;
                L -> Last += 1;
                return true;
            }

            continue;
        }
        else if(L -> Data[i] == X)
        {
            return false;
        }
        else
        {
            for(int index = L -> Last; index >= i; index--)
            {
                L -> Data[index + 1] = L -> Data[index];
            }
            L -> Data[i] = X;
            L -> Last += 1;
            return true;
        }
    }

    return false;
}