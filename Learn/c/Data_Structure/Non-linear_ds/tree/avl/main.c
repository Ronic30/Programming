#include <stdio.h>
#include <stdlib.h>

struct node {
    int value, height;
    struct node *left, *right;
};

// Utility function to get the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Create a new node with given data
struct node *createNode(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = data;
    newNode->left = newNode->right = NULL;
    newNode->height = 1;  // Height of a new node is 1
    return newNode;
}

// Get the height of a node
int height(struct node *n) {
    if (n == NULL){
        return 0;}
    return n->height;
}

// Get balance factor of a node
int getBalance(struct node *n) {
    if (n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}

// Perform a right rotation
struct node *rightRotate(struct node *y) {
    struct node *x = y->left;
    struct node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Perform a left rotation
struct node *leftRotate(struct node *x) {
    struct node *y = x->right;
    struct node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// Insert a node into the AVL tree
struct node *insertNode(struct node *root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->value)
        root->left = insertNode(root->left, data);
    else if (data > root->value)
        root->right = insertNode(root->right, data);
    else
        return root;

    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);

    // Balancing the tree
    if (balance > 1 && data < root->left->value)
        return rightRotate(root);

    if (balance < -1 && data > root->right->value)
        return leftRotate(root);

    if (balance > 1 && data > root->left->value) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && data < root->right->value) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Find node with minimum value
struct node *minValue(struct node *root) {
    struct node *current = root;
    while (current->left != NULL)
        current = current->left;
    return current;
}

// Delete a node from the AVL tree
struct node *deleteNode(struct node *root, int data) {
    if (root == NULL)
        return NULL;

    if (data < root->value)
        root->left = deleteNode(root->left, data);
    else if (data > root->value)
        root->right = deleteNode(root->right, data);
    else {
        // Node with only one child or no child
        if ((root->left == NULL) || (root->right == NULL)) {
            struct node *temp = root->left ? root->left : root->right;

            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else {
                *root = *temp;
            }

            free(temp);
        } else {
            // Node with two children
            struct node *temp = minValue(root->right);
            root->value = temp->value;
            root->right = deleteNode(root->right, temp->value);
        }
    }

    if (root == NULL)
        return root;

    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);

    // Balancing
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Preorder traversal
void preOrder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->value);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    struct node *root = NULL;
    root = insertNode(root, 30);
    root = insertNode(root, 60);
    root = insertNode(root, 25);
    root = insertNode(root, 80);
    root = insertNode(root, 380);
    root = insertNode(root, 20);
    root = insertNode(root, 50);
    root = insertNode(root, 40);

    printf("Preorder traversal of AVL tree:\n");
    preOrder(root);
    printf("\n");

    // Example of deletion
    root = deleteNode(root, 60);
    printf("Preorder after deleting 60:\n");
    preOrder(root);
    printf("\n");

    return 0;
}
