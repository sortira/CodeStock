import java.util.*;

class Edge implements Comparable<Edge> {
    int u, v, weight;

    Edge(int u, int v, int weight) {
        this.u = u;
        this.v = v;
        this.weight = weight;
    }

    @Override
    public int compareTo(Edge other) {
        return this.weight - other.weight;
    }
}

public class KruskalAlgorithm {
    public static int findParent(int u, int[] parent) {
        if (parent[u] == u) {
            return u;
        }
        return parent[u] = findParent(parent[u], parent);
    }

    public static void unionSets(int u, int v, int[] parent, int[] rank) {
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

    public static List<Edge> kruskal(int n, List<Edge> edges) {
        int[] parent = new int[n];
        int[] rank = new int[n];
        List<Edge> mstEdges = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }

        Collections.sort(edges);

        for (Edge e : edges) {
            int rootU = findParent(e.u, parent);
            int rootV = findParent(e.v, parent);

            if (rootU != rootV) {
                mstEdges.add(e);
                unionSets(e.u, e.v, parent, rank);
            }
        }

        return mstEdges;
    }

    public static void main(String[] args) {
        int n = 4;
        List<Edge> edges = Arrays.asList(
            new Edge(0, 1, 10),
            new Edge(0, 2, 6),
            new Edge(0, 3, 5),
            new Edge(1, 3, 15),
            new Edge(2, 3, 4)
        );

        List<Edge> mstEdges = kruskal(n, edges);

        System.out.println("Edges in the Minimum Spanning Tree (MST):");
        int mstWeight = 0;
        for (Edge e : mstEdges) {
            System.out.println(e.u + " - " + e.v + " with weight " + e.weight);
            mstWeight += e.weight;
        }

        System.out.println("Total weight of MST: " + mstWeight);
    }
}
