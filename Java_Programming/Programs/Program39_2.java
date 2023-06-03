/*

Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : Hello

H   e   l   l   o
H   e   l   l   *
H   e   l   *   *
H   e   *   *   *
H   *   *   *   *

*/

import java.util.*;

public class Program39_2
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
        
        for(i = 0; i < str.length(); i++)
        {
            for(j=0;j<str.length()-i;j++)
            {
                System.out.print(str.charAt(j)+"\t");
            }
            for(j=0;j<i;j++)
            {
                System.out.print('*'+"\t");
            }
            System.out.println();
        }
        
    }
}

/*

Enter string :
Hello
H       e       l       l       o
H       e       l       l       *
H       e       l       *       *
H       e       *       *       *
H       *       *       *       *
*/