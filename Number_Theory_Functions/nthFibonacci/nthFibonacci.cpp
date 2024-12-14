// C++ Implementation
#include <iostream>
#include <cmath>
using namespace std;

long long nthFibonacci(int n) {
    /**
     * Returns the n-th Fibonacci number using Binet's formula.
     */
    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;
    return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
}

int main() {
    // Example use cases
    int testCases[] = {0, 1, 2, 5, 10, 20, 50};
    for (int n : testCases) {
        cout << "F(" << n << ") = " << nthFibonacci(n) << endl;
    }
    return 0;
}
