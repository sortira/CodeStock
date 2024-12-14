import java.util.Scanner;

public class Main {
    public static int gcd(int a, int b) {
        if (a==0 && b==0)
            return -1; // Undefined for (0, 0)
        if (a==0)
            return b;
        if (b==0)
            return a;

        if (a<0)
            a = -a;
        if (b<0)
            b = -b;

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        int a = 111;
        int b = 37;

        int ans = gcd(a, b);
        if (ans==-1)
            System.out.println("GCD is undefined for (0, 0)");
        else
            System.out.println(ans);
    }
}
