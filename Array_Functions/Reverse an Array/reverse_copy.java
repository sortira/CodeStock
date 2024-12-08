import java.util.ArrayList;
import java.util.List;

public class reverse_copy {
    public static List<T> reverseCopy(List<T> vc) {
        int n = vc.size();
        List<T> rev = new ArrayList<>(n);
        for (int i = n - 1; i >= 0; i--) {
            rev.add(vc.get(i));
        }
        return rev;
    }

    public static void main(String[] args) {
        List<Integer> vc = new ArrayList<>() ;
        vc.add(1);
        vc.add(2);
        vc.add(3);
        
        List<Integer> rev = reverseCopy(vc);
        for (int i : rev) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}

// No builtin function to reverse an ArrayList and return a copy

