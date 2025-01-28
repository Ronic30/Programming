#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int pos = 4;

    for(int i = pos; i < size; i++){
        arr[i] = arr[i + 1];
    }

    size--;

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}