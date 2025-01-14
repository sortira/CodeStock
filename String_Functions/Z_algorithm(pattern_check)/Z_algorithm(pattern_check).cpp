#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> zfunction(const string& text, const string& pattern) {
    // Handle edge case: empty pattern
    if (pattern.empty()) {
        vector<int> result;
        for (int i = 0; i <= text.length(); ++i) {
            result.push_back(i);
        }
        return result;
    }

    // Create concatenated string "P$T"
    string concat = pattern + "$" + text;
    int n = concat.length();

    // Z-array to store lengths of the longest prefix substring starting from each position
    vector<int> Z(n, 0);
    int l = 0, r = 0;

    for (int i = 1; i < n; ++i) {
        if (i <= r)
            Z[i] = min(r - i + 1, Z[i - l]);
        while (i + Z[i] < n && concat[Z[i]] == concat[i + Z[i]])
            ++Z[i];
        if (i + Z[i] - 1 > r) {
            l = i;
            r = i + Z[i] - 1;
        }
    }

    // Store positions where the pattern matches the text
    vector<int> result;
    for (int i = pattern.length() + 1; i < n; ++i) {  // Start after the "$" delimiter
        if (Z[i] == pattern.length()) {
            result.push_back(i - pattern.length() - 1);
        }
    }

    return result;
}

int main() {
    string givenstring = "world peace";
    string pattern = "world";

    // Perform pattern search using Z algorithm
    vector<int> result = zfunction(givenstring, pattern);

    if (result.empty()) {
        cout << "-1" << endl;
    } else {
        cout << "Pattern found at index ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}
