#pragma once

#ifndef GRAPH_H
#define GRAPH_H

// 定義圖結構
struct Graph {
    int numVertices; // 頂點數量
    int *edges; // 邊數量
    int** adjMatrix; // 鄰接矩陣
    int* visited; // 訪問過的頂點
};

// 創建圖
struct Graph* createGraph(int numVertices);

// 添加邊
void addEdge(struct Graph* graph, int src, int dest);
#endif // GRAPH_H