// Print table of 5 ;

#include <stdio.h>

void table(int a);

int main(){
    int a;
    printf("Enter the Number : ");
    scanf("%d", &a);

    table(a);

    return 0;
}

void table(int a){
    for(int i = 1; i<=10; i++){
        printf("%d\n",i*a);
    }
}