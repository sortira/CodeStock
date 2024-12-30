#include <bits/stdc++.h>
using namespace std;

int prim(int V, int E, vector<vector<int>>& graph) {
    vector<vector<pair<int, int>>> adj(V);
    for(int i=0;i<E;i++) {
        int u = graph[i][0];
        int v = graph[i][1];
        int wt = graph[i][2];
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<bool> visited(V);
    int res = 0;
    
    pq.push({0, 0});

    while(!pq.empty()) {
        auto p = pq.top();
        pq.pop();
        int wt = p.first;
        int u = p.second;

        if(visited[u]) {
            continue;
        }

        res+=wt;
        visited[u] = true;

        for(auto v: adj[u]){
            if(!visited[v.first]) {
                pq.push({v.second, v.first});
            }
        }
    }

    return res;
}

int main() {
    int v = 5;
    vector<vector<int>> graph = {{0, 1, 2},
                                 {0, 3, 6},
                                 {1, 2, 3},
                                 {1, 3, 8},
                                 {1, 4, 5},
                                 {2, 4, 7},
                                 {3, 4, 9}};
    int e = graph.size();
    int mstSum = prim(v, e, graph);

    cout<<"Sum of edges in MST is: "<<mstSum<<endl;
}