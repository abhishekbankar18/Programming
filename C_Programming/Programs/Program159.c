// Accept two string first is filled & second is empty then fill the second string by the first string in lower case

#include<stdio.h>

void strcpyLwrX(char *src, char *dest)
{
    while(*src != '\0')
    {
        
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }        
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strcpyLwrX(Arr,Brr);       // strcpyX(100,200);

    printf("Original string is : %s\n",Arr);
    printf("Copied string is : %s\n",Brr);

    return 0;
}