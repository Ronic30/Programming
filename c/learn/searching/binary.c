#include <stdio.h>

int binaryalgo(int arr[], int value, int size, int high, int low){
    int mid = (low + high)/2;
    
    if(value > mid)
        return binaryalgo(arr, value, mid + 1, high);
    
    else if(value < mid)
        return binaryalgo(arr, value, mid - 1, low);
    
    else
        return mid;
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value = 5;
    int high = size - 1;
    int low = 0;

    binaryalgo(arr, value, size, high, low );

    return 0;
}