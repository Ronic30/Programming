// Keep taking Numbers as input form user until user enter an odd Number : 

#include <stdio.h>

int main(){
    int num;
    do
    {
        printf("Enter the even number : ");
        scanf("%d",&num);
        printf("%d\n", num);

        if (num%2!=0)
        {
            break;
        }
    } while (1);
    printf("Error!");
    
    return 0;
}