#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int r_value = 10;
    int pos = 3;

    for(int i = size - 1; i >= pos; i--){
        arr[i + 1] = arr[i];
    }

    arr[pos] = r_value;

    size++;

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}