#include <iostream>
#include <cstdlib>

class LCM {
public:
    static int gcd(int a, int b) {
        if (a == 0 && b == 0)
            return 0; 
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        if (a < 0)
            a = -a;
        if (b < 0)
            b = -b;

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    static int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }
};

int main() {
    int a = 111;
    int b = 37;

    int ans = LCM::lcm(a, b);
    std::cout << ans << std::endl;

    return 0;
}


