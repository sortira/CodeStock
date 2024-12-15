class Edge:
    def __init__(self, u, v, weight):
        self.u = u
        self.v = v
        self.weight = weight

    def __lt__(self, other):
        return self.weight < other.weight

def find_parent(u, parent):
    if parent[u] != u:
        parent[u] = find_parent(parent[u], parent)
    return parent[u]

def union_sets(u, v, parent, rank):
    root_u = find_parent(u, parent)
    root_v = find_parent(v, parent)

    if root_u != root_v:
        if rank[root_u] > rank[root_v]:
            parent[root_v] = root_u
        elif rank[root_u] < rank[root_v]:
            parent[root_u] = root_v
        else:
            parent[root_v] = root_u
            rank[root_u] += 1

def kruskal(n, edges):
    parent = [i for i in range(n)]
    rank = [0] * n
    mst_edges = []

    edges.sort()

    for edge in edges:
        root_u = find_parent(edge.u, parent)
        root_v = find_parent(edge.v, parent)

        if root_u != root_v:
            mst_edges.append(edge)
            union_sets(edge.u, edge.v, parent, rank)

    return mst_edges

def main():
    n = 4
    edges = [
        Edge(0, 1, 10),
        Edge(0, 2, 6),
        Edge(0, 3, 5),
        Edge(1, 3, 15),
        Edge(2, 3, 4),
    ]

    mst_edges = kruskal(n, edges)

    print("Edges in the Minimum Spanning Tree (MST):")
    mst_weight = 0
    for edge in mst_edges:
        print(f"{edge.u} - {edge.v} with weight {edge.weight}")
        mst_weight += edge.weight

    print(f"Total weight of MST: {mst_weight}")

if __name__ == "__main__":
    main()