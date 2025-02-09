#include <stdio.h>

int main() {
    int num = 10;
    
    int *ptr = &num;
    
    printf("Address of num using &num: %p\n", (void*)&num);
    printf("Address of num using ptr: %p\n", (void*)ptr);
    
    *ptr = 20;
    
    printf("Value of num after modification: %d\n", num);
    
    return 0;
}
