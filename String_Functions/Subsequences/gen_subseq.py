def helper(s, n, i, sub, container):
    # Base case: when we reach the end of the string
    if i >= n:
        container.append(''.join(sub))  # Convert list to string and add to result
        return

    # Include the current character in the subsequence
    sub.append(s[i])
    helper(s, n, i + 1, sub, container)
    sub.pop()  # Remove the last character (exclude it from the subsequence)

    # Exclude the current character from the subsequence
    helper(s, n, i + 1, sub, container)

def func_body(s):
    n = len(s)
    result = []
    helper(s, n, 0, [], result)  # Start with an empty list for subsequences
    return result

if __name__ == "__main__":
    # Main function where the function is called and use case is demonstrated
    s = "abcd"  # Example input
    all_subsequences = func_body(s)

    # Print all subsequences
    for subsequence in all_subsequences:
        print(subsequence)
