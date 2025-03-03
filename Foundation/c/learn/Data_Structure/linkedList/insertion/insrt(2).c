#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traverse(struct node * prt){
    while(prt != NULL){
        printf("%d ", prt -> data);
        prt = prt -> next;
    }
}

struct node * insrtAtIndx(struct node * head, int index){
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    int i = 0;
    struct node * temp = head;
    
    while(i != index - 1){
        temp = temp -> next;
        i++;
    }
    
    newNode -> data = 1;
    newNode -> next = temp -> next;
    temp -> next = newNode;
    
}

int main(){
    
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * second = (struct node*)malloc(sizeof(struct node));
    struct node * third = (struct node*)malloc(sizeof(struct node));
    
    head -> data = 100;
    head -> next = second;
    
    second -> data = 200;
    second -> next = third;
    
    third -> data = 300;
    third -> next = NULL;
    
    head = insrtAtIndx(head, 1);
    traverse(head);
    
    return 0;
}