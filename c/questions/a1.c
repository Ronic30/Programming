// print the number from 0 to n, if n is given b the user( n = 4) :
// print reverse of it :

#include <stdio.h>

int main(){
    int i,n, sum;
    printf("Enter the Number : ");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++){
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("%d", sum);
    // for (i=n ; i>= 0 ; i--){
    //     printf("%d\n", i);
    // }

    return 0;
}