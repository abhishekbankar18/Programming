// Write a program which accept string from user and accept one character. Return index
// of last occurence of that character

/*

Input :  "Marvellous Multi OS"
          M
          
Output:  11

Input : "Marvellous Multi OS"
         W

Output : -1

Input : "Marvellous Multi OS"
         e

Output : 4

*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    
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

    iRet = LastChar(Arr,cValue);

    printf("Character frequency is %d\n",iRet);

    return 0;
}