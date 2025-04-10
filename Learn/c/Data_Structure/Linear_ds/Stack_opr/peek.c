#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,15};
    int size = sizeof(arr)/sizeof(int);
    int tos = size - 1;
    
    if(tos == -1){
        printf("Stack is Empty!");
    }
    else{
        printf("%d", arr[tos]);
    }
    
    return 0;
}