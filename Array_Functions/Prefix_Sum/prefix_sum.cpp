#include <bits/stdc++.h>

using namespace std;

template <typename Iterator>
vector<int> generatePrefixSum(Iterator start, Iterator end) {
    vector<int> prefixSum = {0}; 
    int currentSum = 0;
    for (Iterator it = start; it != end; ++it) {
        currentSum += *it;
        prefixSum.push_back(currentSum);
    }
    return prefixSum;
}

int main() {
    //example with array
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);  
    vector<int> prefixSum = generatePrefixSum(a, a+n);
    
    cout << "Prefix Sum for range: ";
    for (int sum : prefixSum) {
        cout << sum << " ";
    }
    cout << endl;

    //example with vector
    vector<int> b = {1, 2, 3, 4, 5};

    vector<int> prefixSum2 = generatePrefixSum(b.begin(), b.end());
    
    cout << "Prefix Sum for range: ";
    for (int sum : prefixSum2) {
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}
