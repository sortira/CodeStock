import java.util.ArrayList;

public class Subs {
    public static ArrayList<String> makeSub(String s) {
        int n = s.length();
        ArrayList<String> subs = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                subs.add(s.substring(i, j));
            }
        }
        return subs;
    }

    public static void main(String[] args) {
        String a = "abcd";
        ArrayList<String> substrings = makeSub(a);
        for (String s : substrings) {
            System.out.println(s);
        }
    }
}
