# include <iostream>
# include <vector>
using namespace std;

vector<int> max_ind(int arr[],int n){
    vector<int> mx_ind_v;
    int mx_ind=0; //initializing the index with the max value as 0
    for(int i=0; i<n;i++){
        if (arr[i]>arr[mx_ind]){
            mx_ind=i;
            mx_ind_v.clear(); 
            mx_ind_v.push_back(mx_ind); //updating the max index
        }
        else if(arr[i]==arr[mx_ind]){
            mx_ind_v.push_back(i); //handling edge cases in case of multiple max indexes
        }   
    }
    return mx_ind_v;
}
vector<int> min_ind(int arr[], int n){
    vector<int> mn_ind_v={};
    int mn_ind=0; //initialising the index with the minimum value as 0
    for(int i=0; i<n;i++){
        if (arr[i]<arr[mn_ind]){
            mn_ind=i;  //updating the min index
            mn_ind_v.clear();
            mn_ind_v.push_back(mn_ind);
        }
        else if(arr[i]==arr[mn_ind]){
            mn_ind_v.push_back(i); //handling edge case in case of multiple min indexes
        }   
    }
    return mn_ind_v;
}



int main(){
    int k []={8,7,8,5,6,5};//sample test case with edge case for max_ind and min_ind functions
    int n = (sizeof(k)/sizeof(k[0]));
    vector<int> a = max_ind(k,n); 
    vector<int> b = min_ind(k,n); 
    return 0;
    
}