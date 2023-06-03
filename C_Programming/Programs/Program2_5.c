// Accept the number from user and check whether number is even or odd


#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define true 1
#define false 0

bool CheckEvenOrOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOrOdd(iValue);
    if(bRet == true)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }


    return 0;
}

/*
while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %  2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;
    }
*/