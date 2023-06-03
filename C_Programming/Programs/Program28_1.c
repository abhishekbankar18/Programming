/*

Write a program which search first occurence of particular element from singly linear 
linked list.
Function should return position at which element is found

Function Prototype :

int SearchFirstOcc(PNODE Head, int no);

Input Linked list : | 10 |->| 20 |->| 30 |->| 40 |->| 50 |->| 30 |->| 70 |

Input element : 30

Output : 3

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn ->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn ->Next = *Head;
        *Head = newn;
    }
    
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,201);
    InsertFirst(&First,301);
    InsertFirst(&First,401);
    InsertFirst(&First,501);
    InsertFirst(&First,601);
    
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}