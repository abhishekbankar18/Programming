// Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>

void CheckVowel(char cValue)
{
    if(cValue == 'A'|| cValue == 'a' ||cValue=='E'|| cValue == 'e' || cValue == 'I'|| cValue == 'i' || cValue == 'O'|| cValue == 'o' || cValue == 'U'|| cValue == 'u')
    {
        printf("Character %c is vowel\n",cValue);
    }
    else
    {
        printf("Character %c is not vowel\n",cValue);
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    CheckVowel(cValue);

    return 0;
}