import java.util.Arrays;

public class InverseFactorials {
    public static long[] computeInverseFactorials(int n, int MOD) {
        long[] factorial = new long[n + 1];
        long[] inverseFactorial = new long[n + 1];

        // Calculate factorial modulo MOD
        factorial[0] = 1;
        for (int i = 1; i <= n; i++) {
            factorial[i] = (factorial[i - 1] * i) % MOD;
        }

        // Compute modular inverse of n! 
        inverseFactorial[n] = modPow(factorial[n], MOD - 2, MOD);

        // Calculating all inverse factorials using recursive property:
        for (int i = n - 1; i >= 0; i--) {
            inverseFactorial[i] = (inverseFactorial[i + 1] * (i + 1)) % MOD;
        }

        return inverseFactorial;
    }


    public static long modPow(long base, long exp, int MOD) {
        long result = 1;
        while (exp > 0) {
            if ((exp & 1) == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }

    public static void main(String[] args) {
        int n = 10;
        int MOD = 1_000_000_007; // Example modulus
        long[] invFact = computeInverseFactorials(n, MOD);

        // Print the results for the example case
        System.out.println("Inverse Factorials (mod " + MOD + "): " + Arrays.toString(invFact));
    }
}
