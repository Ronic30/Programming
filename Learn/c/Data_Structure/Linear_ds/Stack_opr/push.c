#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int tos = 4;
    int size = 6;
    int data = 150;

    if (tos == size - 1)
    {
        printf("Stack is Full! \n");
    }
    else
    {
        tos = tos + 1;
        arr[tos] = data;

        printf("Modified Array : ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}