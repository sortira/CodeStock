import heapq

class PrimMST:
    def __init__(self, V, E, graph):
        self.V = V
        self.E = E
        self.graph = graph

    def prim(self):
        adj = [[] for _ in range(self.V)]
        for u, v, wt in self.graph:
            adj[u].append((wt, v))
            adj[v].append((wt, u))
        
        pq = []
        visited = [False] * self.V
        res = 0
        
        heapq.heappush(pq, (0, 0))
        
        while pq:
            wt, u = heapq.heappop(pq)
            if visited[u]:
                continue
            
            res += wt
            visited[u] = True
            
            for edge in adj[u]:
                if not visited[edge[1]]:
                    heapq.heappush(pq, edge)
        
        return res

if __name__ == "__main__":
    V = 5
    graph = [
        [0, 1, 2],
        [0, 3, 6],
        [1, 2, 3],
        [1, 3, 8],
        [1, 4, 5],
        [2, 4, 7],
        [3, 4, 9]
    ]
    E = len(graph)

    mst = PrimMST(V, E, graph)
    mstSum = mst.prim()
    print("Sum of edges in MST is:", mstSum)