// Write a program which accept number from user and check whether it contains 0 in it or not.

// Input : 2395
// Output : There is no zero 

// Input : 1018
// Output : It contains zero 

// Input : 2395
// Output : It contains zero 

// Input : 2395
// Output : It contains zero 

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

bool ChkZero(int iNo)
{
    int iDigit = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

   
    while(iNo > 0)
    {   
        if(iDigit = iNo % 10 == 0)
        {
            return true;
        }
        iNo = iNo / 10;        
    }
    return false;   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It Contains zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }


    return 0;
}