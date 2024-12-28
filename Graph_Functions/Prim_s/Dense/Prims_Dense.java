import java.util.*;

public class Prims_Dense {

    static int minKey(int[] key, boolean[] mstSet, int n) {
        int min = Integer.MAX_VALUE, minIndex = -1;
        for (int i = 0; i < n; i++) {
            if (!mstSet[i] && key[i] < min) {
                min = key[i];
                minIndex = i;
            }
        }
        return minIndex;
    }

    static List<int[]> prim(int n, int[][] graph) {
        int[] parent = new int[n];
        int[] key = new int[n];
        boolean[] mstSet = new boolean[n];

        Arrays.fill(key, Integer.MAX_VALUE);
        key[0] = 0;
        parent[0] = -1;

        for (int i = 0; i < n - 1; i++) {
            int u = minKey(key, mstSet, n);
            mstSet[u] = true;

            for (int v = 0; v < n; v++) {
                if (graph[u][v] != 0 && !mstSet[v] && graph[u][v] < key[v]) {
                    parent[v] = u;
                    key[v] = graph[u][v];
                }
            }
        }

        List<int[]> result = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            result.add(new int[]{parent[i], i, graph[parent[i]][i]});
        }
        return result;
    }

    public static void main(String[] args) {
        int n = 5;
        int[][] graph = {
            { 0, 2, 0, 6, 0 },
            { 2, 0, 3, 8, 5 },
            { 0, 3, 0, 0, 7 },
            { 6, 8, 0, 0, 9 },
            { 0, 5, 7, 9, 0 }
        };

        List<int[]> mstEdges = prim(n, graph);

        System.out.println("Edge \t Weight");
        for (int[] edge : mstEdges) {
            System.out.println(edge[0] + " - " + edge[1] + " \t " + edge[2]);
        }
    }
}
