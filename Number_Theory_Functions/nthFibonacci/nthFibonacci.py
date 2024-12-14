# Python Implementation
import math

def nthfibonacci(n):
    """
    Returns the n-th Fibonacci number using Binet's formula.
    """
    phi = (1 + math.sqrt(5)) / 2
    psi = (1 - math.sqrt(5)) / 2
    return round((phi**n - psi**n) / math.sqrt(5))

if __name__ == "__main__":
    # Example use cases
    test_cases = [0, 1, 2, 5, 10, 20, 50]
    for n in test_cases:
        print(f"F({n}) = {nthfibonacci(n)}")
