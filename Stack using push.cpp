#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int main() {
    int x;

    printf("Enter element to push: ");
    scanf("%d", &x);

    if (top == MAX - 1)
        printf("Stack Overflow");
    else {
        stack[++top] = x;
        printf("Element pushed successfully");
    }

    return 0;
}

