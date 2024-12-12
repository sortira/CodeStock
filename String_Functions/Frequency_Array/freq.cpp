#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> freqArr(string arr)
{
    vector<int> dc(26, 0);
    for (char i : arr)
        dc[i - 97]++;
    return dc;
}

int main()
{
    string vc = "codestock";
    vector<int> mp = freqArr(vc);
    for (int i = 0; i < 26; i++)
        cout << (char)(i + 97) << " " << mp[i] << '\n';
    return 0;
}
