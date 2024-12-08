#include <iostream>
#include <vector>

using namespace std;

void dfs(int idx, int par, vector<vector<int>> &adj, vector<bool> &vis)
{
    if (vis[idx])
        return;
    // Do stuff before parent DFS
    vis[idx] = 1;
    for (int i : adj[idx])
    {
        if (i == par)
            continue;
        // Do stuff before child DFS
        dfs(i, idx, adj, vis);
        // Do stuff after child DFS
    }
    // Do stuff after parent DFS
}

int main(int argc, char const *argv[])
{
    int n = 5;                  // Number of Nodes
    vector<vector<int>> adj(n); // Adjacency List
    vector<bool> vis(n, 0);
    dfs(0, -1, adj, vis); // '-1' As there is no parent of starting point
    return 0;
}
