// Write a java  program which accept number from user and return the 
// Count of odd digits

/*

    input :    2395
    Output :   3

    input :    1018
    Output :   2

    input :    -1018
    Output :    2

    input :    8462
    Output :   0

*/

import java.util.*;

public class Program33_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter Number :" );
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountOdd(iNo);
        System.out.println("Count of odd digits in " +iNo+ " is : "+iRet);
    }
}

class Digit
{
    public int CountOdd(int iNo)
    {
        int iOddCnt = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0)
            {
                iOddCnt++;
            }
            iNo = iNo/10;
        }
        return iOddCnt;
    }
}

/*

Please Enter Number :
2395
Count of odd digits in 2395 is : 3

Please Enter Number :
-1018
Count of odd digits in -1018 is : 2

Please Enter Number :
8462
Count of odd digits in 8462 is : 0

Please Enter Number :
1018
Count of odd digits in 1018 is : 2

*/