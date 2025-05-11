#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int value;
    struct node * left;
    struct node * right;
};

struct node * createNode(int data){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    
    newNode -> value = data;
    newNode -> left = newNode -> right = NULL;
    
    return newNode;
}

struct node * left(struct node * root, int data){
    root -> left = createNode(data);
    return root -> left;
}

struct node * right(struct node * root, int data){
    root -> right = createNode(data);
    return root -> right;
}

void preOrder(struct node * root){
    if(root == NULL){
        return;
    }
    printf("%d ", root -> value);
    preOrder(root -> left);
    preOrder(root -> right);
}

int countNode(struct node * root){
    if(root == NULL){
        return 0;
    }
    return(1 + countNode(root -> left) + countNode(root -> right));
}

bool isComplete(struct node * root, int index, int numberNode){
    if(root == NULL){
        return true;
    }
    if(index >= numberNode){
        return false;
    }
    return(isComplete(root -> left, 2 * index + 1, numberNode) && isComplete(root -> right, 2 * index + 2, numberNode));
}

bool isFull(struct node * root){
    if(root == NULL){
        return true;
    }
    if(root -> left == NULL && root -> right == NULL){
        return true;
    }
    if((root -> left) && (root -> right)){
        return(isFull(root -> left) && isFull(root -> right));
    }
    return false;
}

int main(){
    struct node * root = createNode(00);
    
    left(root, 10);
    right(root, 20);
    left(root -> left, 11);
    right(root -> left, 12);
    right(root -> right, 22);
    //left(root -> right, 21);
    
    //preOrder(root);
    //printf("\nNumbers of Node : %d", countNode(root));
    
    int index = 0;
    int numberNode = countNode(root);
    
    if(isComplete(root, index, numberNode))
        printf("The tree is a complete binary tree\n");
    else
        printf("The tree is not a complete binary tree\n");
        
    if (isFull(root))
        printf("The tree is a full binary tree\n");
    else
        printf("The tree is not a full binary tree\n");

    return 0;
}