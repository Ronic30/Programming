#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size){
    for(int i = size / 2 - 1; i >= 0; i--){
        heapify(arr, size, i);
    }
    for(int i = size - 1; i >= 0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, size, 0);
    }
}


// INSERTION--------------------------------------
void insert(int arr[], int size, int value){
    arr[size] = value;
    size += 1;

    int current = size - 1;
    while(current != 0){
        int parent = (current - 1)/2;
        if(arr[parent] < arr[current]){
            swap(&arr[parent], &arr[current]);
            current = parent;
        }
        break;
    }
}

// DELETION----------------------------------------
void delete(int arr[], int size, int value){
    for(int i = 0; i < size; i++){
        if(arr[i] == value){
            break;
        }
        swap(&arr[i], &arr[size - 1]);
        size -= 1;
        if(i < size){
            heapify(arr, size, i);
        }
    }
}