import math

def gcd(a, b):
    if a == 0 and b == 0:
        return 0
    if a == 0:
        return b
    if b == 0:
        return a

    a = abs(a)
    b = abs(b)

    while b != 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // gcd(a, b)

if __name__ == "__main__":
    a = 111
    b = 37

    ans = lcm(a, b)
    print(ans)

