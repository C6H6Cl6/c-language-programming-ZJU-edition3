#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );

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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
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

struct ListNode *deletem( struct ListNode *L, int m )
{
    // 声明删除特定数字后的节点链表
    struct ListNode *returnList = NULL;
    while(L != NULL)
    {
        if(L -> data != m)
        {
            struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p -> data = L -> data;
            p -> next = NULL;

            struct ListNode *last = returnList;
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
                returnList = p;
            }
        }
        L = L -> next;
    }
    return returnList;
}