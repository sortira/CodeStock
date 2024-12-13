def upper_bound(a, key):
    l, r = 0, len(a) - 1
    ans = r+1
    while l <= r:
        mid = (l + r) // 2
        if a[mid] <= key:
            ans = mid
            l = mid + 1
        else:
            r = mid - 1
    if ans != len(a) and a[ans] == key:
        return ans
    return len(a)

def main():
    a = [1, 2, 2, 2, 2, 3, 3, 5]
    key = 2
    u_bound = upper_bound(a, key)
    if u_bound == len(a):
        print("Key not found.")
    else:
        print(f"Upper Bound of '{key}' is: {u_bound}")

if __name__ == "__main__":
    main()
