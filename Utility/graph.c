#include "graph.h"

#include <stdio.h>
#include <stdlib.h>

// 創建圖
struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->edges = (int*)malloc(numVertices * sizeof(int*));
    graph->adjMatrix = (int*)malloc(numVertices * sizeof(int*));
    graph->visited = (int*)malloc(numVertices * sizeof(int*));
    for (int i = 0; i < numVertices; i++) {
        graph->adjMatrix[i] = (int*)malloc(numVertices * sizeof(int*));
        graph->visited[i] = 0;
        graph->edges[i] = 0;
        for (int j = 0; j < numVertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1;
    graph->adjMatrix[dest][src] = 1;
    graph->edges[src] = graph->edges[src] + 1;
}