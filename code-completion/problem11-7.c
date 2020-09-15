#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );

void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

struct ListNode *readlist()
{
    // 声明链表的头指针
    struct  ListNode *head = NULL;

    // 声明本轮输入的数字
    int number;

    scanf("%d", &number);
    while(number != -1)
    {
        // 声明本轮使用的节点p
        struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p -> data = number;
        p -> next = NULL;

        struct ListNode *last = head;
        // 非首节点
        if(last != NULL)
        {
            while(last -> next != NULL)
            {
                last = last -> next;
            }

            last -> next = p;
        }
        else
        {
            head = p;
        }

        scanf("%d", &number);
    }

    return head;
}

struct ListNode *getodd( struct ListNode **L )
{
    // 定义奇数节点链表
    struct ListNode* oddList = NULL;
    // 定义偶数节点链表
    struct ListNode* evenList = NULL;
    // 定义L临时链表
    struct ListNode* tempList = *L;

    while(tempList != NULL)
    {
        if(tempList -> data % 2 == 1)
        {
            // 声明本轮使用的节点p
            struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p -> data = tempList -> data;
            p -> next = NULL;
    
            struct ListNode *last = oddList;
            // 非首节点
            if(last != NULL)
            {
                while(last -> next != NULL)
                {
                    last = last -> next;
                }
    
                last -> next = p;
            }
            else
            {
                oddList = p;
            }
        }
        if(tempList -> data % 2 == 0)
        {
            // 声明本轮使用的节点p
            struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p -> data = tempList -> data;
            p -> next = NULL;
    
            struct ListNode *last = evenList;
            // 非首节点
            if(last != NULL)
            {
                while(last -> next != NULL)
                {
                    last = last -> next;
                }
    
                last -> next = p;
            }
            else
            {
                evenList = p;
            }
        }
        tempList = tempList -> next;
    }

    *L = evenList;
    return oddList;
}