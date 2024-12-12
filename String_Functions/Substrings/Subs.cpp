#include <iostream>
#include <vector>
using namespace std;


vector<string> makeSub(const string& s) {
    int n = s.size();
    vector<string> subs;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<=n;j++) {
            subs.push_back(s.substr(i,j-i));
        }
    }
    return subs;
}

int main() {

    string a = "abcd";
    vector<string> Substrings = makeSub(a);
    for(string s:Substrings)  cout<<s<<endl;

    return 0;
}