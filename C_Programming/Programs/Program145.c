// Accept string from user and also accept another character and check whether its available in string or not

#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
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

    bRet = Check(Arr,cValue);
    if(bRet==true)
    {
        printf("Character is present in the string\n");
    }
    else
    {
        printf("Character is not present in the string\n");

    }


    return 0;
}