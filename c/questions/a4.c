// Print the factorial of a number n : 

#include <stdio.h>

int main(){
    int i, num, facto = 1;
    printf("Enter the Number of the Factorial : ");
    scanf("%d", &num);

    for ( i=1; i<=num; i++ ){
        facto = facto * i;
    }
    printf("%d", facto);

    return 0;
}