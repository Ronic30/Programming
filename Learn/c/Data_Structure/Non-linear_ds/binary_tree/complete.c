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

bool isComplete(struct node * root, int index, int numberNodes){
    if(root == NULL){
        return true;
    }

    if(index >= numberNodes){
        return false;
    }

    return(isComplete(root -> left, 2 * index + 1, numberNodes) && isComplete(root -> right, 2 * index + 2, numberNodes));
}

int countNode(struct node * root){
    if(root == NULL){
        return 0;
    }
    return(1 + countNode(root -> left) + countNode(root -> right));
}

int main(){
    struct node* root = createNode(1);

    insertLeft(root, 11);
    insertRight(root, 12);

    insertLeft(root -> left, 111);
    insertRight(root -> left, 112);

    insertLeft(root -> right, 121);
    insertRight(root -> right, 122);

    int index = 0;
    int numberNodes = countNode(root);

    if (isComplete(root, index, numberNodes))
        printf("The tree is a complete binary tree\n");
    else
        printf("The tree is not a complete binary tree\n");

}