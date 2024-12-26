import math
from collections import defaultdict

class PrimeFactorization:
    def get_prime_factors(self, n):
        prime_factors = defaultdict(int)

        if n <= 1:
            # Return an empty dictionary for n <= 1
            return prime_factors

        # Factor out 2 and count its power
        while n % 2 == 0:
            prime_factors[2] += 1
            n //= 2

        # Factor out odd numbers
        for i in range(3, int(math.sqrt(n)) + 1, 2):
            while n % i == 0:
                prime_factors[i] += 1
                n //= i

        # If n is a prime number greater than 2
        if n > 2:
            prime_factors[n] += 1

        return dict(prime_factors)

if __name__ == "__main__":
    obj = PrimeFactorization()
    print(obj.get_prime_factors(1))
    print(obj.get_prime_factors(37))
    print(obj.get_prime_factors(315))

