// Accept number and display even factors

import java.util.*;


public class Program251
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorsDisplay(iNo);
    }
}

class Numbers
{
    public void EvenFactorsDisplay(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                if((iCnt % 2 )== 0)
                {
                    System.out.println("Even factor is : "+iCnt);
                }
            }
        }
    }
}
