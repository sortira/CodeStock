def make_sub(s):
    n = len(s)
    subs = []
    for i in range(n):
        for j in range(i + 1, n + 1):
            subs.append(s[i:j])
    return subs

def main():
    a = "abcd"
    substrings = make_sub(a)
    for s in substrings:
        print(s)

if __name__ == "__main__":
    main()
