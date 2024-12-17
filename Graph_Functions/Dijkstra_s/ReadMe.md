## Dijkstra's Shortest Path Algorithm
- It is an algorithm used to find the shortest distance from a source vertex to all other vertices in a graph with **non-negative edge weights**.
- On graphs with negative edges, it fails, returning a Vector/List containing -1's only.

# Explanation
- `graph`: The Vector/List represents the graph. The {2,6} at graph[0] represents that weight of edge between 0 and 2 is 6. 

# Complexities
- Time Complexity: O((V + E) * logV)
- Space Complexity: O(V + E)
E: Number of edges,    V: Number of vertices