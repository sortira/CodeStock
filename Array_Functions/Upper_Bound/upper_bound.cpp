#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int>& a, int key) {
    int l=0, r=a.size()-1;
    int ans = r+1;
    while(l<=r) {
        int mid = (l+r)/2;
        if(a[mid] > key) {
            ans = mid;
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    return ans;
}
 
int main() {

    vector<int> a = {1,2,2,2,2,3,3,5};
    int key = 2;
    int uBound = upperBound(a,key);
    printf("Upper Bound of \'%d\' is: %d",key,uBound);

    return 0;
}