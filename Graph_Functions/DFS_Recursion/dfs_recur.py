def dfs(idx, par, adj, vis):
    if vis[idx]:
        return
    # Do stuff before parent DFS
    vis[idx] = True
    for i in adj[idx]:
        if i == par:
            continue
        # Do stuff before child DFS
        dfs(i, idx, adj, vis)
        # Do stuff after child DFS
        
    # Do stuff after parent DFS

if __name__ == "__main__":
    n = 5  # Number of Nodes
    adj = [[] for _ in range(n)]  # Adjacency List
    vis = [False] * n
    dfs(0, -1, adj, vis)  # '-1' As there is no parent of starting point

