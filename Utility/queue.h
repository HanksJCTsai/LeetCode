#pragma once

#ifndef QUEUE_H
#define QUEUE_H
#define MAX 1000 // 佇列最大長度

// 定義佇列結構
struct Queue {
    int items[MAX]; // 存放佇列元素的陣列
    int front; // 佇列前端指標
    int rear; // 佇列後端指標
};

// 創建佇列
struct Queue* createQueue();

// 判斷佇列是否為空
int isEmpty(struct Queue* q);

// 將元素加入佇列
void enqueue(struct Queue* q, int value);

// 從佇列中取出元素
int dequeue(struct Queue* q);

#endif // QUEUE_H