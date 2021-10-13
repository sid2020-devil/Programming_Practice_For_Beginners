import java.io.*;
import java.util.Scanner;
class prime{
    public static void main(String args[])
    {
        int i,flag=0;
        Scanner reader=new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n=reader.nextInt();
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(n==1)
            System.out.println("1 is neither a prime nor a composite number");
        else
        {
            if(flag==0)
                System.out.println(n+" is a prime number");
            else
                System.out.println(n+" is not a prime number");
        }
    }
}