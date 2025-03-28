#include <stdio.h>

void bubble(int array[], int size){
    for(int step = 0; step < size - 1; ++step ){
        for(int i = 0; i < size - step - 1; ++i){
            if(array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
            printf("\n");
        }
    }
}

void out(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int array[] = {20, -3, 4, 0, 1, -6};
    int size = sizeof(array)/sizeof(array[6]);

    bubble(array, size);
    out(array,size);

    return 0;
}