package graph_programs;
import java.util.ArrayList;

public class GraphSearch {
    int V;
    
    ArrayList<Integer> adjancency[];
    GraphSearch(int nodes){
        V = nodes;
        adj = new ArrayList[nodes];
        for(int i=0;i<V;i++) {
            adj[i]=new ArrayList<Integer>();
        }
    }

    public void addEdge(int v, int u) {
        adj[x].add[y];
    }
    
    void breadthFirstSearch(int sourcevertex) {
        boolean[] visited = new boolean[V];
        ArrayList<Integer> a1 = new ArrayList<Integer>();
        visited[startNode]=true;
        a1.add(startNode);
        while (!a1.isEmpty()) {
            startNode = a1.remove(0);
            system.out.print(startNode+" ");
            Iterator i = adj[startNode].iterator();
            while(i.hasNext()) {
                int n =(int) i.next();
                if(!visited[n]) {
                    visited[n]=true;
                    a1.add(n);
                }
            }
        }
    }

   public static void main(String[] args) {
       GraphSearch g1=new GraphSearch(6);
       g1.Edge(0, 1);
       g1.Edge(0, 2);
       g1.Edge(0, 5);
       g1.Edge(1, 0);
       g1.Edge(1, 2);
       g1.Edge(2, 0);
       g1.Edge(2, 1);
       g1.Edge(2, 3);
       g1.Edge(2, 4);
       g1.Edge(3, 2);
       g1.Edge(4, 2);
       g1.Edge(4, 5);
       g1.Edge(5, 0);
       g1.Edge(5, 4);
        
       g1.breadthFirstSearch(0);


    }

}