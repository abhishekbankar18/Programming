// Write a java program which accept string from user and count number of capital characters

/*
    Input :     "Marvellous Multi OS"

    Output :    4

 */

import java.util.*;
public class Program31_1
{
    public static void main(String arg[])
    {
        int iRet = 0;

        StringDemo pobj = new StringDemo();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = sobj.nextLine();

        iRet = pobj.CountCapital(s);
        System.out.println("Number of Capital letters present in string are "+iRet);
    }
}

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    } 
}

/*

Enter string :
Marvellous Multi OS
Number of Capital letters present in string are 4

 */