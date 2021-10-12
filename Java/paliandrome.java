class palindrome
{
  public static void main(String arg[])
  {
  String s = "MALAYAM",r ="";
  int n = s.length(),c=0;
  for(int i = n-1;i>=0;i--)
  {
    r = r+s.charAt(i);
  }
    if(s.equals(r))
    {
      c = 1;
    }
    else
    {
      c = 0;
    }

  if(c==1)
    System.out.println("YES");
  else
  {
    System.out.println("YESs");
  }
}
}
