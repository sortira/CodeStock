def makeSub(s):
    n = len(s)
    subs = []
    for i in range(n):
        for j in range(i + 1, n + 1):
            subs.append(s[i:j])
    return subs

if __name__ == "__main__":
    a = "abcd"
    substrings = makeSub(a)
    for s in substrings:
        print(s)
