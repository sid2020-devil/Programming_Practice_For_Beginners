import java.sql.*;
import java.util.Scanner;
class CreateAndInsert
{
public static void main(String aa[])throws ClassNotFoundException
{
	int n,roll,i;
	String nam;
	Scanner sc=new Scanner(System.in);
try 
{
// Register JDBC driver
	Class.forName("com.mysql.jdbc.Driver");
//Open a connection
	Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/university" , "root","s#elna29");
//Create a statement object
	Statement st=con.createStatement(); 
		System.out.println("Enter the roll no");  
		roll=sc.nextInt();  
		System.out.println("Enter the name");  
		nam=sc.next();
		st.executeUpdate("create table Student1(rollno int not null, name varchar(10)") ;
System.out.println("Table created"); 
		st.executeUpdate("insert into Student1(rollno,name) values('"+roll+"','"+nam+"')") ;
	System.out.println("Record inserted"); 
	con.close(); //Close the connection
}catch(SQLException e) { System.out.println("Error is " +e); }
}
}
