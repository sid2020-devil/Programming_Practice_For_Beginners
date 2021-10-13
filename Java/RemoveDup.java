import java.util.*;
 
class RemoveDup {
 
    public static void main(String[] args) {
 
        Object[] data = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, "all", "all", "bone", "bone", "c", "d"};
        Arrays.stream(data).distinct().forEach((o) -> System.out.printf("%s ", o));
    }
}
