#include <stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE];
int front = -1;
int rear = -1;

void insert(int item){
    if(front == (rear + 1) % MAXSIZE){
        printf("\n Overflow");
    }
    else{
        rear = (rear + 1) % MAXSIZE;
        queue[rear] = item;
        
        if(front == -1){
            front = rear;
        }
    }
}

int delete(){
    int item = 0;
    if(front == -1){
        printf("\n Underflow");
        return -1;
    }
    else{
        item = queue[front];
        if (front == rear) { // Handle deleting the last element
            front = -1;
            rear = -1;}
        else{
        front = (front + 1) % MAXSIZE;}
    return item;
    }
}

void traverse(){
    if(front == -1){
        printf("\n Underflow");
        return;
    }
    else{
        int i = front;
        do {
            printf("%d\n", queue[i]);
            i = (i + 1) % MAXSIZE;
        } while (i != (rear + 1) % MAXSIZE); // Correct loop condition
    }
}
    
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    
    traverse();
    
    printf("Deleted: %d\n", delete());
    traverse();
    
    return 0;
}