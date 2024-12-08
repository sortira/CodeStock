import java.util.List;
import java.util.ArrayList;

class FenwickTree
{
    private int[] fen;
    private int n;

    private long query(int l)
    {
        long sum = 0;
        while (l > 0)
        {
            sum += fen[l];
            l -= (l) & (-l);
        }
        return sum;
    }

    FenwickTree(int N, int arr[])
    {
        this.n = N;
        this.fen = new int[n+1];
        for (int i = 1; i <= n; i++)
        {
            fen[i] += arr[i-1];
            int r = i + (i & (-i));
            if (r < n)
                fen[r] += fen[i];
        }
    }

    public void update(int idx, int val)
    {
        while (idx <= n)
        {
            fen[idx] += val;
            idx += (idx) & (-idx);
        }
    }

    public long query(int l, int r)
    {
        return query(r) - query(l - 1);
    }
}

class fenwick
{
    public static void main(String[] args){
        int n = 5;
        int arr[] = new int[] {2, 1, 3, 4, 1};
        FenwickTree f = new FenwickTree(n, arr);
        System.out.println("Prefix Sum of [1,3] - "+f.query(1, 3));
        f.update(2, 25);
        System.out.println("Prefix Sum of [1,3] - "+f.query(1, 3));
    }
}
