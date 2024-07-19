#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    n = 10;
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

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}