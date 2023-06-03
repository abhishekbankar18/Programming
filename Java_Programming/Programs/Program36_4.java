// Write Java program which accept number of rows and number of columns from user and display below pattern.

/*
    Input : iRow = 4    iCol = 5

    Output :    4   4   4   4   4
                3   3   3   3   3
                2   2   2   2   2
                1   1   1   1   1
*/

import java.util.*;

public class Program36_4
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int j = sobj.nextInt();

        pobj.Display(i,j);
    }
}

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        int iCnt = iRow;

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                if(i == 1)
                {
                    System.out.print(iCnt+"\t");
                }
                if(i == 2)
                {
                    System.out.print(iCnt+"\t");
                }
                if(i == 3)
                {
                    System.out.print(iCnt+"\t");
                }
                if(i == 4)
                {
                    System.out.print(iCnt+"\t");
                }
            }
            System.out.println();
            iCnt--;
        }
    }
}


