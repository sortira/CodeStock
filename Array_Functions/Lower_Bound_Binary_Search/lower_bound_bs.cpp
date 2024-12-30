# include <iostream>
# include <vector>
using namespace std;

int lower_bound_bs(vector<int> arr, int target){
    int beg = 0;
    int end = arr.size()-1;

    while(beg<=end){
        int mid = (end-beg)/2 + beg;
        if (arr[mid]<target){
            beg=mid+1; //searching in the right half for a greater element
        }
        else{
            end = mid-1; //searching in the left half for a smaller element
        }
    }
    return beg;
}

int main(){
    vector<int> arr = {3,4,4,7,9,65,74,98}; //sample input 
    cout << lower_bound_bs(arr,10);
    return 0;
}
