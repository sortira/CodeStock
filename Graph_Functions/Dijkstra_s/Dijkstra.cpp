#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector <int> dijkstra(int V, vector<vector<pair<int, int>>> graph, int S) {
    
    for(auto& i: graph) {
        for(auto& j: i) {
            if(j.second < 0) {
                vector<int> res(V,-1);
                return res;
            }
        }
    }
    set<pair<int,int>> st; 
    vector<int> dist(V, 1e9); 
    
    st.insert({0, S}); 
    dist[S] = 0;
    while(!st.empty()) {
        auto it = *(st.begin()); 
        int node = it.second; 
        int dis = it.first; 
        st.erase(it); 
        
        for(auto it : graph[node]) {
            int adjNode = it.first; 
            int edgW = it.second; 
            
            if(dis + edgW < dist[adjNode]) {
                if(dist[adjNode] != 1e9) 
                    st.erase({dist[adjNode], adjNode}); 
                dist[adjNode] = dis + edgW; 
                st.insert({dist[adjNode], adjNode}); 
             }
        }
    }
    return dist; 
}

int main() {
    int V = 4, S = 2;
    vector<vector<pair<int, int>>> graph(V);

    graph[0].push_back({1, 1});
    graph[0].push_back({2, 6});
    graph[1].push_back({2, 3});
    graph[1].push_back({0, 1});
    graph[2].push_back({1, 3});
    graph[2].push_back({0, 6});

    vector<int> res = dijkstra(V, graph, S);

    for(int i=0;i<V;i++) {
        cout<<"Shortest distance from "<<S<<" to "<<i<<" is: ";
        if(res[i] == 1e9)   cout<<"INF";
        else    cout<<res[i];
        cout<<endl;
    }

    return 0;
}