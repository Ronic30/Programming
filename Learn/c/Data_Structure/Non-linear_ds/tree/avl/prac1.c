#include <stdio.h>
#include <stdlib.h>

struct node{
    int value, height;
    struct node * left, * right;
};

struct node * createNode(int data){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));

    newNode -> value = data;
    newNode -> height = 1;
    newNode -> left = newNode -> right = NULL;

    return newNode;
}

void preOrder(struct node * root){
    if(root == NULL){
        return;
    }
    printf("%d ", root -> value);
    preOrder(root -> left);
    preOrder(root -> right);
}

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int height(struct node * n){
    if(n == NULL){
        return 0;
    }
    return n -> height;
}

int getBalance(struct node * n){
    if(n == NULL){
        return 0;
    }
    return height(n -> left) - height(n -> right);
}

struct node * minValue(struct node * root){
    struct node * curr = root;
    while(curr && curr != NULL){
        curr = curr -> left;
    }
    return curr;
}

struct node * rightRotate(struct node * y){
    struct node * x = y -> left;
    struct node * t2 = x -> right;

    x -> right = y;
    y -> left = t2;

    x -> height = max(height(x -> left), height(x -> right)) + 1;
    y -> height = max(height(y -> left), height(y -> right)) + 1;

    return x;
}

struct node * leftRotate(struct node * x){
    struct node * y = x -> right;
    struct node * t2 = y -> left;

    y -> right = x;
    x -> right = t2;

    x -> height = max(height(x -> left), height(x -> right)) + 1;
    y -> height = max(height(y -> left), height(y -> right)) + 1;

    return y;
}

struct node * insertNode(struct node * root, int data){
    if(root == NULL){
        return createNode(data);
    }

    if(data < root -> value){
        root -> left = insertNode(root -> left, data);
    }
    else if(data > root -> value){
        root -> right = insertNode(root -> right, data);
    }
    else{
        return root;
    }

    root -> height = max(height(root -> left), height(root -> right)) + 1;
    int bal = getBalance(root);

    if(bal > 1 && data < root -> left -> value){
        return rightRotate(root);
    }
    if(bal > 1 && data > root -> left -> value){
        root -> left = leftRotate(root -> left);
        return rightRotate(root);
    }

    if(bal < -1 && data < root -> right -> value){
        root -> right = rightRotate(root -> right);
        return leftRotate(root);
    }
    if(bal < -1 && data > root -> right -> value){
        return leftRotate(root);
    }
}

struct node * deleteNode(struct node * root, int data){
    if(root == NULL){
        return NULL;
    }

    if(data < root -> value){
        root -> left = deleteNode(root -> left, data);
    }
    else if(data > root -> value){
        root -> right = deleteNode(root -> right, data);
    }
    else{
        if((root -> left == NULL) || (root -> right == NULL)){
            struct node * temp;
            if(root -> left != NULL){
                temp = root -> left;
            }
            else{
                temp = root -> right;
            }

            if(temp == NULL){
                temp = root;
                root = NULL;
            }
            else{
                *root = *temp;
            }
            free(temp);
        }

        else{
            struct node * temp = minValue(root -> right);
            root -> value = temp -> value;
            root -> right = deleteNode(root -> right, temp -> value);
        }
    }

    root -> height = max(height(root -> left), height(root -> right)) + 1;
    int bal = getBalance(root);

    if(bal > 1 && getBalance(root -> left) < 0){
        root -> left = leftRotate(root -> left);
        return rightRotate(root);
    }
    if(bal > 1 && getBalance(root -> left) >= 0){
        return rightRotate(root);
    }

    if(bal < -1 && getBalance(root -> right) > 0){
        root -> right = rightRotate(root -> right);
        return leftRotate(root);
    }
    if(bal < -1 && getBalance(root -> right) <= 0){
        return leftRotate(root);
    }

    return root;
}

int main(){
    struct node * root = NULL;
    root = insertNode(root, 30);

    insertNode(root, 60);
    insertNode(root, 25);
    insertNode(root, 80);
    insertNode(root, 380);
    insertNode(root, 20);
    insertNode(root, 50);
    insertNode(root, 40);

    preOrder(root);

    return 0;
}