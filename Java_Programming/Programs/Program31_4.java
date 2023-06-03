// Write a java program which accept string from user and check 
// whether it contains vowels in it or not

/*

    Input   :   "marvellous"

    Output  :   TRUE

    Input   :   "Demo"

    Output  :   TRUE

    Input   :   "xyz"

    Output  :   FALSE

*/

import java.util.*;

public class Program31_4
{
    public static void main(String arg[])
    {
        boolean bRet = false;

        StringDemo sobj = new StringDemo();
        Scanner pobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = pobj.nextLine();

        bRet = sobj.ChkVowel(s);
        if(bRet == true)
        {
            System.out.println("Given string contains Vowels ");
        }
        else
        {
            System.out.println("Given string do not contains Vowels ");
        }

    }   
}

class StringDemo
{
    public boolean ChkVowel(String str)
    {

        for(int i = 0; i<str.length();i++)
        {
            if(((str.charAt(i)=='a')) || ((str.charAt(i)<='e')) || ((str.charAt(i)=='i')) || ((str.charAt(i)<='o')) || ((str.charAt(i)<='u')))
            {
                return true;
            }
        }
        return false;
    }
}

/*
    Enter string :
    Marvellous
    Given string contains Vowels

    Enter string :
    Demo
    Given string contains Vowels

    Enter string :
    xyz
    Given string do not contains Vowels
*/