#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n < 4)
        return true;
    if ((n & 1) == 0)
        return false;
    for (int i = 3; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(int argc, char const *argv[])
{
    int n = 50;
    if (isPrime(n))
        cout << "Prime\n";
    else
        cout << "Not Prime\n";
    return 0;
}
