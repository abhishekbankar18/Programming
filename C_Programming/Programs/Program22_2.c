// Accept number of rows and number of columns from user and display below pattern

// Input : iRow = 4     iCol = 4

//Output :  *   *   *   *
//          *   *   *   #
//          *   *   #   #
//          *   #   #   #

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;


    for(i = 1; i<=iRow;i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            if((i == iRow) && (j>1))
            {
                printf("#\t");
            }
            else if((i == iRow-1)&&(j>2))
            {
                printf("#\t"); 
            }
            else if((i == iRow-2) && (j>3))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }            
        }
        
/*
        if((i>1) && (j>1)&& (((iCol-j)+(iRow-i))<=(iCol-2)))
        {
            printf("");
        }

        printf("\n");
*/
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