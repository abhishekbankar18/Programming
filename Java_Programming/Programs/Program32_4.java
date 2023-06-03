// Write a java program which accept N numbers from user and 
// display all such which are divisible by 3 and 5

/*
    Input :     N:  6

                Elements : 85   66  3   15  93  88

    Output :   80
*/

import java.util.*;

public class Program32_4
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

        aobj.DivisibleByThreeAndFive();
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

    public void DivisibleByThreeAndFive()
    {
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            if(((Arr[iCnt] % 3) == 0)&& ((Arr[iCnt] % 5) == 0))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }   
    }
}

/* 
Enter size of array
6
Enter the elements of array
85
66
3
15
93
88
Elements of array are :
85      66      3       15      93      88
  15
*/