#include <stdio.h>

void insertion(int array[], int size){
    for(int i = 1; i < size; i++){
        int curr = array[i];
        int prev = i - 1;

        while(prev >= 0 && array[prev] > curr){
            array[prev + 1] = array[prev];
            prev--;
        }
        array[prev + 1] = curr;
    }
}

void outpt(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int array[] = {2, 4, 5, 1, 3};
    int size = sizeof(array)/sizeof(array[0]);

    insertion(array,size);
    outpt(array, size);

    return 0;
}