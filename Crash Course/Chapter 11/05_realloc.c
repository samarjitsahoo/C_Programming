#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *ptr;
    
    // Allocate memory
    ptr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (ptr == NULL) {
        perror("Error allocating memory");
        return 1; // Exit with error code
    }
    
    // Initialize the first element and print it
    ptr[0] = 3;
    printf("Value at index 0: %d\n", ptr[0]);
    
    // Resize the array
    int *temp = (int *)realloc(ptr, 10 * sizeof(int));
    
    // Check if realloc was successful
    if (temp == NULL) {
        // If realloc fails, free the original memory and exit
        free(ptr);
        perror("Error reallocating memory");
        return 1; // Exit with error code
    }
    
    // Reassign the pointer if realloc was successful
    ptr = temp;
    
    // Print the value at index 0 after realloc
    printf("Value at index 0 after realloc: %d\n", ptr[0]);
    
    // Free the allocated memory
    free(ptr);

    return 0;
}