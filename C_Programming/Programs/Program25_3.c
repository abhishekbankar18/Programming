// Write a program which accept string from user and return difference between frequency of
// small characters and frequency of capital characters

/*

Input :   "Marvellous"

Output :   6    (8-2)

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCntCap = 0;
    int iCntSmall = 0;


    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z' ))
        {
            iCntCap++;
        }
        else if((*str >= 'a') && (*str <= 'z' ))
        {
            iCntSmall++;
        }
        str++;
    }
    return iCntSmall-iCntCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d\n",iRet);

    return 0;
}