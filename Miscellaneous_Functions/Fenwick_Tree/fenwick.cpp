#include <iostream>
#include <vector>

using namespace std;

class Fenwick
{
private:
    vector<int> fen;
    int n;

    long long query(int l)
    {
        long long sum = 0;
        while (l > 0)
        {
            sum += fen[l];
            l -= (l) & (-l);
        }
        return sum;
    }

public:
    Fenwick(int N, vector<int> &arr)
    {
        n = N;
        fen.resize(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            fen[i] += arr[i - 1];
            int r = i + (i & (-i));
            if (r < n)
                fen[r] += fen[i];
        }
    }

    void update(int idx, int val)
    {
        while (idx <= n)
        {
            fen[idx] += val;
            idx += (idx) & (-idx);
        }
    }

    long long query(int l, int r)
    {
        return query(r) - query(l - 1);
    }
};

int main()
{
    int n = 5;
    vector<int> vc = {2, 1, 3, 4, 1};
    Fenwick f(n, vc);
    cout << "Prefix Sum of [1,3] - " << f.query(1, 3) << '\n';
    f.update(2, 25);
    cout << "Prefix Sum of [1,3] - " << f.query(1, 3);
}
