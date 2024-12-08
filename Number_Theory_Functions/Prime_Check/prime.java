import java.util.ArrayList;
import java.util.List;

public class prime {
    public static boolean isPrime(int n) {
        if (n < 2)
            return false;
        if (n < 4)
            return true;
        if ((n & 1) == 0)
            return false;
        for (int i = 3; i * i <= n; i++)
            if (n % i == 0)
                return false;
        return true;
    }

    public static void main(String[] args) {
        int n = 50;
        if (isPrime(n))
            System.out.println("Prime");
        else
            System.out.println("Not Prime");
    }
}

