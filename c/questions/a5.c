// Print the Reverse of the table for a number n :

#include <stdio.h>

int main(){
    int num, i;
    printf("Enter the Number : ");
    scanf("%d", &num);

    for( i=10; i>=1; i-- ){
        printf("%d\n", num*i);
    }

    return 0;
}