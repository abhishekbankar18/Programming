// Write a java program which accept N numbers from user and accept renge 
// and Display all elements from that range

/*
    Input :     N:  6
                Start: 60
                End: 90
                Elements : 85   66  3   76  93  88

    Output :   66   76  88

   Input :     N:  6
                Start: 30
                End: 50
                Elements : 85   66  3   76  93  88

    Output :   66   76  88

*/

import java.util.*;

public class Program34_4
{
    public static void main(String a[])
    {

        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter size of array");
        int iSize = sobj.nextInt();

        System.out.println("Enter the start Element ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the end Element ");
        int iNo2 = sobj.nextInt();

        NumberX nobj = new NumberX(iSize);

        nobj.Accept();

        nobj.Display();

        nobj.Display(iNo1,iNo2);
        
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

    public void Display(int iStart, int iEnd)
    {
        int iRet = -1;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}


/*
Enter size of array
6
Enter the start Element
60
Enter the end Element
90
Enter the elements of array
85
66
3
76
93
88
Elements of array are :
85      66      3       76      93      88

Output : 85      66      76      88



Enter size of array
6
Enter the start Element
30
Enter the end Element
50
Enter the elements of array
85
66
3
76
93
88
Elements of array are :
85      66      3       76      93      88

Output :  
*/