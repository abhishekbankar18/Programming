
// Write a java  program which accept number from user and return the 
// diffrence between summation of even digits and summation of odd digits

/*

    input :    2395
    Output :   -15  (2 - 17)

    input :    1018
    Output :   6    (8 - 2)

    input :    8440
    Output :   16   (16 - 0)

    input :    5733
    Output :   -18  (0 - 18)

*/

import java.util.*;

public class Program33_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter Number :" );
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountDiff(iNo);
        System.out.println("Difference is "+iRet);
    }
}

class Digit
{
    public int CountDiff(int iNo)
    {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;
        int iDiff = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            iNo = iNo/10;
        }
        return iDiff = iEvenSum - iOddSum;
    }
}

/*
Please Enter Number :
2395
Difference is -15

Please Enter Number :
1018
Difference is 6

Please Enter Number :
8440
Difference is 16

Please Enter Number :
5733
Difference is -18
*/