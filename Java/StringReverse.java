class StringReverse
{
	public static void main(String args[])
	{
		String a="Sample";
		System.out.println("Input String: "+a);
		System.out.print("Reverse String: ");
		char[] str=a.toCharArray();
		int len=a.length();
		for(int i=len-1;i>=0;i--)
		{
			System.out.print(str[i]);
		}
	}
}