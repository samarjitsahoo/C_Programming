#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // if (ptr == NULL) {
    //     perror("Failed to allocate memory");
    //     return 1;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n", i, ptr[i]);
    // }

    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        perror("Failed to allocate memory");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    // Allocate a temporary pointer to handle realloc
    int *temp = (int *)realloc(ptr, n * sizeof(int));
    if (temp == NULL) {
        // If realloc fails, free the original memory and handle the error
        free(ptr);
        perror("Failed to reallocate memory");
        return 1;
    }
    
    // Reassign the pointer if realloc was successful
    ptr = temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}