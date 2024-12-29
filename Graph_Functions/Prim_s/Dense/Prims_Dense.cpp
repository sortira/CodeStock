#include <bits/stdc++.h>
using namespace std;

int minKey(vector<int>& key, vector<bool>& mstSet, int n) {
    int mini = INT_MAX, minInd;
    for(int i=0;i<n;i++) {
        if(mstSet[i] == false && key[i] < mini) {
            mini = key[i], minInd = i;
        }
    }
    return minInd;
}

vector<vector<int>> prim(int n, vector<vector<int>>& graph) {
    vector<int> parent(n);
    vector<int> key(n, INT_MAX);
    vector<bool> mstSet(n, false);

    key[0] = 0;
    parent[0] = -1;

    for(int i=0;i<n-1;i++) {
        int u = minKey(key, mstSet, n);
        mstSet[u] = true;
        for(int j=0;j<n;j++) {
            if(graph[u][j] && mstSet[j] == false && graph[u][j] < key[j]) {
                parent[j] = u;
                key[j] = graph[u][j];
            } 
        }
    }
    vector<vector<int>> res(n-1);
    for(int i=1;i<n;i++) {
        res[i-1] = {parent[i], i, graph[parent[i]][i]};
    }

    return res;
}

int main() {
    int n = 5;
    vector<vector<int>> graph = {{ 0, 2, 0, 6, 0 },
                                 { 2, 0, 3, 8, 5 },
                                 { 0, 3, 0, 0, 7 },
                                 { 6, 8, 0, 0, 9 },
                                 { 0, 5, 7, 9, 0 }};

    vector<vector<int>> mstEdges = prim(n, graph);

    cout<<"Edge \t Weight\n";
    for(int i=0;i<n-1;i++) {
        cout<<mstEdges[i][0]<<" - "<<mstEdges[i][1]<<" \t "<<mstEdges[i][2]<<"\n";
    }

    return 0;
}