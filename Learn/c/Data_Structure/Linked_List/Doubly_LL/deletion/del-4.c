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

struct node * delVal(struct node * head, int value){
    struct node * p = head;
    struct node * q = head -> next;
    while(q -> data != value && q -> next != NULL){
        p = p -> next;
        q = q -> next;
    }
    
    if(q -> data == value){
        p -> next = q -> next;
        free(q);
    }
    return head;
}

int main(){
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * second = (struct node*)malloc(sizeof(struct node));
    struct node * third = (struct node*)malloc(sizeof(struct node));
    struct node * fourth = (struct node*)malloc(sizeof(struct node));
    
    head -> data = 1;
    head -> next = second;
    head -> prev = NULL;
    
    second -> data = 2;
    second -> next = third;
    second -> prev = head;
    
    third -> data = 3;
    third -> next = fourth;
    third -> prev = second;
    
    fourth -> data = 4;
    fourth -> next = NULL;
    fourth -> prev = third;
    
    head = delVal(head, 3);
    traverse(head);
    
    return 0;
}