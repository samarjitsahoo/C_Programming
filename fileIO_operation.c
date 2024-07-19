#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    
    if (ptr == NULL) {
        perror("Failed to open file");
        return 1;
    }

    char str[5]; // Allocate one extra space for the null terminator

    // Read up to 4 characters (leaving space for null terminator)
    if (fgets(str, sizeof(str), ptr) != NULL) {
        printf("The string is %s\n", str);
    } else {
        printf("Failed to read from file or end of file reached.\n");
    }

    fclose(ptr);
    return 0;
}