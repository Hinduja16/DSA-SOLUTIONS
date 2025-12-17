#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *temp, *prev;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    temp = head;
    prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev != NULL)
        prev->next = NULL;

    free(temp);
    printf("Deleted from end");
    return 0;
}

