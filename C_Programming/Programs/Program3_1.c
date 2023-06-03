// Write a program which accept one number from user and print that number of even numbers on screen


#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt = 2; iCnt <= iNo; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                printf("%d\n",iCnt);
            }
        }
        
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enetr number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

