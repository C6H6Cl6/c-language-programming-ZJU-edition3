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
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

List Insert( List L, ElementType X )
{
	PtrToNode pX = (struct Node *)malloc(sizeof(struct Node *));
	pX -> Data = X;
	pX -> Next = NULL;

	List head = L;
	List p = head;
	
	while(p -> Next != NULL && p -> Next -> Data <= X)
	{
		p = p -> Next;
	}

	pX -> Next = p -> Next;
	p -> Next = pX;

	return head;
}