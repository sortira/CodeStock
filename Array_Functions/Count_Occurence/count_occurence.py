def Count_Occurences(arr):
    mpp = {}
    for i in arr:
        mpp[i] = mpp.get(i,0) + 1

    return mpp

if __name__ == "__main__":
    arr = [1,2,3,3,5,4,6,4,1,2]
    mpp = Count_Occurences(arr)
    for key, value in mpp.items():
        print(key, value)
