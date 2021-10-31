import java.sql.*;
import java.sql.*; 
import java.sql.DriverManager;
import java.sql.Connection; 
class Mysql1
{
public static void main(String aa[])throws ClassNotFoundException
{

try 
{
// Register JDBC driver
//Class.forName("org.mariadb.jdbc.Driver");
//Open a connection
	Connection con=DriverManager.getConnection("jdbc:mariadb://localhost:3306/test2","root","amalshibu");
//Create a statement object
	Statement st=con.createStatement(); 
	st.executeUpdate("CREATE TABLE table4 (rollno int, name varchar(15))");
	//System.out.println("Table created"); 
	con.close(); //Close the connection
}catch(SQLException e) { System.out.println("Error is " +e); }
}
}