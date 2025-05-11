#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int item;
    struct node* left;
    struct node* right;
};

struct node* createNode(int value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode -> item = value;
    newNode -> left  = NULL;
    newNode -> right = NULL;

    return newNode;
}

void preorderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    printf("%d -> ", root -> item);
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}

struct node* insertLeft(struct node* root, int value){
    root -> left = createNode(value);
    return root -> left;
}

struct node* insertRight(struct node* root, int value){
    root -> right = createNode(value);
    return root -> right;
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
    struct node* root = createNode(1);

    insertLeft(root, 11);
    insertRight(root, 12);

    insertLeft(root -> left, 111);
    insertRight(root -> left, 112);

    insertLeft(root -> right, 121);
    insertRight(root -> right, 122);

    if (isFull(root))
        printf("The tree is a full binary tree\n");
    else
        printf("The tree is not a full binary tree\n");

}