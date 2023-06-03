// Write a program which accept string from user and accept one character. Return index
// of first occurence of that character

/*

Input :  "Marvellous Multi OS"
          M
          
Output:  2

Input : "Marvellous Multi OS"
         W

Output : 0

*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    for(iCnt = 0; *str<(*str-1); *str++)
    {
        if(str[iCnt] == ch)
        {
            break;
        }
    }
    if(iCnt == *str)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }        
    
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("Character location is %d\n",iRet);

    return 0;
}