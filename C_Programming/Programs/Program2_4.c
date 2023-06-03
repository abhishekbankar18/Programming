//Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    
    int iCnt = 0;

    for(iNo =0; iNo<=iFrequency; iNo++)
    {
        printf("%d\n",iNo);
    }

    

}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enetr frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}