#include <iostream>
#include <map>
#include <cmath>

class prime_Factorization {
public:
    std::map<int, int> getPrimeFactors(int n) {
        std::map<int, int> primeFactors;

        if (n <= 1) {
            // Return an empty map for n <= 1
            return primeFactors;
        }

        // Factor out 2 and count its power
        while (n % 2 == 0) {
            primeFactors[2]++;
            n /= 2;
        }

        // Factor out odd numbers
        for (int i = 3; i <= std::sqrt(n); i += 2) {
            while (n % i == 0) {
                primeFactors[i]++;
                n /= i;
            }
        }

        // If n is a prime number greater than 2
        if (n > 2) {
            primeFactors[n]++;
        }

        return primeFactors;
    }
};

int main() {
    prime_Factorization obj;
    std::cout << "{";
    for (const auto& pair : obj.getPrimeFactors(1)) {
        std::cout << pair.first << ": " << pair.second << ", ";
    }
    std::cout << "}\n";

    std::cout << "{";
    for (const auto& pair : obj.getPrimeFactors(37)) {
        std::cout << pair.first << ": " << pair.second << ", ";
    }
    std::cout << "}\n";

    std::cout << "{";
    for (const auto& pair : obj.getPrimeFactors(315)) {
        std::cout << pair.first << ": " << pair.second << ", ";
    }
    std::cout << "}\n";

    return 0;
}

