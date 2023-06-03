// Write a program which accept string from user and accept one character. Return frequency
// of that character

/*

Input :  "Marvellous Multi OS"
          M
          
Output:  2

Input : "Marvellous Multi OS"
         W

Output : 0

*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is %d\n",iRet);

    return 0;
}