// write a program which accepts two numbers and check whether numbers are equal or not.

// Input : 10 10
// output : Equal

//Input : 10 12
//Output : Not Equal

//Input : 10 -10
//Output : Not Equal



#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1==iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter two numbers\n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);
    if(bRet == 1)
    {
        printf("Equal\n");
    }
    else
    {
        printf("not Equal\n");
    }


    return 0;
}
