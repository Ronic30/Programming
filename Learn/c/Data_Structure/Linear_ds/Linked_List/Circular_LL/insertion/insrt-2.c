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

struct node * insrtAtIndx(struct node * head, int index){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    struct node * temp = head;
    int i = 0;
    while(i != index - 1){
        temp = temp -> next;
        i++;
    }
    
    newNode -> data = 11;
    newNode -> next = temp -> next;
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
    
    head = insrtAtIndx(head, 2);
    traverse(head);
}