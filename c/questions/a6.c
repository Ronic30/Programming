// Calculate the sum of all the numbers between 5 and 50. (including 5 & 50) : 

#include <stdio.h>

int main(){
    int sum = 0,i ;

    for( i=5; i<=50; i++ ){
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}