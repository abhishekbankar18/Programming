// Write a program which displays ASCII table. Table contains symbol, Decimal,
// Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    
    int i = 0;

    printf("_________________________________________________\n");
    printf("ASCII table\n");
    printf("_________________________________________________\n");
    
    printf("Charcter\t Decimal\t Hex \t Octal");

    for(i = 0; i <= 127; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }

    printf("\n_______________________________________________\n");

} 

int main()
{
    DisplayASCII();

    return 0;
}