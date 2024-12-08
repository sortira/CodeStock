import java.util.ArrayList;
import java.util.List;

public class dfs_recur {
    public static void dfs(int idx, int par, List<List<Integer>> adj, boolean[] vis) {
        if (vis[idx]) {
            return;
        }
        // Do stuff before parent DFS
        vis[idx] = true;
        for (int i : adj.get(idx)) {
            if (i == par) {
                continue;
            }
            // Do stuff before child DFS
            dfs(i, idx, adj, vis);
            // Do stuff after child DFS
        }
        // Do stuff after parent DFS
    }

    public static void main(String[] args) {
        int n = 5; // Number of Nodes
        List<List<Integer>> adj = new ArrayList<>(n); // Adjacency List
        for (int i = 0; i < n; i++) {
            adj.add(new ArrayList<>());
        }
        boolean[] vis = new boolean[n];
        dfs(0, -1, adj, vis); // '-1' As there is no parent of starting point
    }
}

