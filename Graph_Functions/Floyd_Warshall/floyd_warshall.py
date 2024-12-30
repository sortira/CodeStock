INF = float('inf')

def floyd_warshall(graph):
    V = len(graph)
    distance = [row[:] for row in graph]

    for k in range(V):
        for i in range(V):
            for j in range(V):
                if distance[i][k] != INF and distance[k][j] != INF and distance[i][k] + distance[k][j] < distance[i][j]:
                    distance[i][j] = distance[i][k] + distance[k][j]

    return distance

if __name__ == "__main__":
    graph = [[0, 5, INF, 10],
             [INF, 0, 3, INF],
             [INF, INF, 0, 1],
             [INF, INF, INF, 0]]

    ans = floyd_warshall(graph)

    V = len(ans)
    for i in range(V):
        for j in range(V):
            if ans[i][j] == INF:
                print("INF", end=" ")
            else:
                print(ans[i][j], end="   ")
        print()
