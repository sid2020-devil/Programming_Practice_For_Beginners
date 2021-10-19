import java.io.*;
public class Frequency
{
	public static void main(String[] args)throws IOException
	{
		String str ="This website is awesome.";
		InputStreamReader in = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(in);
		char ch;
		System.out.println("enter a character");
		ch=(char)br.read();
		int frequency = 0;
		for(int i=0;i<str.length();i++)
			if(ch==str.charAt(i))
				++frequency;
		System.out.println("Frequency of "+ ch +" = "+frequency);
	}
}
