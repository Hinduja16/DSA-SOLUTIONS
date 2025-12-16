#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *temp;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    temp = head;
    head = head->next;
    free(temp);

    printf("Node deleted from beginning");
    return 0;
}

