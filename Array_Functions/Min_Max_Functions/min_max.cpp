# include <iostream>
using namespace std;

int max_ind(int arr[],int n){
    int mx_ind=0; //initializing the index with the max value as 0
    for(int i=0; i<n;i++){
        if (arr[i]>arr[mx_ind]){
            mx_ind=i;//updating the max index
        }   
    }
    return mx_ind;
}
int min_ind(int arr[], int n){
    int mn_ind=0; //initialising the index with the minimum value as 0
    for(int i=0; i<n;i++){
        if (arr[i]<arr[mn_ind]){
            mn_ind=i;  //updating the min index
        }   
    }
    return mn_ind;
}



int main(){
    int k []={7,8,5,6};//sample test case for max_ind and min_ind functions
    int n = (sizeof(k)/sizeof(k[0]));
    cout<<max_ind(k,n) <<" "<< min_ind(k,n); 
    return 0;
    
}