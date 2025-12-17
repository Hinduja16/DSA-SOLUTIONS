#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* createNode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int n, i, x;
    struct node *root = NULL, *queue[50];
    int front = 0, rear = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n == 0) return 0;

    scanf("%d", &x);
    root = createNode(x);
    queue[rear++] = root;

    for (i = 1; i < n; i++) {
        scanf("%d", &x);
        struct node* temp = createNode(x);
        queue[rear++] = temp;

        if (queue[front]->left == NULL)
            queue[front]->left = temp;
        else {
            queue[front]->right = temp;
            front++;
        }
    }

    printf("Inorder Traversal: ");
    inorder(root);

    return 0;
}

