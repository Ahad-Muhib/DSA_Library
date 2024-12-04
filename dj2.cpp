#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define V 5

// Function to find the vertex with the minimum distance
int minDistance(int dist[], bool visited[]) {
    int min = INT_MAX, minIndex;
    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] < min) {
            min = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Function to implement Dijkstra's algorithm
void dijkstra(int graph[V][V], int src) {
    int dist[V];
    bool visited[V] = {false};

    // Initialize distances to all vertices as infinity and visited as false
    for (int i = 0; i < V; i++) dist[i] = INT_MAX;
    dist[src] = 0;

    // Shorten the main loop
    for (int count = 0; count < V; count++) {
        int u = minDistance(dist, visited);
        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    // Print the result
    printf("Vertex\t\tDistance from Source\n");
    for (int i = 0; i < V; i++) {
        printf("%d\t\t%d\n", i, dist[i]);
    }
}

int main()
{
    int graph[V][V] = { 
        { 0, 0, 0, 0, 1 },
        { 0, 0, 0, 3, 6 },
        { 3, 2, 0, 7, 0 },
        { 0, 0, 0, 0, 5 },
        { 0, 0, 0, 0, 0 },
    };

    int source1 = 2;
    printf("Shortest distances from source %d:\n", source1);
    dijkstra(graph, source1);

    int source2 = 1;
    printf("\nShortest distances from source %d:\n", source2);
    dijkstra(graph, source2);

    return 0;
}
