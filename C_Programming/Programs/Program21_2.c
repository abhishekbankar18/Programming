// Accept number of rows and number of columns from user and display below pattern

// Input : iRow = 4     iCol = 5

//Output :  2   4   6   8   10
//          1   3   5   7   9
//          2   4   6   8   10
//          1   3   5   7   9

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = 1,l=2;

    for(i = 1; i<=iRow;i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",k);
                k=k+2;
                if(k>9)
                k=1;
            }
            else if(i%2 != 0)
            {
                printf("%d\t",l);
                l=l+2;
                if(l>10)
                l=2;
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}