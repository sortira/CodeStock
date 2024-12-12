#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

template <typename T>
unordered_map<T, int> Count_Occurences(vector<T> arr)
{
    unordered_map<T,int> mpp;
    for (T i: arr)
        mpp[i]++;
    
    return mpp;
}

int main()
{
    vector<int> vc = {1,2,3,5,4,4,6,3,2,3,7};
    unordered_map<int, int> mpp = Count_Occurences(vc);
    for(auto it: mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
