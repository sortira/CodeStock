def freqMap(arr):
    dc = {}
    for i in arr:
        dc[i] = dc.get(i,0) + 1
    return dc

if __name__ == "__main__":
    arr = [1, 2, 3, 1]
    mp = freqMap(arr)
    for k, v in mp.items():
        print(k,v)

# For cf contests, use string as keys, to prevent your code from hackers
