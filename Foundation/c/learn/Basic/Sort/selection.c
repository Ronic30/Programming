#include <stdio.h>

void selection(int array[], int size){
    for( int i=0; i<size-1; i++){
        int smallest = i;
        for( int j=i+1; j<size; j++){
            if(array[smallest] > array[j]){
                int smallest = j;
            }
        }
        int temp = smallest;
        smallest = array[i];
        array[i] = temp;
    }
}

void out(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int array[] = {20, -3, 4, 0, 1, -6};
    int size = sizeof(array)/sizeof(array[0]);

    selection(array, size);
    out(array,size);

    return 0;
}