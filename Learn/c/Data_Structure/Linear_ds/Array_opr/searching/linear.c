#include <stdio.h>

int linearsrch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 2, 8, 4, 12, 3};
    int size = sizeof(arr) / sizeof(int);
    int element = 18;

    int result = linearsrch(arr, size, element);

    if (result == -1){
        printf("Element not Found!");
    }

    else{
        printf("We found the Element %d at %d", element, result);
    }

    return 0;
}
