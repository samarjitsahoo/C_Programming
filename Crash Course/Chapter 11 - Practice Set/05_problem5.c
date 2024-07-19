#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    
    // Allocate initial memory
    ptr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (ptr == NULL) {
        perror("Error allocating memory");
        return 1; // Exit with error code
    }

    // Initialize the array
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    // Print the initial array
    printf("The Array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // Resize the array
    n = 15;
    int *temp = (int *)realloc(ptr, n * sizeof(int));
    
    // Check if realloc was successful
    if (temp == NULL) {
        // If realloc fails, free the original memory and exit
        free(ptr);
        perror("Error reallocating memory");
        return 1; // Exit with error code
    }

    // Reassign the pointer if realloc was successful
    ptr = temp;

    // Initialize the newly allocated memory
    for (int i = 10; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    // Print the resized array
    printf("The Array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
