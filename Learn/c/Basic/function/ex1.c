#include <stdio.h>

void sayhello();
void saygb();

int main(){
    sayhello();
    saygb();

    return 0;
}

void sayhello(){
    printf("Hello!\n");
}
void saygb(){
    printf("Good Bye!");
}