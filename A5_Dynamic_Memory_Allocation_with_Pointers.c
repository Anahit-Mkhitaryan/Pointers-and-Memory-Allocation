#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed for single integer.\n");
        return 1;
    }

    *ptr = 25;
    printf("Value of allocated integer: %d\n", *ptr);

    int *arr = (int *)malloc(5 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed for array.\n");
        free(ptr);
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        *(arr + i) = (i + 1) * 10;
    }

    printf("Values in allocated array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }

    free(ptr);
    free(arr);

    return 0;
}
