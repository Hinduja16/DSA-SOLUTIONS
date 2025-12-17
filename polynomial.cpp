#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff;
    int power;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d %d", &newnode->coeff, &newnode->power);
        newnode->next = NULL;

        if (head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("Polynomial: ");
    temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->power);
        temp = temp->next;
        if (temp != NULL)
            printf(" + ");
    }

    return 0;
}

