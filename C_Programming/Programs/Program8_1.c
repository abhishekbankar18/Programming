// Write a program which accept number from user and if nmber is less than 50
// then print small, if it is greater than 50 less than 100 then print medium,
// if it is greater than 100 then print large.

// Input : 75
// Output : Medium

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(50<iNo<100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    Number(ivalue);

    return 0;
}