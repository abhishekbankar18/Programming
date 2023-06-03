// Write a java  program which accept number from user and return the 
// Count of even digits

/*

    input :    2395
    Output :   1

    input :    1018
    Output :   2

    input :    -1018
    Output :    2

    input :    8462
    Output :   4
*/

import java.util.*;

public class Program33_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter Number :" );
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.CountEven(iNo);
        System.out.println("Count of even digits in " +iNo+ " is : "+iRet);
    }
}

class Digit
{
    public int CountEven(int iNo)
    {
        int iEvenCnt = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2)== 0)
            {
                iEvenCnt++;
            }
            iNo = iNo/10;
        }
        return iEvenCnt;
    }
}

/*

Please Enter Number :
2395
Count of even digits in 2395 is : 1

Please Enter Number :
1018
Count of even digits in 1018 is : 2

Please Enter Number :
-1018
Count of even digits in -1018 is : 2

Please Enter Number :
8462
Count of even digits in 8462 is : 4 

*/