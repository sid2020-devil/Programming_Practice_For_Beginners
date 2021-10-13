class findFrequency{
    public static void main(String args[])
    {
        String F = "Welcome to java programming";
        char ch='a';
        int len = F.length();
        int count=0;
        for(int i=0;i<len;i++)
        {
            if(ch==F.chatAt(i))
            {
                ++count;
            }
        }
        System.out.println("The count of a is: "+count);
    }
}