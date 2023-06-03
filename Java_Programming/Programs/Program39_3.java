/*

Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : Hello

Output: H   #   #   #   #
        H   e   #   #   #
        H   e   l   #   #
        H   e   l   l   #
        H   e   l   l   o    

*/

import java.util.*;

public class Program39_3
{
    public static void main(String arg[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = sobj.nextLine();

        pobj.Display(s);
    }
}

class Pattern
{
    public void Display(String str)
    {
        int i = 0, j = 0;
        
        for(i=0;i<str.length();i++)
        {
            for(j=0;j<str.length();j++)
            {
                if(i>=j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }
                else
                {
                    System.out.print('#'+"\t");
                }
            }
            System.out.println();
        }
    }
}

/*

Enter string :
Hello

H       #       #       #       #
H       e       #       #       #
H       e       l       #       #
H       e       l       l       #
H       e       l       l       o

*/