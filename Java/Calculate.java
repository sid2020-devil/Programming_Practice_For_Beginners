import java.util.Scanner;
class AddClass
{
	int x,y;
	AddClass(int a,int b)
	{
	  x=a;
	  y=b;
	}
	public void add()
	{
	    System.out.println("Sum is : "+(x+y));  
	}
}
class SubClass
{
	int x,y;
	SubClass(int a,int b)
	{
	  x=a;
	  y=b;
	}
	public void sub()
	{
	    System.out.println("Difference is : "+(x-y));  
	}
}
class MulClass
{
	int x,y;
	MulClass(int a,int b)
	{
	  x=a;
	  y=b;
	}
	public void mul()
	{
	    System.out.println("Product is : "+(x*y));  
	}
}
class DivClass
{
	int x,y;
	DivClass(int a,int b)
	{
	  x=a;
	  y=b;
	}
	public void div()
	{ 
	    System.out.println("Quotient is : "+(x/y));
	}
}
class Calculate
{
	public static void main(String args[])
	{
	  int x,y;
	  Scanner S=new Scanner(System.in);
	  System.out.println("Addition");
	  System.out.print("Enter first element: ");
	  x=S.nextInt();
	  System.out.print("Enter second element: ");
	  y=S.nextInt();
	  AddClass obj1=new AddClass(x,y);
	  obj1.add();
	  
	  System.out.println("Subtraction");
	  System.out.print("Enter first element: ");
	  x=S.nextInt();
	  System.out.print("Enter second element: ");
	  y=S.nextInt();
	  SubClass obj2=new SubClass(x,y);
	  obj2.sub();

	  System.out.println("Multiplication");
	  System.out.print("Enter first element: ");
	  x=S.nextInt();
	  System.out.print("Enter second element: ");
	  y=S.nextInt();
	  MulClass obj3=new MulClass(x,y);
	  obj3.mul();

	  System.out.println("Division");
	  System.out.print("Enter first element: ");
	  x=S.nextInt();
	  System.out.print("Enter second element: ");
	  y=S.nextInt();
	  DivClass obj4=new DivClass(x,y);
	  obj4.div();
	}
}


