#include <stdio.h>

int str_length(char *str) {
    int length = 0;
    
    while (*str != '\0') {
        length++;
        str++;
    }
    
    return length;
}

int main() {
    char *str = "Hello, world!";
    
    printf("String using pointer traversal: ");
    char *ptr = str;
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++; 
    }
    printf("\n");

    char user_str[100];
    printf("Enter a string: ");
    fgets(user_str, sizeof(user_str), stdin);
    
    int length = str_length(user_str);
    printf("Length of the entered string: %d\n", length);
    
    return 0;
}
