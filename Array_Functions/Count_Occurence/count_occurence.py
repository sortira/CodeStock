def Count_Occurences(arr, item):
    mpp = {}
    for i in arr:
        mpp[i] = mpp.get(i,0) + 1

    count = mpp[item]
    return count

if __name__ == "__main__":
    arr = [1,2,3,3,5,4,6,4,1,2]
    val = 4
    count = Count_Occurences(arr, val)
    
    print("Element:", val)
    print("Occurence:", count)
