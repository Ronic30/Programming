#include <stdio.h>

int binarysrch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (high + low)/2;
            if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int element = 7;

    int result = binarysrch(arr, size, element);

    if(result == -1){
        printf("Element not Found!");
    }
    else{
        printf("The Element %d was found at index %d \n", element, result);
    }

    return 0;
}