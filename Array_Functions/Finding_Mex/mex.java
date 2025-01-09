
public class mex {

    public static int mex(int[] arr) {
        int n = arr.length;
        boolean[] seen = new boolean[n + 1];

        for (int m : arr) {
            if (m > 0 && m <= n) {
                seen[m] = true;
            }
        }
        for (int i = 0; i <= n; i++) {
            if (!seen[i]) {
                return i;
            }
        }
        return n + 1;
    }
	public static void main(String[] args)
{
	int[] arr = { 1, 0, 2, 4 };

	System.out.print(mex(arr));
}
}

