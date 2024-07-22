#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = -1; // 初始化佇列前端指標
    q->rear = -1;  // 初始化佇列後端指標
    return q;
}

int isEmpty(struct Queue* q) {
    if (q->rear == -1)
        return 1;
    else
        return 0;
}

void enqueue(struct Queue* q, int value) {
    if (q->rear == MAX - 1)
        printf("\nQueue is Full!!");
    else {
        if(q->front == -1)
            q->front = 0;
        q->rear = q->rear + 1;
        q->items[q->rear] = value;
    }
}

int dequene(struct Queue* q){
    int result;
    if(isEmpty(q)){
        printf("Queue is empty");
        result = -1; // 如果佇列為空，返回-1
    }
    else {
        result = q->items[q->front]; // 取出佇列前端的元素
        q->front = q->front +1;
        if(q->front > q->rear){
            q->front = q->rear = -1; // 如果取出後佇列為空，重置佇列指標
        }
    }
    return result;
}