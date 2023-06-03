// Write a java program which accept string from user and display it in reverse order

/*
    Input :     "MarvelloS"

    Output :    "SuollevraM"
*/

import java.util.*;

public class Program31_5 
{
    public static void main(String arg[])
    {
        StringDemo sobj = new StringDemo();
        Scanner pobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String s = pobj.nextLine();

        sobj.Reverse(s);

        System.out.println("Reverse string is : "+s);
    }
}

class StringDemo
{
    public void Reverse(String str)
    {
        char[] temp2 = str.toCharArray();
        int i , j = 0;
        j = temp2.length-1 ;

        for(i = 0; i < j; i++,j--)
        {
            char temp1 = temp2[i];
            temp2[i] = temp2[j];
            temp2[j] = temp1;
        }

        for(char c : temp2);
        System.out.print(str.toCharArray());  
        System.out.println();
    }
}

/*
// Accept string from user and reverse it

#include<stdio.h>

void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }    
}

int main()
{
    char Arr[20];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
} */

/*// Java program to Reverse a String using swapping
// of variables
import java.lang.*;
import java.io.*;
import java.util.*;

// Class of ReverseString
class ReverseString {
	public static void main(String[] args)
	{
		String input = "Geeks For Geeks";
		char[] temparray = input.toCharArray();
		int left, right = 0;
		right = temparray.length - 1;

		for (left = 0; left < right; left++, right--) {
			// Swap values of left and right
			char temp = temparray[left];
			temparray[left] = temparray[right];
			temparray[right] = temp;
		}

		for (char c : temparray)
			System.out.print(c);
		System.out.println();
	}
}
 */