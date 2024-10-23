// WAP to print Namaste if a user is Indian and Bonjour if a user is French ;

#include <stdio.h>

void print1();
void print2();

int main(){
    char ch;

    printf("Write i for Namaste or Write f for the Bonjour : ");
    scanf("%c", &ch);

    if(ch=='i'){
        printf("Namaste");
    }
    else{
        printf("Bonjour");
    }

    return 0;
}

void print1(){
        printf("Namaste");   
    }

void print2(){
        printf("Bonjour");        
    }