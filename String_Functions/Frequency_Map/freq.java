import java.util.ArrayList;
import java.util.List;
import java.util.HashMap;
import java.util.Map;

public class freq {
    public static <T> Map<T,Integer> freqMap(List<T> vc) {
        Map<T, Integer> mp = new HashMap<>();
        for(int i=0;i<vc.size(); i++){
            mp.put(vc.get(i), mp.getOrDefault(vc.get(i), 0) + 1);
        }
        return mp;
    }

    public static void main(String[] args) {
        List<Integer> vc = new ArrayList<>() ;
        vc.add(1);
        vc.add(2);
        vc.add(3);
        vc.add(1);
        Map<Integer, Integer> mp = freqMap(vc);
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) 
            System.out.println("Key = " + entry.getKey() +
                             ", Value = " + entry.getValue());
    }
}

