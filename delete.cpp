#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int pos = 2, i;

    for (i = pos; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

