def zfunction(text, pattern):
    # Handle edge case: empty pattern
    if not pattern:
        return list(range(len(text) + 1))

    # Create concatenated string "P$T"
    concat = pattern + "$" + text
    n = len(concat)

    # Z-array to store lengths of the longest prefix substring starting from each position
    Z = [0] * n
    l, r = 0, 0

    for i in range(1, n):
        if i <= r:
            Z[i] = min(r - i + 1, Z[i - l])
        while i + Z[i] < n and concat[Z[i]] == concat[i + Z[i]]:
            Z[i] += 1
        if i + Z[i] - 1 > r:
            l = i
            r = i + Z[i] - 1

    # Store positions where the pattern matches the text
    result = []
    for i in range(n):
        if Z[i] == len(pattern):
            result.append(i - len(pattern) - 1)

    return result

if __name__ == "__main__":
    givenstring = "world peace"
    pattern = "world"

    # Perform pattern search using Z algorithm
    result = zfunction(givenstring, pattern)

    if not result:
        print("-1")
    else:
        print("Pattern found at index ", end="")
        print(" ".join(map(str, result)))

