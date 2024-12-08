#include <iostream>
#include <vector>

using namespace std;

template <typename T>
vector<T> reverse_copy(vector<T> &vc)
{
    int n = vc.size();
    vector<T> rev(n);
    for (int i = n - 1; i > -1; i--)
        rev[n - i - 1] = vc[i];

    return rev;
}

int main()
{
    vector<int> vc = {1, 2, 3};
    vector<int> rev = reverse_copy(vc);
    for (int i : rev)
        cout << i << " ";
    cout << endl;
    return 0;
}

// No builtin function to reverse a vector and return a copy