// Write a java program which accept N numbers from user and accept one 
//another number as NO, return index of first occurence of that NO

/*
    Input :     N:  6
                NO: 66
                Elements : 85   66  3   55  93  88

    Output :   1

    Input :     N:  6
                NO: 12
                Elements : 85   11  3   15  11  111

    Output :   -1
*/

import java.util.*;

public class Program34_2
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

        int iRet = nobj.FirstOcc(iNo);
        System.out.println("First occurence is "+iRet);
        
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

    public int FirstOcc(int iNo)
    {
        int iRet = -1;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iRet = iCnt;
                break;
            }
        }
        return iRet;
    }
}


/*

Enter size of array
6

Enter number that you want to search
66

Enter the elements of array
85
66
3
66
93
88

Elements of array are :
85      66      3       66      93      88

First occurence is 1



Enter size of array
6

Enter number that you want to search
12

Enter the elements of array
85
11
3
15
11
111

Elements of array are :
85      11      3       15      11      111

First occurence is -1 

*/