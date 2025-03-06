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

struct node * insrtAtEnd(struct node * head){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = 10;
    newNode -> next = head;
    
    struct node * temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    
    return head;
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
    
    head = insrtAtEnd(head);
    traverse(head);
}