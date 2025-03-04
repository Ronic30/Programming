#include <stdio.h>
void push(int arr[], int size, int tos, int value){
    if(tos == size - 1){
        printf("Stack is Full!");
    }
    else{
        tos = tos + 1;
        arr[tos] = value;
        
        printf("Modified Stack after Push : ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

void pop(int arr[], int size, int tos){
    if(tos == -1){
        printf("Stack is Empty!");
    }
    else{
        tos = tos - 1;
        size --;
        
        printf("Modified Stack after Pop : ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

void peek(int arr[], int size, int tos){
    if(tos == -1){
        printf("Stack is Empty!");
    }
    else{
        printf("Peek : %d", arr[tos]);
    }
    printf("\n");
}

int main(){
    int arr[] = {11,22,33,44,55};
    int size = 6;
    int tos = 4;
    int value = 66;
    
    push(arr, size, tos, value);
    pop(arr, size, tos);
    peek(arr, size, tos);
    
    return 0;
}