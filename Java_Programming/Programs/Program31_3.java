// Write a program in java which accept string from user and return 
// difference between frequency of small characters and frequency
// of capital characters

/*

    Input   :   "MarvellouS"

    Output  :   6 (8 - 2)

*/

import java.util.*;

public class Program31_3 
{
    public static void main(String arg[])
    {
        int iRet = 0;

        StringDemo sobj = new StringDemo();
        Scanner pobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = pobj.nextLine();

        iRet = sobj.CountDiff(s);
        System.out.println("Difference is : "+iRet);

    }   
}

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCapCnt = 0;
        int iSmallCnt = 0;
        int iDiff = 0;

        for(int i = 0; i<str.length();i++)
        {
            if(((str.charAt(i)>='A'))&&((str.charAt(i)<='Z')))
            {
                iCapCnt++;
            }
            else
            {
                iSmallCnt++;
            }
        }
        iDiff = iSmallCnt - iCapCnt;
        return iDiff;
    }
}

/*
    Enter string :
    MarvellouS
    
    Difference is : 6
 */