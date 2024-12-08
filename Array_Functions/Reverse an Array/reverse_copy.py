def reverse_copy(vc):
    n = len(vc)
    rev = [None] * n
    for i in range(n - 1, -1, -1):
        rev[n - i - 1] = vc[i]
    return rev

if __name__ == "__main__":
    vc = [1, 2, 3]
    rev = reverse_copy(vc)
    for i in rev:
        print(i, end=" ")
    print()

# You can also use reversed() built-in function
