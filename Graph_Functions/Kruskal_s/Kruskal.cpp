#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, weight;
};

bool cmp(Edge& a, Edge& b) {
    return a.weight < b.weight;
}

int findParent(int u, vector<int>& parent) {
    if (parent[u] == u) {
        return u;
    }
    return parent[u] = findParent(parent[u], parent);
}

void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
    int rootU = findParent(u, parent);
    int rootV = findParent(v, parent);
    
    if (rootU != rootV) {
        if (rank[rootU] > rank[rootV]) {
            parent[rootV] = rootU;
        }
        else if (rank[rootU] < rank[rootV]) {
            parent[rootU] = rootV;
        }
        else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

vector<Edge> kruskal(int n, vector<Edge>& edges) {
    vector<int> parent(n);
    vector<int> rank(n, 0);
    vector<Edge> mstEdges;

    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    sort(edges.begin(), edges.end() ,cmp);

    for (Edge& e : edges) {
        int rootU = findParent(e.u, parent);
        int rootV = findParent(e.v, parent);

        if (rootU != rootV) {
            mstEdges.push_back(e);
            unionSets(e.u, e.v, parent, rank);
        }
    }
    return mstEdges;
}

int main() {

    int n = 4;
    vector<Edge> edges = {{0, 1, 10},{0, 2, 6},{0, 3, 5},{1, 3, 15},{2, 3, 4}};
    vector<Edge> mstEdges = kruskal(n, edges);
    
    int mstWeight = 0;
    cout << "Edges in the Minimum Spanning Tree (MST):\n";
    for (const Edge& e: mstEdges) {
        cout << e.u << " - " << e.v << " with weight " << e.weight << endl;
        mstWeight += e.weight;
    }
    cout << "Total weight of MST: " << mstWeight << endl;

    return 0;
}
