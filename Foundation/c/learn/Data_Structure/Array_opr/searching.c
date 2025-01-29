#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    
    for(int i = 0; i < size; i++){
        if(arr[i] == 4){
            printf("Found!");
        }
        // return -1;
    }

    return 0;
}