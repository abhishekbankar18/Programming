// Write Java program which accept number of rows and number of columns from user and display below pattern.

/*
    Input : iRow = 4    iCol = 4

    Output :    A   B   C   D
                a   b   c   d
                A   B   C   D
                a   b   c   d
    */

import java.util.*;


public class Program36_2
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
        char cAnt = 'A';
        char cBnt = 'B';
        char cCnt = 'C';
        char cDnt = 'D';

        for(i=1; i<=iRow; i++)
        {
            for(j=1; j<=iCol; j++)
            {   
                if(j == 1)
                {
                    System.out.print(cAnt+"\t");
                }
                if(j == 2)
                {
                    System.out.print(cBnt+"\t");
                }
                if(j == 3)
                {
                    System.out.print(cCnt+"\t");
                }
                if(j == 4)
                {
                    System.out.print(cDnt+"\t");
                }
            }
            System.out.println();
        }
    }
}

/*

Enter number of rows :
3
Enter number of columns :
5

A       A       A       A       A
B       B       B       B       B
C       C       C       C       C  

*/