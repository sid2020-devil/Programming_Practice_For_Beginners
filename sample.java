import java.sql.*; 
import java.sql.DriverManager;
import java.sql.Connection; 
class sample
    {
        public static void main(String args[])
            {  
                try
                    {  
                        //Class.forName("org.mariadb.jdbc.Driver"); 
                        Connection con=DriverManager.getConnection(  
                        "jdbc:mariadb://localhost:3306/amal","root","amalshibu");  
                        Statement stmt=con.createStatement();  
                        ResultSet rs=stmt.executeQuery("select * from emp");  
                        while(rs.next())  
                        System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getString(3));  
                        con.close();  
                    }
                    
                catch(Exception e)
                    { 
                        System.out.println(e);
                    }  
            }  
}  
