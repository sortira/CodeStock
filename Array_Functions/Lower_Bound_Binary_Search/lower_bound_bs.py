def lower_bound_bs(arr,target):
    beg =0
    end= len(arr)-1
    
    while beg<=end:
        mid =(beg+end)//2
        if arr[mid]<target: 
            beg = mid+1 #searching in the right half for a greater element
        else:
            end =mid-1 #searching in the left half for a smaller element
    return beg

if __name__ == "__main__":
    arr = [3,4,4,7,9,65,74,98]
    print(lower_bound_bs(arr,10)) #sample input 