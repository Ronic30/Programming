#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull(){
    return(rear == MAX_SIZE - 1);
}

int isEmpty(){
    return(front == -1);
}

void enqueue(int value){
    if(isFull()){
        printf("Queue is Full!\n");
    }
    else{
        if(front == -1) front = 0;
        rear = rear + 1;
        queue[rear] = value;
    }
}

int dequeue(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
        return -1;
    }
    int dequeued_value = queue[front];
    front = front + 1;
    return dequeued_value;
}

int traverse(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
        return -1;
    }
    int count = 0;
    for(int i = front; i <= rear; i++){
        printf("%d ", queue[i]);
        count++;
    }
    printf("\n");
    printf("Total Elements in a Queue : %d", count);

}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    printf("Queue after Enqueue :");
    traverse();
    printf("\n");
    printf("Queue after Dequeue : ", dequeue());
    traverse();

    return 0;
}