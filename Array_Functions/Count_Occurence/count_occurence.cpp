#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

template <typename T>
int Count_Occurences(vector<T> arr, T item)
{
    unordered_map<T,int> mpp;
    for (T i: arr)
        mpp[i]++;
    
    int count = mpp[item];
    return count;
}

int main()
{
    vector<int> vc = {1,2,3,5,4,4,6,3,2,3,7};
    int val = 4;
    int count = Count_Occurences(vc, val);
    cout << "Element: " << val << endl;
    cout << "Occurence: " << count << endl;
    return 0;
}
