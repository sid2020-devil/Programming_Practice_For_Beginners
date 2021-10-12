import java.util.Scanner;
class Area
{
		public void circleArea()
		{
		    Scanner S=new Scanner(System.in);
		    System.out.print("Enter circle radius: ");
		    float r=S.nextFloat();
		    System.out.println("Area of circle is: "+(r*r*3.14));
		}
		public void rectangleArea()
		{
		    Scanner S=new Scanner(System.in);
		    System.out.print("Enter rectangle length: ");
		    float l=S.nextFloat();
		    System.out.print("Enter rectangle width: ");
		    float w=S.nextFloat(); 
		    System.out.println("Area of rectangle is: "+(l*w));
		}
		public void triangleArea()
		{
		    Scanner S=new Scanner(System.in);
		    System.out.print("Enter triangle base: ");
		    float b=S.nextFloat();
		    System.out.print("Enter triangle height: ");
		    float h=S.nextFloat(); 
		    System.out.println("Area of triangle is: "+(0.5*b*h));
		}
	public static void main(String args[])
	{
		FindArea obj=new FindArea();
		System.out.println("To find area of Circle");
		obj.circleArea();
		System.out.println("To find area of Rectangle");
		obj.rectangleArea();
		System.out.println("To find area of Triangle");
		obj.triangleArea();
	}
}