import java.io.*;
class fact{
    public static void main(String args[])
    {
        int a=12,fact=1,p;
        System.out.println("a= "+a);
        p=a;
        while(p!=0)
        {
            fact=fact*p;
            p--;
        }
        System.out.println(a+"! = "+fact);
    }
}
