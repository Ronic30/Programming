#include <stdio.h>

int size = 0;
 void swap(int * a, int * b){
    int temp = * a;
    * a = * b;
    * b = temp;
 }

 void heapify(int array[], int size, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2
 }