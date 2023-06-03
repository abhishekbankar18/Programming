// Write a java program which accept N numbers from user and 
// return diffrence between summation of even elements and summation of odd elements 

/*
    Input :     N:  6
                Elements : 85   66  3   80  93  88

    Output :    53  (234 - 181)
*/

import java.util.*;

public class Program32_1 
{
    public static void main(String a[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter size of array");
        int iSize = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo(iSize);

        aobj.Accept();

        aobj.Display();

        iRet = aobj.Difference();
        System.out.println("Difference is : "+iRet);

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

class ArrayDemo extends ArrayX
{
    public ArrayDemo(int iSize)
    {
        super(iSize);
    }
    public int Difference()
    {
        int iEvenSum = 0, iOddSum = 0, iDiffEvenOdd = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iEvenSum = iEvenSum + Arr[iCnt];
            }
            else
            {
                iOddSum = iOddSum + Arr[iCnt];
            }
        }
        System.out.println("Addition of even elements is "+iEvenSum);
        System.out.println("Addition of odd elements is "+iOddSum);

        iDiffEvenOdd = iEvenSum - iOddSum;

        return iDiffEvenOdd;
    }
}

/* 
Enter size of array
6
Enter the elements of array
85
66
3
80
93
88
Elements of array are :
85      66      3       80      93      88
Addition of even elements is 234
Addition of odd elements is 181
Difference is : 53 
*/