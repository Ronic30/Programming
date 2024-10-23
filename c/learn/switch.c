#include <stdio.h>

int main(){
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d", &marks);

    switch(marks){
        case(90):
            printf("A+");
            break;

        case(80):
            printf("B+");
            break;
    }
}