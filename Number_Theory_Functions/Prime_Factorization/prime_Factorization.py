import math

class PrimeFactorization:
    def is_prime(self, n):
        if n == 1:
            return False
        number_of_factors = 0
        for i in range(1, n):
            if n % i == 0:
                number_of_factors += 1
        return number_of_factors <= 1

    def prime_factors(self, n):
        if self.is_prime(n):
            print("The given number is a prime number")
        elif n == 1:
            print("1 is not a prime number, and has only 1 factor")
        else:
            prime_factors = []

            while n % 2 == 0:
                prime_factors.append(2)
                n //= 2
            for i in range(3, int(math.sqrt(n)) + 1, 2):
                while n % i == 0:
                    prime_factors.append(i)
                    n //= i

            if n > 2:
                prime_factors.append(n)
            print(prime_factors)

if __name__ == "__main__":
    obj = PrimeFactorization()
    obj.prime_factors(1)
    obj.prime_factors(37)
    obj.prime_factors(315)

