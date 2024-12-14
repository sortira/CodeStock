#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a==0 && b==0) return -1;
    if (a==0) return b;
    if (b==0) return a;
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a=111, b=37;
    int ans = gcd(a, b);
    if (ans==-1) 
      cout << "Undefined GCD for 0,0" << endl;
    else 
      cout << ans << endl;
    return 0;
}
