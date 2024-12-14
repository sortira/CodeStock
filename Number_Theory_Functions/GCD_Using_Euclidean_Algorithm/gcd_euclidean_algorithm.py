def gcd(a, b):
    if a == 0 and b == 0:
        return -1  # Undefined for (0, 0)
    if a == 0:
        return b
    if b == 0:
        return a

    while b != 0:
        a, b = b, a % b
    return a

if __name__ == "__main__":
    a = 111
    b = 37

    ans = gcd(a, b)
    if ans == -1:
        print("GCD is undefined for (0, 0)")
    else:
        print(ans)
