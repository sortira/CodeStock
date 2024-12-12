#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

using namespace std;

template <typename T>
void reverse_in_place(vector<T> &vc)
{
    int start = 0;
    int end = vc.size() - 1;

    while (start < end) {
        swap(vc[start], vc[end]); 
        start++;                   
        end--;                     
    }
}

int main()
{
    vector<int> vc = {1, 2, 3};
    reverse_in_place(vc);
    for (int i : vc)
        cout << i << " ";
    cout << endl;
    return 0;
}
