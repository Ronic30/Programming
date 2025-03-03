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

struct node * insrtAtEnd(struct node * head){
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = 1;
    newNode -> next = NULL;

    struct node * temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    return head;
    
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
    
    head = insrtAtEnd(head);
    traverse(head);
    
    return 0;
}