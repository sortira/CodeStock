import java.util.*;

public class upper_bound {

    public static int upperBound(List<Integer> a, int key) {
        int l = 0, r = a.size() - 1;
        int ans = r+1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a.get(mid) > key) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        List<Integer> a = Arrays.asList(1, 2, 2, 2, 2, 3, 3, 5);
        int key = 2;
        int uBound = upperBound(a, key);
        System.out.printf("Upper Bound of '%d' is: %d\n", key, uBound);
    }
}
