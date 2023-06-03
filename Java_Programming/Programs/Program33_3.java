// Write a java  program which accept number from user and return the 
// Count of digits in between 3 and 7

/*

    input :    2395
    Output :   1

    input :    1018
    Output :   2

    input :    4521
    Output :    2

    input :    9922
    Output :   0

*/

import java.util.*;

public class Program33_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter Number :" );
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountRange(iNo);
        System.out.println("Count of digits in between 3 and 7 in " +iNo+ " is : "+iRet);
    }
}

class Digit
{
    public int CountRange(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit < 7))
            {
                iCount++;
            }
            iNo = iNo/10;
        }
        return iCount;
    }
}

/*
Please Enter Number :
2395
Count of digits in between 3 and 7 in 2395 is : 1

Please Enter Number :
1018
Count of digits in between 3 and 7 in 1018 is : 0

Please Enter Number :
4521
Count of digits in between 3 and 7 in 4521 is : 2

Please Enter Number :
9922
Count of digits in between 3 and 7 in 9922 is : 0
*/