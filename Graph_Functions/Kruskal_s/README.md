## Kruskal's Algorithm
It is an algorithm used to find the Minimum Spanning Tree(MST) of a graph.

# Minimum Spanning Tree (MST)
It is a subset of the edges of a given graph that connects all vertices in the graph, without forming any cycles, and with minimum possible total edge weight.

# Explanation
- `struct Edge`: It is used to represent an edge with two vertices (`u`,`v`) and their respective `weight`. An overloaded operator `<` is used to allow sorting of edges by their weights.

- `unionSets`: Merges two disjoint sets containing vertices `u` and `v` using union by rank.

# Complexities
- Time Complexity: O(E*logE + E*&alpha;(V))
- Space Complexity: O(V + E) <br>
E: Number of edges, V: Number of vertices, &alpha;: Inverse Ackermann Function
