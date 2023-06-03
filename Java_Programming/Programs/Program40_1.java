/*

Write a java program which accept number of rows and number of columns from
user and display below pattern.

input : iRow = 4    iCol = 4

Output :    *   *   *    #
            *   *   #    *
            *   #   *    *
            #   *   *    *

*/

import java.util.*;

public class Program40_1
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

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {
                if((i == 1)&&(j==iCol))
                {
                    System.out.print("#\t");
                }
                else if((i == 2)&&(j==(iCol-1)))
                {
                    System.out.print("#\t");
                }
                else if((i == 3)&&(j==(iCol-2)))
                {
                    System.out.print("#\t");
                }
                else if((i == 4)&&(j==(iCol-3)))
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }   
            }
            System.out.println();
        }
    }
}

