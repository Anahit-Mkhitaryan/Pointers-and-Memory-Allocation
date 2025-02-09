#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    int *ptr = arr;

    printf("Original array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }

    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }

    printf("\nModified array using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    printf("\nModified array using array name:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
