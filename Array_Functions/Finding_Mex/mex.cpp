#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

    int mex(vector<int>& arr) {
        int n = arr.size();
        vector<bool> seen(n + 1, false);

        for (int m : arr) {
            if (m > 0 && m <= n) {
                seen[m] = true;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (!seen[i]) {
                return i;
            }
        }

        return n + 1;
    }
int main()
{
	vector<int> arr = { 1, 0, 2, 4 };
	cout << mex(arr) << endl;
	return 0;
}

