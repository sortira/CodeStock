class FenWick():
    def __init__(self, n, arr):
        self.fen = [0] * (n + 1)
        self.n = n
        for i in range(1, n + 1):
            self.fen[i] += arr[i - 1]
            j = i + (i & (-i))
            if j <= n:
                self.fen[j] += self.fen[i]

    def query(self, l, r=None):
        if r is not None:
            return self.query(r) - self.query(l - 1)
        
        s = 0
        while l > 0:
            s += self.fen[l]
            l -= l & (-l)
        return s

    def update(self, idx, val):
        while idx <= self.n:
            self.fen[idx] += val
            idx += idx & (-idx)

if __name__ == "__main__":
    arr = [2, 1, 3, 4, 1]
    f = FenWick(5, arr)
    print("Prefix Sum of [1,3] -", f.query(1,3))
    f.update(2,25)
    print("Prefix Sum of [1,3] -", f.query(1,3))