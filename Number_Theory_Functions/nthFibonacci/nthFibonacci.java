// Java Implementation
public class FibonacciFormula {

    public static long nthFibonacci(int n) {
        /**
         * Returns the n-th Fibonacci number using Binet's formula.
         */
        double phi = (1 + Math.sqrt(5)) / 2;
        double psi = (1 - Math.sqrt(5)) / 2;
        return Math.round((Math.pow(phi, n) - Math.pow(psi, n)) / Math.sqrt(5));
    }

    public static void main(String[] args) {
        // Example use cases
        int[] testCases = {0, 1, 2, 5, 10, 20, 50};
        for (int n : testCases) {
            System.out.println("F(" + n + ") = " + nthFibonacci(n));
        }
    }
}