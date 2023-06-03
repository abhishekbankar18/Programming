// Write a program which accept string from user and accept one character. Check whether that
// character is present in string or not.

/*

Input :  "Marvellous Multi OS"
          e
          
Output:  TRUE

Input : "Marvellous Multi OS"
         w

Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    bool bRet = 0;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet==true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character is not found\n");

    }

    return 0;
}