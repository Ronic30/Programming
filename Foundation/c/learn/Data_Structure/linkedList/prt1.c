#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* newNode(int ndata){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = ndata;
    temp -> next = NULL;
    return temp;
}