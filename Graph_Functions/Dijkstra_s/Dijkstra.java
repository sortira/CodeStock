import java.util.*;

public class Dijkstra {

    public static List<Integer> dijkstra(int V, List<List<int[]>> graph, int S) {

        for (List<int[]> neighbors : graph) {
            for (int[] edge : neighbors) {
                if (edge[1] < 0) {
                    List<Integer> res = new ArrayList<>(Collections.nCopies(V, -1));
                    return res;
                }
            }
        }

        TreeSet<int[]> st = new TreeSet<>((a, b) -> a[0] == b[0] ? Integer.compare(a[1], b[1]) : Integer.compare(a[0], b[0]));
        List<Integer> dist = new ArrayList<>(Collections.nCopies(V, Integer.MAX_VALUE));

        st.add(new int[]{0, S});
        dist.set(S, 0);

        while (!st.isEmpty()) {
            int[] current = st.pollFirst();
            int dis = current[0];
            int node = current[1];

            for (int[] neighbor : graph.get(node)) {
                int adjNode = neighbor[0];
                int edgeWeight = neighbor[1];

                if (dis + edgeWeight < dist.get(adjNode)) {
                    if (dist.get(adjNode) != Integer.MAX_VALUE) {
                        st.remove(new int[]{dist.get(adjNode), adjNode});
                    }
                    dist.set(adjNode, dis + edgeWeight);
                    st.add(new int[]{dist.get(adjNode), adjNode});
                }
            }
        }
        return dist;
    }

    public static void main(String[] args) {
        int V = 4, S = 2;
        List<List<int[]>> graph = new ArrayList<>();

        for (int i = 0; i < V; i++) {
            graph.add(new ArrayList<>());
        }

        graph.get(0).add(new int[]{1, 1});
        graph.get(0).add(new int[]{2, 6});
        graph.get(1).add(new int[]{2, 3});
        graph.get(1).add(new int[]{0, 1});
        graph.get(2).add(new int[]{1, 3});
        graph.get(2).add(new int[]{0, 6});

        List<Integer> res = dijkstra(V, graph, S);

        for (int i = 0; i < V; i++) {
            System.out.print("Shortest distance from " + S + " to " + i + " is: ");
            if (res.get(i) == Integer.MAX_VALUE) {
                System.out.println("INF");
            }
            else {
                System.out.println(res.get(i));
            }
        }
    }
}
