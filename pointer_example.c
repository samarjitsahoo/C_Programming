#include <stdio.h>

void ptrfunc(int *ptr)
{
    *ptr = 8;
}

int main()
{
    int x = 5;

    printf("x = %d\n", x);  // Print the initial value of x
    ptrfunc(&x);            // Call ptrfunc to modify x
    printf("x = %d\n", x);  // Print the modified value of x
    
    return 0;
}
