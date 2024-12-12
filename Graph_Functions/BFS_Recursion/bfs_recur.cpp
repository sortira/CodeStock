#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adjList; // Adjacency list to represent the graph

    // Constructor
    Graph(int V) {
        this->V = V;
        adjList.resize(V);
    }

    // Function to add an edge to the graph
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // For undirected graph
    }

    // BFS traversal starting from a given source node
    void BFS(int start) {
        vector<bool> visited(V, false); // Keep track of visited nodes
        queue<int> q;

        // Mark the source node as visited and enqueue it
        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " "; // Process the current node

            // Visit all the adjacent nodes
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int V = 6; // Number of vertices
    Graph g(V);

    // Adding edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    // Perform BFS starting from node 0
    cout << "BFS traversal starting from node 0: ";
    g.BFS(0);

    return 0;
}

