// Count number of whitw spaces

#include<stdio.h>

int CountWhiteSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ') 
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

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhiteSpace(Arr);       // struprX(100)

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}