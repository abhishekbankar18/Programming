// Write a program which accept string from user and display only digits from that string

/*
Input : "marve89llous121"

Output : 89121

Input : "Demo"

Output :

*/

#include<stdio.h>

int DisplayDigit(char *str)
{
    int iCnt = 0 , i =0;
    char brr[48];

    while(*str != '\0')
    {
        if((str[i] >= 0) && (str[i] <= 9))
        {
            str[i] = brr;
        }
        str++;
    }
    printf("%s",brr);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = DisplayDigit(arr);

    printf("Count of Numbers are %d",iRet);

    return 0;
}

