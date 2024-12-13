def upper_bound(a, key):
    l, r = 0, len(a) - 1
    ans = r+1
    while l <= r:
        mid = (l + r) // 2
        if a[mid] > key:
            ans = mid
            r = mid - 1
        else:
            l = mid + 1
    return ans

def main():
    a = [1, 2, 2, 2, 2, 3, 3, 5]
    key = 2
    u_bound = upper_bound(a, key)
    print(f"Upper Bound of '{key}' is: {u_bound}")

if __name__ == "__main__":
    main()
