#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *left, *right;
};

struct node *createNode(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->left = newNode->right = NULL;

    return newNode;
}

struct node *insert(struct node *root, int value)
{
    if (root == NULL)
        return createNode(value);

    if (value < root->value)
        root->left = insert(root->left, value);
    else if (value > root->value)
        root->right = insert(root->right, value);

    return root;
}

struct node *minValue(struct node *root)
{
    struct node *current = root;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

struct node *deleteNode(struct node *root, int value)
{
    if (root == NULL)
    {
        return root;
    }

    if (value < root->value)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->value)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp = minValue(root->right);
            root->value = temp->value;
            root->right = deleteNode(root->right, temp->value);
        }
    }

    root-> height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->value);
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 30);

    insert(root, 60);
    insert(root, 25);
    insert(root, 80);
    insert(root, 380);
    insert(root, 20);
    insert(root, 50);
    insert(root, 40);

    // preOrder(root);

    root = deleteNode(root, 380);
    root = deleteNode(root, 60);

    preOrder(root);

    return 0;
}
