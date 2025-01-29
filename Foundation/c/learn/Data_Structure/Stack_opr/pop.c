#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int tos = 4;
    int size = 5;

    if (tos == - 1){
        printf("Stack is Empty \n");
    }
    else{
        tos = tos - 1;
        size --;
        printf("Modified Array : ");
        for (int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}