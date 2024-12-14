def max_ind(arr):
    mx_ind=0 #initializing the index with the max value as 0
    l=[]
    for i in range(len(arr)):
        if arr[i]>arr[mx_ind]:
            l=[] #handling edge cases in case of multiple max indexes
            l.append(i)
            mx_ind=i  #updating the max index
        elif arr[i]==arr[mx_ind]:
            l.append(i)
    return l

def min_ind(arr):
    mn_ind=0 #initialising the index with the minimum value as 0
    l=[]
    for i in range(len(arr)):
        if arr[i]<arr[mn_ind]:
            l=[] #handling edge case in case of multiple min indexes
            l.append(i) 
            mn_ind=i #updating the min index
        elif arr[i]==arr[mn_ind]:
            l.append(i)
    return l

if __name__ == "__main__":
    print(max_ind([3,3,2,1]))
    print(min_ind([0,8,8,6,0]))