//convert kmph to m/s and vice versa
import java.io.*;
 
class convert
{
    static int kmh_to_ms(double kmh)
    {
        return(int) (0.28 * kmh);
    }
     
    static int ms_to_kmh(double ms)
    {
        return(int) (3.6 * ms);
    }
     
    public static void main (String args[])
    {
        double kmh = 72.0;
         
        double ms = 10.0;
         
        System.out.println("speed in m/s = " + kmh_to_ms(kmh)
                          + " speed in km/h = " +ms_to_kmh(ms));
     
    }
}
 
