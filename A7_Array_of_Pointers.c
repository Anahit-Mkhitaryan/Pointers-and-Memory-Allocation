#include <stdio.h>

int main() {
    char *arr[] = {"Hello", "World", "Pointers", "in", "C"};

    printf("Original array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", *(arr + i));
    }

    arr[2] = "Modified String";

    printf("\nUpdated array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", *(arr + i));
    }

    return 0;
}
