import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Main {
    public static <T> void reverseInPlace(List<T> list) {
        int start = 0;
        int end = list.size() - 1;

        while (start < end) {
            Collections.swap(list, start, end);
            start++;
            end--;
        }
    }

    public static void main(String[] args) {
        List<Integer> list = Arrays.asList(1, 2, 3);
        reverseInPlace(list);
        for (int i : list) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}


