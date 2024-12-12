import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;

public class Main {
    public static <T> Map<T, Integer> Count_Occurrences(List<T> arr) {
        HashMap<T, Integer> mpp = new HashMap<>();
        for (T i : arr) {
            mpp.put(i, mpp.getOrDefault(i, 0) + 1);
        }
        
        return mpp;
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
        
        Map<Integer, Integer> mpp = Count_Occurrences(vc);
        for (Map.Entry<Integer, Integer> it : mpp.entrySet()) 
        {
            System.out.println(it.getKey() + " " + it.getValue());
        }
    }
}
