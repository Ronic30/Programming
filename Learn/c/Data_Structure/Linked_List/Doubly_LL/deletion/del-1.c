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

struct node * delFrmStrt(struct node * head){
    struct node * prt = head;
    head = head -> next;
    free(prt);

    return head;
}

int main(){
    struct node * head = (struct node * )malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * fourth = (struct node *)malloc(sizeof(struct node));

    head -> data = 0;
    head -> next = second;
    head -> prev = NULL;

    second -> data = 1;
    second -> next = third;
    second -> prev = head;

    third -> data = 2;
    third -> next = fourth;
    third -> prev = second;

    fourth -> data = 3;
    fourth -> next = NULL;
    fourth -> prev = third;

    head = delFrmStrt(head);
    traverse(head);

    return 0;
}