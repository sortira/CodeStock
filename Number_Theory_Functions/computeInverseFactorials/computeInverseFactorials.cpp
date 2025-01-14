#include<bits/stdc++.h>
using namespace std;

vector<long long> inverseFactorials(int n, int MOD) {
    vector<long long> factorial(n + 1, 1);
    vector<long long> inverseFactorial(n + 1, 1);

    // Calculate factorial modulo MOD
    for (int i = 2; i <= n; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }

    // Copute he modular inverse of n!
    inverseFactorial[n] = 1;
    long long base = factorial[n], power = MOD - 2;
    while (power > 0) {
        if (power % 2 == 1) {
            inverseFactorial[n] = (inverseFactorial[n] * base) % MOD;
        }
        base = (base * base) % MOD;
        power /= 2;
    }

    // Calculating all inverse factorials using recursive property:
    // invFact[i-1] = invFact[i] * i % MOD
    for (int i = n - 1; i >= 1; i--) {
        inverseFactorial[i] = (inverseFactorial[i + 1] * (i + 1)) % MOD;
    }

    return inverseFactorial;
}

int main() {
    int n = 10; // Compute inverse factorials up to 10
    int MOD = 1e9 + 7; // Example modulus
    vector<long long> invFact = inverseFactorials(n, MOD);

    // Print the results for the example case
    for (int i = 1; i <= n; i++) {
        cout << "Inverse Factorial of " << i << " mod " << MOD << " is " << invFact[i] << endl;
    }
    return 0;
}
