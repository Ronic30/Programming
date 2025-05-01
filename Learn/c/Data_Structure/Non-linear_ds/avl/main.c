#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int height;
    struct node * left, * right;
};

int height(struct node * n){
    if(n == NULL){
        return 0;
    }
    return n -> height;
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int getBalance(struct node * n){
  if(n == NULL){
    return 0;
  }
  return height(n -> left) - height(n -> right);
}

struct node * createNode(int data){
  struct node * newNode = (struct node *)malloc(sizeof(struct node));
  newNode -> data = data;
  newNode -> height = 1;
  newNode -> left = newNode -> right = NULL;

  return newNode;
}

// RIGHT ROTATION--------

struct node * rightRotate(struct node * y){
  struct node * x = y -> left;
  struct node * t2 = x -> right;

  x -> right = y;
  y -> left = t2;

  y -> height = max(height(y -> left), height(y -> right)) + 1;
  x -> height = max(height(x -> left), height(x -> right)) + 1;

  return x;
}

// LEFT ROTATION---------

struct node * leftRotate(struct node * x){
  struct node * y = x -> right;
  struct node * t2 = y -> left;

  y -> left = x;
  x -> right = t2;

  x -> height = max(height(x -> left), height(x -> right)) + 1;
  y -> height = max(height(y -> left), height(y -> right)) + 1;

  return y;
}

// INSERTION--------------
struct node * insertion(struct node * root, int value){

  if(root == NULL){
    return createNode(value);
  }

  if(value < root -> data){
    root -> left = insertion(root -> left, value);
  }
  if(value > root -> data){
    root -> right = insertion(root -> right, value);
  }
  else{
    return root;
  }

  // BALANCING THE TREE----

  root -> height =  max(height(root -> left), height(root -> right)) + 1;
  int balance = getBalance(root);

  if(balance > 1 && value < root -> left -> data){
    return rightRotate(root);
  }
  if(balance > 1 && value > root -> left -> data){
    root -> left = leftRotate(root -> left);
    return rightRotate(root);
  }

  if(balance < -1 && value < root -> right -> data){
    root -> right = rightRotate(root -> right);
    return leftRotate(root);
  }
  if(balance < -1 && value > root -> right -> data){
    return leftRotate(root);
  }

  return root;
}

// DELETION---------------
struct node * delete(struct node * root, int value){
  if(root == NULL){
    return root;
  }

  if(value < root -> data){
    root -> left = delete(root -> left, value);
  }
  else if(value > root -> data){
    root -> right = delete(root -> right, value);
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
    }
  }
}

void inOrder(struct node * root){
  if(root == NULL){
    return ;
  }

  inOrder(root -> left);
  printf("%d ", root -> data);
  inOrder(root -> right);
}

int main(){
  struct node * root = createNode(11);

  root = insertion(root, 20);
  root = insertion(root, 34);
  root = insertion(root, 5);
  root = insertion(root, 2);
  root = insertion(root, 9);
  root = insertion(root, 12);
  root = insertion(root, 7);

  inOrder(root);

  return 0;
}