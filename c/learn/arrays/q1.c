#include <stdio.h>

int sumup(int arr[], int size, int sum){
    sum = 0; 

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {23, 34, 21, 90, 54};
    int size = 5;
    int sum = 0;

    printf("%d", sumup(arr, size, sum));

    return 0;
}