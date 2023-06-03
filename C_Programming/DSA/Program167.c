#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next=*First;
        *First= newn;
    }

}

void Display(PNODE First)
{
    printf("Elements of linked list are\n");
    while(First != NULL)
    {
        printf("%d\t",First->data);
        First = First->next;
    }
    printf("\n");
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}