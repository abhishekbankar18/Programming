//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Steps to follow while programming
//////////////////////////////////////////////////////////////////////////////////////////////////////////

// Step 1    Understand the problem statement
// Step 2    Write the algorithm
// Step 3    Decide the programming language
// Step 4    Write the program
// Step 5    Test the program

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem statement :  Display the division
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Algorithm
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START
        Values are given
        Send input yo function
            Divide the given input
        Display the division
    END
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Divide
//  Description :       Division of given numbers
//  Input :             Integer
//  Output :            Integer
//  Author :            Abhishek Uttam Bankar
//  Date :              21/10/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 > iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry point of the application
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15;
    int iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d\n",iRet);

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//
//  Output : Division is 3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////