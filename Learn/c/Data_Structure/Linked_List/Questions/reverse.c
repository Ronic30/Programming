 #include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * traverse(struct node * prt){
    while(prt != NULL){
        printf("%d ", prt -> data);
        prt = prt -> next;
    }
}

struct node * reverseList(struct node * head){
    struct node * curr = head, * prev = NULL, * next;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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
    third -> next = NULL;
    
    head = reverseList(head);
    traverse(head);
    
    return 0;
}