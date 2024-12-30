import java.util.Arrays;

public class FloydWarshall {
    private static final int INF = Integer.MAX_VALUE;

    public static int[][] floydWarshall(int[][] graph) {
        int V = graph.length;
        int[][] distance = new int[V][V];

        for (int i = 0; i < V; i++) {
            distance[i] = Arrays.copyOf(graph[i], V);
        }

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

    public static void main(String[] args) {
        int[][] graph = {
            { 0, 5, INF, 10 },
            { INF, 0, 3, INF },
            { INF, INF, 0, 1 },
            { INF, INF, INF, 0 }
        };

        int[][] ans = floydWarshall(graph);

        int V = ans.length;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (ans[i][j] == INF)
                    System.out.print("INF ");
                else
                    System.out.print(ans[i][j] + "   ");
            }
            System.out.println();
        }
    }
}
