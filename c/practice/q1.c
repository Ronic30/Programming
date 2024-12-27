// C Program to Find Largest Element in an Array

#include <stdio.h>

int maxdigit(int arr[], int size){
    int max = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d", max);                                          
}

int main(){
    int arr[] = {1,23,450,73,99};
    int size = sizeof(arr)/sizeof(arr[0]);

    maxdigit(arr, size);

    return 0;
}