def inverse_factorials(n, MOD):
    factorial = [1] * (n + 1)
    inverse_factorial = [1] * (n + 1)

    # Calculating factorial modulo MOD
    for i in range(2, n + 1):
        factorial[i] = (factorial[i - 1] * i) % MOD

    # Compute the modular inverse of n! 
    inverse_factorial[n] = pow(factorial[n], MOD - 2, MOD)

    # Calculating all inverse factorials using recursive property:
    for i in range(n - 1, 0, -1):
        inverse_factorial[i] = (inverse_factorial[i + 1] * (i + 1)) % MOD

    return inverse_factorial

# Example usage
n = 10
MOD = 10**9 + 7  # Example modulus
inv_fact = inverse_factorials(n, MOD)

# Print results
for i in range(1, n + 1):
    print(f"Inverse Factorial of {i} mod {MOD} is {inv_fact[i]}")
