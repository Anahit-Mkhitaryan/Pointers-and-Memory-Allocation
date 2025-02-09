#include <stdio.h>

int main() {
    int num = 10;
    
    int *ptr = &num;
    
    int **dptr = &ptr;
    
    printf("Value of num using pointer ptr: %d\n", *ptr);      // Dereferencing ptr
    printf("Value of num using double-pointer dptr: %d\n", **dptr);  // Dereferencing dptr twice
    
    return 0;
}
