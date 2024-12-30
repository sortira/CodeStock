import java.util.*;

public class Prims_Sparse {
    static class Edge implements Comparable<Edge> {
        int vertex;
        int weight;

        Edge(int v, int w) {
            this.vertex = v;
            this.weight = w;
        }

        public int compareTo(Edge e) {
            return this.weight - e.weight;
        }
    }

    public static int prim(int V, int E, int[][] graph) {
        List<List<Edge>> adj = new ArrayList<>();
        for (int i = 0; i < V; i++) {
            adj.add(new ArrayList<>());
        }

        for (int i = 0; i < E; i++) {
            int u = graph[i][0];
            int v = graph[i][1];
            int wt = graph[i][2];
            adj.get(u).add(new Edge(v, wt));
            adj.get(v).add(new Edge(u, wt));
        }

        PriorityQueue<Edge> pq = new PriorityQueue<>();
        boolean[] visited = new boolean[V];
        int res = 0;

        pq.offer(new Edge(0, 0));

        while (!pq.isEmpty()) {
            Edge edge = pq.poll();
            int u = edge.vertex;

            if (visited[u]) {
                continue;
            }

            res += edge.weight;
            visited[u] = true;

            for (Edge e : adj.get(u)) {
                if (!visited[e.vertex]) {
                    pq.offer(new Edge(e.vertex, e.weight));
                }
            }
        }

        return res;
    }

    public static void main(String[] args) {
        int V = 5;
        int[][] graph = {
                {0, 1, 2},
                {0, 3, 6},
                {1, 2, 3},
                {1, 3, 8},
                {1, 4, 5},
                {2, 4, 7},
                {3, 4, 9}
        };
        int E = graph.length;

        int mstSum = prim(V, E, graph);
        System.out.println("Sum of edges in MST is: " + mstSum);
    }
}
