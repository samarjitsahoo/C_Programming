#include <stdio.h>

int main() {
    int a = 4;
    int b = ++a; // Pre-increment a, and store the result in b
    int c = a++; // Post-increment a, and store the result in c

    printf("%d %d %d\n", c, b, a); // Print the results

    return 0;
}