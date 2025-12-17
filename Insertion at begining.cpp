#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode;
    int value;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = head;
    head = newnode;

    printf("Node inserted at beginning: %d", head->data);
    return 0;
}

