def max_ind(arr):
    mx_ind=0 #initializing the index with the max value as 0
    for i in range(len(arr)):
        if arr[i]>arr[mx_ind]:
            mx_ind=i  #updating the max index
    return mx_ind

def min_ind(arr):
    mn_ind=0 #initialising the index with the minimum value as 0
    for i in range(len(arr)):
        if arr[i]<arr[mn_ind]:
            mn_ind=i #updating the min index
    return mn_ind

if __name__ == "__main__":
    print(max_ind([3,3,2,1]))
    print(min_ind([0,8,8,6,0]))