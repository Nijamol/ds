#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTICES 100
typedef struct{
int items[MAX_VERTICES];
int front;
int rear;
}Queue;
void initializeQueue(Queue*q){
q->front=-1;
q->rear=-1;
}
bool is empty(Queue*q){
return(q->front==-1);
}
void enqueue(Queue*q,int value)
{
if(is empty(q)){
q->front=0;
}
q->rear++;
q->items[q->rear]=value;
}
int dequeue(Queue*q){
int value=q->items[q->front];
q->front++;
if(q->front>q->rear){
initializeQueue(q);
}
return value;
}
void bfs(int graph[MAX_VERTICES]
[MAX_VERTICES],int starVertex,
bool visited[MAX_VERTICES],int numVertices){
Queue q;
initializeQueue(&q);
printf("BFS tRAVERSAL:");
PRINTF("%D",starVertex
