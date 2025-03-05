#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
};

struct node * traverse(struct node * prt){
    while(prt != NULL){
        printf("%d ", prt -> data);
        prt = prt -> next;
    }
}

struct node * insrtAtStrt(struct node * head){
    struct node * newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = -1;
    newNode -> next = head;
    newNode -> prev = NULL;
    if(head != NULL){
        head -> prev = newNode;
    }
    return newNode;
}

int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    
    head -> data = 1;
    head -> next = second;
    head -> prev = NULL;
    
    second -> data = 2;
    second -> next = third;
    second -> prev = head;
    
    third -> data = 3;
    third -> next = NULL;
    third -> prev = second;
    
    head = insrtAtStrt(head);
    traverse(head);
    
    return 0;
}