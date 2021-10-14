import java.util.*;
public class Solution
{
 	public static void main(String[] args)
 	{
			System.out.println("Enter your string * and #");
        		Scanner sc=new Scanner(System.in);
        		String str=sc.next();
			int n1=0,n2=0;
			int x=str.length();
        		for(int i=0;i<x;i++)
        		{
                 		if(str.charAt(i)=='*')
                        		n1++;
                 		else if(str.charAt(i)=='#')
                         		n2++;
        		}
			
        		System.out.println(n1-n2);
	}
}
