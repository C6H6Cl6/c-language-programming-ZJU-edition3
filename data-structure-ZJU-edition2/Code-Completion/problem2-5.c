#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    //L1 = Read();
    //L2 = Read();
    L = Merge(L1, L2);
    //Print(L);
    //Print(L1);
    //Print(L2);
    return 0;
}

List Merge( List L1, List L2 )
{
    List head = (struct Node *)malloc(sizeof(struct Node *));
    List head1 = L1;
    List head2 = L2;

    List p = head;
    List p1 = head1 -> Next;
    List p2 = head2 -> Next;

    while(head1 -> Next != NULL && head2 -> Next != NULL)
    {
        if(head1 -> Next -> Data <= head2 -> Next -> Data)
        {
            p -> Next = head1 -> Next;
            head1 -> Next = head1 -> Next -> Next;
            p = p -> Next;
            p -> Next = NULL;
        }
        else
        {
            p -> Next = head2 -> Next;
            head2 -> Next = head2 -> Next -> Next;
            p = p -> Next;
            p -> Next = NULL;
        }
    }

    if(head1 -> Next != NULL)
    {
        p -> Next = head1 -> Next;
        head1 -> Next = NULL;
    }
    if(head2 -> Next != NULL)
    {
        p -> Next = head2 -> Next;
        head2 -> Next = NULL;
    }

    return head;
}