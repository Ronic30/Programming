#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

int isFull(){
    return(rear == MAX_SIZE - 1);
}

int isEmpty(){
    return(front == -1);
}

void enqueue(int value){
    if(isFull()){
        printf("Queue os Full!\n");
    }
    else{
        if(front == -1) front = 0;
        rear = rear + 1;
        queue[rear] = value;
    }
}

int dequeue(){
    if(isEmpty()){
        printf("Queue is Empty! \n");
        return -1;
    }
    else{
        int dequeuedValue = queue[front];
        front = front + 1;
        return dequeuedValue;
    }
}

int peek(){
    if(isEmpty()){
        printf("Queue is Empty! \n");
        return -1;
    }
    return queue[front];
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    printf("Front element: %d\n", peek());

    printf("Dequeued: %d\n", dequeue());

    printf("Front element: %d\n", peek());

    return 0;
}