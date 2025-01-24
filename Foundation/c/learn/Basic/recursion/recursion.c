#include <stdio.h>

void printhlo();

int main(int count){

    return 0;
}

void printhlo(int count){
    if(count == 0){
        return;
    }
    printf("Hello!");
    printhlo(count-1);
}