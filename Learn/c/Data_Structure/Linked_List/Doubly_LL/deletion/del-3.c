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

struct node * delFrmEnd(struct node * head){
    struct node * p = head;
    struct node * q = head -> next;
    
    while(q -> next != NULL){
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    
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
    
    head = delFrmEnd(head);
    traverse(head);
    
    return 0;
}