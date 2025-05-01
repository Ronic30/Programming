#include <stdio.h>
#include <stdlib.h>

struct node{
    int data, height;
    struct node * left, * right;
};
//-------------------------------------------------------------------------------

struct node * insertion(struct node * root, int value){
    if(root == NULL){
        return createNode(value);
    }

    if(value < root -> data){
        root -> left = insertion(root -> left, value);
    }
    else if(value > root -> data){
        root -> right = insertion(root -> right, value);
    }
    else{
        return root;
    }

    root -> height = max(height(root -> left), height(root -> right)) + 1;
    int balance = getBalance(root);

    if(balance > 1 && data < root -> left -> data){
        return rightRotate(root);
    }
    if(balance > 1 && data > root -> left -> data){
        root -> left = leftRotate(root -> left);
        return rightRotate(root);
    }

    if(balance < -1 && data < root -> right -> data){
        root -> right = rightRotate(root -> right);
        return leftRotate(root);
    }
    if(balance < -1 && data > root -> right -> data){
        leftRotate(root);
    }

    return root;
}

//--------------------------------------------------------------------------------------------

int main(){
    struct node * root = createNode(10);
  
    insertion(root, 20);
    insertion(root, 34);
    insertion(root, 5);
    insertion(root, 2);
    insertion(root, 9);
    insertion(root, 23);
    insertion(root, 7);
  
    preOrder(root);
  
    return 0;
  }