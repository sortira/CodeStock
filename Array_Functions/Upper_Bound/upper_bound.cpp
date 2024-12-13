#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int>& a, int key) {
    int l=0, r=a.size()-1;
    int ans = r+1;
    while(l<=r) {
        int mid = (l+r)/2;
        if(a[mid] <= key) {
            ans = mid;
            l = mid+1;
        }
        else {
            r = mid-1;
        }
    }
    if(ans != a.size() && a[ans] == key)  return ans;
    return a.size();
}
 
int main() {

    vector<int> a = {1,2,2,2,2,3,3,5};
    int key = 2;
    int uBound = upperBound(a,key);
    if(uBound == a.size()) {
        printf("Key not found.\n");
    }
    else {
        printf("Upper Bound of \'%d\' is: %d",key,uBound);
    }

    return 0;
}