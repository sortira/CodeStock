import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;

public class Main {
    public static <T> int countOccurrences(List<T> arr, T item) {
        HashMap<T, Integer> mpp = new HashMap<>();
        for (T i : arr) {
            mpp.put(i, mpp.getOrDefault(i, 0) + 1);
        }
        
        return mpp.getOrDefault(item, 0);
    }

    public static void main(String[] args) {
        List<Integer> vc = new ArrayList<>();
        vc.add(1);
        vc.add(2);
        vc.add(3);
        vc.add(5);
        vc.add(4);
        vc.add(4);
        vc.add(6);
        vc.add(3);
        vc.add(2);
        vc.add(3);
        vc.add(7);
        
        int val = 4;
        int count = countOccurrences(vc, val);
        System.out.println("Element: " + val);
        System.out.println("Occurrence: " + count);
    }
}
