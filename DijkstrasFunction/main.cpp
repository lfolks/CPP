/*
 * Author: Lloyd Folks
 */
#include <limits.h>
#include <stdio.h>

// Number of vertices
#define V 10

int minDistance(int dist[], bool sptSet[]){
    int min = INT_MAX, min_index;
    
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// Print vertex array
int printSolution(int dist[]){
    printf("Vertex \t Distance from Source\n");
    
    for (int i = 0; i < V; i++)
        printf("%d \t %d\n", i, dist[i]);
}

// Dijkstra's Function
void DA(int graph[V][V], int src){
    int dist[V];
    bool sptSet[V];
    
    for(int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    // Set distance of source to 0
    dist[src] = 0;

    // Find shortest path
    for(int count = 0; count < V - 1; count++){
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        
        for(int v = 0; v < V; v++)
            if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    // print the constructed array
    printSolution(dist);
}

int main(){
    /* Let us create the example graph discussed above */
    int graph[V][V] = {
    	{ 2, 9, 6, 4, 9, 2, 5, 9, 7, 1 },
    	{ 6, 3, 1, 1, 7, 3, 8, 5, 5, 4 },
    	{ 9, 6, 5, 10, 8, 10, 6, 9, 1, 8 },
    	{ 10, 8, 5, 9, 10, 3, 4, 2, 1, 8 },
    	{ 5, 6, 9, 9, 7, 6, 9, 4, 6, 1 },
    	{ 3, 5, 2, 9, 5, 10, 4, 4, 7, 5 },
    	{ 10, 8, 9, 3, 10, 4, 9, 9, 2, 10 },
    	{ 8, 3, 3, 1, 5, 8, 9, 1, 2, 10 },
    	{ 7, 1, 9, 6, 10, 7, 2, 6, 9, 4 },
    	{ 2, 5, 6, 10, 10, 9, 1, 7, 5, 8 }
	};

    DA(graph, 0);

    return 0;
}

