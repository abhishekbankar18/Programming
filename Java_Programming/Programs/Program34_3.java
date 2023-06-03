// Write a java program which accept N numbers from user and accept one 
//another number as NO, return index of last occurence of that NO

/*
    Input :     N:  6
                NO: 66
                Elements : 85   66  3   66  93  88

    Output :   3

    Input :     N:  6
                NO: 93
                Elements : 85   66  3   55  93  88

    Output :   4

    Input :     N:  6

                NO: 12

                Elements : 85   11  3   15  11  111

    Output :   -1
*/

import java.util.*;

public class Program34_3
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

        int iRet = nobj.LastOcc(iNo);
        System.out.println("Last occurence is "+iRet);
        
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

    public int LastOcc(int iNo)
    {
        int iRet = -1;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iRet = iCnt;
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
Last occurence is 3



Enter size of array
6

Enter number that you want to search
93

Enter the elements of array
85
66
3
66
93
88

Elements of array are :
85      66      3       66      93      88

Last occurence is 4



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

Last occurence is -1

*/