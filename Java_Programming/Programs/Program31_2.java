// Write a java program which accept string from user and count number of small characters

/*
    Input :     "Marvellous"

    Output :    9

*/


import java.util.*;

public class Program31_2 
{
    public static void main(String a[])
    {
        int iRet = 0;

        StringDemo sobj = new StringDemo();
        Scanner pobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = pobj.nextLine();

        iRet = sobj.CountSmall(s);
        System.out.println("Number of small case letters are "+iRet);

    }
}

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(((str.charAt(i)) >= 'a')&&((str.charAt(i))<='z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

/*
    Enter string :
            
        Marvellous
    
        Number of small case letters are 9
 */