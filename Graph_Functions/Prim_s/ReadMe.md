# Prims's Algorithm
It is an algorithm used to find the Minimum Spanning Tree(MST) of a graph.

# Minimum Spanning Tree (MST)
It is a subset of the edges of a given graph that connects all vertices in the graph, without forming any cycles, and with minimum possible total edge weight.

# Explanation
- The algorithm is implemented in two different ways for `Dense` and `Sparse` graphs.

# Complexities
## Dense Graph
- Time Complexity: O(V<sup>2</sup>)
- Space Complexity: O(V<sup>2</sup>)

## Sparse Graph
- Time Complexity: O(E * log(V))
- Space Complexity: O(E + V) <br>
E: Number of edges, V: Number of vertices