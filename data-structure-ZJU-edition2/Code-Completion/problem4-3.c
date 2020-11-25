#include <stdio.h>
#include <stdlib.h>

typedef enum { false, true } bool;
typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree BuildTree(); /* 由裁判实现，细节不表 */
bool IsBST ( BinTree T );

int main()
{
    BinTree T;

    T = BuildTree();
    if ( IsBST(T) ) printf("Yes\n");
    else printf("No\n");

    return 0;
}

bool IsBST(BinTree T)
{
	if(T == NULL)
	{
		return true;
	}

	// 如果左孩子存在
	if(T -> Left != NULL)
	{
		// 如果左孩子键值大
		if(T -> Left -> Data > T -> Data)
		{
			return false;
		}

		// 如果左子树不是搜索二叉树
		if(!IsBST(T -> Left))
		{
			return false;
		}

		// 如果左子树最大值较大
		BinTree p = T -> Left;
		while(p -> Right):
		{
			p = p -> Right;
		}
		if(T -> Data < p -> Data)
		{
			return false;
		}

	}

	// 如果右孩子存在
	if(T -> Right != NULL)
	{
		// 如果右孩子键值小
		if(T -> Right -> Data > T -> Data)
		{
			return false;
		}

		// 如果右子树不是搜索二叉树
		if(!IsBST(T -> Right))
		{
			return false;
		}

		// 如果右子树最小值较小
		BinTree p = T -> Right;
		while(p -> Left):
		{
			p = p -> Left;
		}
		if(T -> Data > p -> Data)
		{
			return false;
		}

	}

	return true;

}