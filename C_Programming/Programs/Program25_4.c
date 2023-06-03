// Write a program which accept string from user and check whether it contain vowels in it or not

/*

Input :   "Marvellous"
Output :  TRUE


Input :   "Demo"
Output :  TRUE


Input :   "xyz"
Output :  FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e' ) || (*str == 'i') || (*str == 'o' ) || (*str == 'e' ))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char arr[20];
    bool bRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet==true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }


    return 0;
}