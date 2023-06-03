
import java.util.*;

class public503
{
    public static void main(String Aarg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        HashMap < Character, Integer > hobj = new HashMap<>();
        int Frequency = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }

        Set <Character> setobj = hobj.keySet();

        for(char value : setobj)
        {
            System.out.println(value + " occures "+hobj.get(value)+ " times ");
        }
    }
}