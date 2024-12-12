import java.util.*;

class Graph {
    private Map<Integer, List<Integer>> adjList;

    public Graph() {
        adjList = new HashMap<>();
    }

    // Add an edge to the graph
    public void addEdge(int src, int dest) {
        adjList.putIfAbsent(src, new ArrayList<>());
        adjList.putIfAbsent(dest, new ArrayList<>());
        adjList.get(src).add(dest);
        adjList.get(dest).add(src);  // For undirected graph, add the reverse edge
    }

    // BFS Traversal from a given source node
    public void BFS(int startNode) {
        // Track visited nodes
        Set<Integer> visited = new HashSet<>();
        // Queue for BFS
        Queue<Integer> queue = new LinkedList<>();
        
        // Mark the starting node as visited and enqueue it
        visited.add(startNode);
        queue.offer(startNode);

        while (!queue.isEmpty()) {
            // Dequeue a node from the queue and print it
            int node = queue.poll();
            System.out.print(node + " ");
            
            // Get all the adjacent nodes of the dequeued node
            // If an adjacent node hasn't been visited, mark it visited and enqueue it
            for (int neighbor : adjList.get(node)) {
                if (!visited.contains(neighbor)) {
                    visited.add(neighbor);
                    queue.offer(neighbor);
                }
            }
        }
    }

    public static void main(String[] args) {
        // Create a graph
        Graph graph = new Graph();
        
        // Add edges to the graph
        graph.addEdge(0, 1);
        graph.addEdge(0, 2);
        graph.addEdge(1, 3);
        graph.addEdge(1, 4);
        graph.addEdge(2, 5);
        graph.addEdge(2, 6);

        // Perform BFS starting from node 0
        System.out.println("BFS Traversal starting from node 0:");
        graph.BFS(0);
    }
}
