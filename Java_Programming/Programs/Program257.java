// Accept number from user and check it is armstrong number or not

import java.util.*;

public class Program257
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmstrong(iNo);

        if(bRet == true)
        {
            System.out.println(iNo+ " is a Armstrong number ");

        }
        else
        {
            System.out.println(iNo+ " is not a Armstrong number ");
        }
    }
}

class Digits
{
    public boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;
        int iDigitCount = 0;
        int iDigit = 0;
        int iCnt = 0;
        int iPower = 1;
        int iSum = 0;

        while(iTemp != 0)       // Logic to calculate no of digits
        {
            iDigitCount++;
            iTemp = iTemp/10;
        }
        
        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            for(iCnt = 1; iCnt <= iDigitCount; iCnt++) // Logic to calculate power
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;     //**************************************************
            
            iTemp = iTemp/10;
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }    
}
