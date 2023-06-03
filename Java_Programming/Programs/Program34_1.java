// Write a java program which accept N numbers from user and accept one 
//another number as No, check whether NO is present or not

/*
    Input :     N:  6
                NO: 66
                Elements : 85   66  3   55  93  88

    Output :   TRUE

    Input :     N:  6
                NO: 12
                Elements : 85   66  3   55  93  88

    Output :   FALSE
*/

import java.util.*;

public class Program34_1
{
    public static void main(String a[])
    {

        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter size of array");
        int iSize = sobj.nextInt();

        System.out.println("Enter number that you want to search ");
        int iNo = sobj.nextInt();

        NumberX nobj = new NumberX(iSize);

        nobj.Accept();

        nobj.Display();

        boolean bRet = nobj.Check(iNo);
        if(bRet==true)
        {
            System.out.println(" Number is present in array ");
        }
        else
        {
            System.out.println("Number is not present in array ");
        }
    }
}

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter the elements of array");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

class NumberX extends ArrayX
{
    public NumberX(int iSize)
    {
        super(iSize);
    }

    public boolean Check(int iNo)
    {
        boolean bTemp = false;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                return true;
            }
        }
        return bTemp;

    }
}
