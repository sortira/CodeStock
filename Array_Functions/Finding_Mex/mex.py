
def mex(arr):
        n = len(arr)
        seen = [False] * (n + 1)  


        for m in arr:
            if 0 < m <= n:
                seen[m] = True

        for i in range(0, n + 1):
            if not seen[i]:
                return i

        return n + 1

if __name__ == '__main__':

	arr = [1, 0, 2, 4]

	print(mex(arr))
