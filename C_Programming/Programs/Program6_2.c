//  Write a program which accept one number from user and check whether that number is greater than 100 or not

// Input : 101
// Output : Greater

// Input : 39
// Output : Smaller



#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet==1)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }


    return 0;
}