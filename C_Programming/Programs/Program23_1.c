// Accept Character from user and check whether it is alphabet or not (A-Z a-z).

/*

Input : F
Output : TRUE

Input : &
Output : FALSE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}

/*

Enter the character
a
it is Character

Enter the character
z
it is Character

Enter the character
A
it is Character

Enter the character
Z
it is Character

Enter the character
4
It is not a Character

Enter the character
#
It is not a Character

*/