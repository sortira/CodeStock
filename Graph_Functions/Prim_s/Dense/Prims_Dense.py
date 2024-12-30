def minKey(key, mstSet, n):
    min_val = float('inf')
    min_index = -1
    for i in range(n):
        if not mstSet[i] and key[i] < min_val:
            min_val = key[i]
            min_index = i
    return min_index

def prim(n, graph):
    parent = [-1] * n
    key = [float('inf')] * n
    mstSet = [False] * n

    key[0] = 0

    for _ in range(n - 1):
        u = minKey(key, mstSet, n)
        mstSet[u] = True

        for v in range(n):
            if graph[u][v] and not mstSet[v] and graph[u][v] < key[v]:
                parent[v] = u
                key[v] = graph[u][v]

    result = []
    for i in range(1, n):
        result.append((parent[i], i, graph[parent[i]][i]))
    return result

def main():
    n = 5
    graph = [
        [0, 2, 0, 6, 0],
        [2, 0, 3, 8, 5],
        [0, 3, 0, 0, 7],
        [6, 8, 0, 0, 9],
        [0, 5, 7, 9, 0]
    ]

    mstEdges = prim(n, graph)

    print("Edge \t Weight")
    for edge in mstEdges:
        print(f"{edge[0]} - {edge[1]} \t {edge[2]}")

if __name__ == "__main__":
    main()
