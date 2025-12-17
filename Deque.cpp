#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

void insertRear(int x) {
    if (rear == MAX - 1) {
        printf("Deque Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    deque[++rear] = x;
}

void deleteFront() {
    if (front == -1 || front > rear) {
        printf("Deque Underflow\n");
        return;
    }
    printf("Deleted element: %d\n", deque[front++]);
}

void display() {
    int i;
    if (front == -1 || front > rear) {
        printf("Deque is empty\n");
        return;
    }
    for (i = front; i <= rear; i++)
        printf("%d ", deque[i]);
    printf("\n");
}

int main() {
    int n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        insertRear(x);
    }

    display();
    deleteFront();
    display();

    return 0;
}

