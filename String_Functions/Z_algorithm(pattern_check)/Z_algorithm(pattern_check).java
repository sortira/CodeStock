import java.util.ArrayList;
import java.util.List;

public class ZFunction {

    public static List<Integer> zfunction(String text, String pattern) {
        // Handle edge case: empty pattern
        if (pattern.isEmpty()) {
            List<Integer> result = new ArrayList<>();
            for (int i = 0; i <= text.length(); ++i) {
                result.add(i);
            }
            return result;
        }

        // Create concatenated string "P$T"
        String concat = pattern + "$" + text;
        int n = concat.length();

        // Z-array to store lengths of the longest prefix substring starting from each position
        int[] Z = new int[n];
        int l = 0, r = 0;

        for (int i = 1; i < n; ++i) {
            if (i <= r)
                Z[i] = Math.min(r - i + 1, Z[i - l]);
            while (i + Z[i] < n && concat.charAt(Z[i]) == concat.charAt(i + Z[i]))
                ++Z[i];
            if (i + Z[i] - 1 > r) {
                l = i;
                r = i + Z[i] - 1;
            }
        }

        // Store positions where the pattern matches the text
        List<Integer> result = new ArrayList<>();
        for (int i = pattern.length() + 1; i < n; ++i) {  // Start after the "$" delimiter
            if (Z[i] == pattern.length()) {
                result.add(i - pattern.length() - 1);
            }
        }

        return result;
    }

    public static void main(String[] args) {
        String givenstring = "world peace";
        String pattern = "world";

        // Perform pattern search using Z algorithm
        List<Integer> result = zfunction(givenstring, pattern);

        if (result.isEmpty()) {
            System.out.println("-1");
        } else {
            System.out.print("Pattern found at index ");
            for (int index : result) {
                System.out.print(index + " ");
            }
            System.out.println();
        }
    }
}

