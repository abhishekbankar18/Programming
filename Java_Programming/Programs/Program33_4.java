// Write a java  program which accept number from user and return the 
// multiplication of all digits

/*

    input :    2395
    Output :   270

    input :    1018
    Output :   8

    input :    9440
    Output :   144

    input :    922432
    Output :   864

*/


import java.util.*;

public class Program33_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter Number :" );
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();

        int iRet = dobj.Multiply(iNo);
        System.out.println("Multiplication is "+iRet);
    }
}

class Digit
{
    public int Multiply(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iNo = iNo/10;
        }
        return iMult;
    }
}

/*

Please Enter Number :
2395
Multiplication is 270

Please Enter Number :
1018
Multiplication is 8

Please Enter Number :
9440
Multiplication is 144

Please Enter Number :
922432
Multiplication is 864

*/