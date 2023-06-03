

import java.util.Scanner;

public class ProgramX {
	public static void main(String[] args) {
		int len;
		System.out.println("Enter how many elements are enter in the array");
		Scanner sc=new Scanner(System.in);
		len=sc.nextInt();
		int a[]=new int[len];
		System.out.println("Enter elements");
		for(int i=0;i<len;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.println("Display array elements");
		for(int i=0;i<len;i++)
		{
			System.out.print(a[i]+"  ");
		}
		System.out.println();
		System.out.println("addition of elements");
		int add=0;
		for(int i=0;i<len;i++)
		{
			add=add+a[i];
		}
		System.out.println(add);
		
		System.out.println("addition of even elements");
		int even=0;
		for(int i=0;i<len;i++)
		{
			if(a[i]%2==0)
			{
				even=even+a[i];
			}
		}
		System.out.println(even);
		
		System.out.println("addition of odd elements");
		int odd=0;
		for(int i=0;i<len;i++)
		{
			if(a[i]%2==1)
			{
				odd=odd+a[i];
				
			}
		}
		System.out.println(odd);
		
		System.out.println("subtract odd from even=");
		int sub=even-odd;
		System.out.println(sub);
	}
}