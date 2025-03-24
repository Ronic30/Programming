#include <stdio.h>

void merge(int arr[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++){
        L[i] = arr[p + i];
    }

    for(int j = 0; j < n2; j++){
        R[j] = arr[q + 1 + j];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int middle = (left + right)/2;
 
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

void print(int arr[] , int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[] = {12,43,10,3,50};
    int size = sizeof(arr)/sizeof(int);

    mergeSort(arr, 0, size - 1);

    printf("Sorted Array : ");
    print(arr, size);

    return 0;
}

