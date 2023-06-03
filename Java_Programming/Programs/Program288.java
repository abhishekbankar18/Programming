/*
    *   *   *    *
    *   *   *    *
    *   *   *    *
    *   *   *    *

*/

import java.util.*;

public class Program288 
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
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

