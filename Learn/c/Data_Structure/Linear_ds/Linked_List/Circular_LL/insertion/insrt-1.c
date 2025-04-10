#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * traverse(struct node * prt){
    struct node * strt = prt;
    
    while(prt != NULL){
        printf("%d ", prt -> data);
        prt = prt -> next;
        if(prt == strt){
            break;
        }
    }
}

struct node * insrtAtStrt(struct node * head){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    struct node * p = head -> next;
    
    while(p -> next != head){
        p = p -> next;
    }
    p -> next = newNode;
    newNode -> data = 11;
    newNode -> next = head;
    return newNode;
}

int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    
    head -> data = 0;
    head -> next = second;
    
    second -> data = 1;
    second -> next = third;
    
    third -> data = 2;
    third -> next = head;
    
    head = insrtAtStrt(head);
    traverse(head);
}