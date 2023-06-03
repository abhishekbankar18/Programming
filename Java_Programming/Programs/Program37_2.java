// Write Java program which accept number of rows and number of columns from user and display below pattern.

/*

Input : iRow = 4    iCol = 3

Output :    1   2   3
            1   2   3
            1   2   3
            1   2   3

*/

import java.util.*;

public class Program37_2
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
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }
}

/*

Enter number of rows :
4
Enter number of columns :
3
1       2       3
1       2       3
1       2       3
1       2       3

*/