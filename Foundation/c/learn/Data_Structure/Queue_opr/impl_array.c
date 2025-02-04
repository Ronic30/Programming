#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct{
    int arr[MAX_SIZE];
    int front;
    int rear;
    int size;
}Queue;

Queue* createQueue(){
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue -> front = 0;
    queue -> rear = -1;
    queue -> size = 0;
    return queue;
}

int isFull(Queue* queue){
    return queue -> size == MAX_SIZE;
}

int isEmpty(Queue* queue){
    return queue -> size == 0;
}

void enqueue(Queue* queue, int value){
    if(isFull(queue)){
        printf("Queue is Full. Cannot Enqueue.\n");
        return;
    }
    queue -> rear = (queue -> rear + 1) % MAX_SIZE;
    queue -> arr[queue -> rear] = value;
    queue -> size++;
}

int dequeue(Queue* queue){
    if(isEmpty(queue)){
        printf("Queue is Empty. Cannot Dequeue.\n");
        return -1;
    }
    int dequeuedValue = queue -> arr[queue -> front];
    queue -> front = (queue -> front + 1) % MAX_SIZE;
    queue -> size--;
    return dequeuedValue;
}

int peek(Queue* queue){
    if(isEmpty(queue)){
        printf("Queue is Empty. Cannot Peek.\n");
    }
    return queue -> arr[queue -> front];
}

int main(){
    Queue* q = createQueue();

    enqueue(q, 101);
    enqueue(q, 201);
    enqueue(q, 301);

    printf("Dequeued: %d\n",dequeue(q)); 
    printf("Front element: %d\n", peek(q));
    return 0;
}