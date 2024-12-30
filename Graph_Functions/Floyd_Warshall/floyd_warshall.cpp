#include <iostream>
#include <vector>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max();

vector<vector<int>> floydWarshall(vector<vector<int>> graph) {
    int V = graph.size();
    vector<vector<int>> distance = graph;

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (distance[i][k] != INF && distance[k][j] != INF && distance[i][k] + distance[k][j] < distance[i][j]) {
                    distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
    }

    return distance;
}

int main() {
    vector<vector<int>> graph = {{ 0, 5, INF, 10 },
                                 { INF, 0, 3, INF },
                                 { INF, INF, 0, 1 },
                                 { INF, INF, INF, 0 }};

    vector<vector<int>> ans = floydWarshall(graph);

    int V = ans.size();
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (ans[i][j] == INF)
                cout << "INF ";
            else
                cout << ans[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
