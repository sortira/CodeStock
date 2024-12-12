#include <ios stream>
#include <queue>
using namespace std;
int G[1000][1000];
bool visited[1000];
int main() {
    int v,e,x,y;
    queue<int> q;
    count<<"Enter number of vertices and edges=";
    cin>>v>>e;
    while(e--) {
        cin>>x>>y;
        G[x][y]=G[y][x]=1;
    }
    count<<"Enter the start vertex=";
    cin>>x;
    visited[x]=true;
    q.push(x);
    while(!q.empty()){
        x=q.front(); q.pop();
        cout<<x<<",";
        for(int i=1;i<v;i++)
        {
            if(G[X][I] && !visited[i]){
                q.push(i);
                visited[i]=true;
            };
        };
    };
    return 0; 
}; 
