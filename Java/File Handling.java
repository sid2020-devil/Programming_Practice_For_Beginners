import java.io.*;
class FileInt
{
	public static void main(String args[])throws IOException
	{
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(b.readLine());
		String s = "";
		int sum = 0;
		while(n>0)
		{
		s = s+""+n%10;
		sum = sum+n%10;
		n = n/10;
		}
		for(int k=s.length()-1;k>=0;k--)
		{
		System.out.println(s.charAt(k));
		}
		System.out.println(sum);
	}
}
		
		
