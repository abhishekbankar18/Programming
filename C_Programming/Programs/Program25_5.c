// Write a program which accept string from user and display it in reverse order

/*

Input :   "MarvellouS"

Output :   "SuollevraM"

*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reverse string is : %s\n",arr);

    return 0;
}


/*
Enter string
MarvellouS
Reverse string is : SuollevraM
*/