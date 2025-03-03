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

struct node * delFromIndx(struct node * head, int index){
    struct node * p = head;
    struct node * q = head -> next;
    
    for(int i = 0; i < index - 1; i++){
        p = p -> next;
        q = q -> next;
    }
    p -> next = q -> next;
    free(q);
    return head;
}


int main(){
    
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * second = (struct node*)malloc(sizeof(struct node));
    struct node * third = (struct node*)malloc(sizeof(struct node));
    struct node * fourth = (struct node*)malloc(sizeof(struct node));
    
    head -> data = 100;
    head -> next = second;
    
    second -> data = 200;
    second -> next = third;
    
    third -> data = 300;
    third -> next = fourth;
    
    fourth -> data = 400;
    fourth -> next = NULL;
    
    head = delFromIndx(head, 2);
    traverse(head);
    
    return 0;
}