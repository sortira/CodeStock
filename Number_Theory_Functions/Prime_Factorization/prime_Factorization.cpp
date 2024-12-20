#include <iostream>
#include <vector>
#include <cmath>
#include <string>

class prime_Factorization {
public:
    bool isPrime(int n) {
        if (n == 1)
            return false;
        int number_of_factors = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0)
                number_of_factors++;
        }
        return number_of_factors <= 1;
    }

    void Prime_factors(int n) {
        if (isPrime(n)) {
            std::cout << "The given number is a prime number" << std::endl;
        } else if (n == 1) {
            std::cout << "1 is not a prime number, and has only 1 factor" << std::endl;
        } else {
            std::string prime_factors = "";

            while (n % 2 == 0) {
                prime_factors += std::to_string(2);
                n /= 2;
            }
            for (int i = 3; i <= std::sqrt(n); i += 2) {
                while (n % i == 0) {
                    prime_factors += std::to_string(i);
                    n /= i;
                }
            }
            if (n > 2)
                prime_factors += std::to_string(n);
            
            std::vector<char> factors(prime_factors.begin(), prime_factors.end());
            std::cout << "[";
            for (size_t i = 0; i < factors.size(); ++i) {
                std::cout << factors[i];
                if (i < factors.size() - 1) std::cout << ", ";
            }
            std::cout << "]" << std::endl;
        }
    }
};

int main() {
    prime_Factorization obj;
    obj.Prime_factors(1);
    obj.Prime_factors(37);
    obj.Prime_factors(315);
    return 0;
}

