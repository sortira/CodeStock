#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

template <typename T>
unordered_map<T, int> freqMap(vector<T> arr){
    unordered_map<T,int> dc;
    for (T i: arr)
        dc[i]++;
    return dc;
}


int main()
{
    vector<int> vc = {1,2,3};
    unordered_map<int,int> mp = freqMap(vc);
    for (auto [p,q]: mp)
        cout<<p<<" "<<q<<'\n'; 
    return 0;
}

// For cf contests, use ordered map, to prevent your code from hackers