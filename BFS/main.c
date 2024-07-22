#include "Utility/graph.h"
#include "Utility/queue.h"

void bfs(struct Graph* g, int startVertex) {
    struct Queue* q = createQueue();
    g->visited[startVertex] = 1;
    enqueue(q, startVertex);
    while (!isEmpty(q))
    {
        int currentVertex = dequeue(q);
        printf("Visited %d\n", currentVertex);

        for (int i = 0; i < g->numVertices; i++)
        {
            if(g->adjMatrix[currentVertex][i] == 1 && g->visited[i] == 0){
                g->visited[i] = 1;
                enqueue(q, i);
            }
        }
    }
}

int main() {
    struct Graph* targetGraph = createGraph(6);
    addEdge(targetGraph, 0, 1);
    addEdge(targetGraph, 0, 2);
    addEdge(targetGraph, 1, 2);
    addEdge(targetGraph, 1, 4);
    addEdge(targetGraph, 2, 3);
    addEdge(targetGraph, 3, 4);
    addEdge(targetGraph, 4, 5);

    bfs(targetGraph, 0); // Start from vertex 0
    return 0;
}
