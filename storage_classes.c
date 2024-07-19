#include <stdio.h>
#include "temp.c"
int myfunc(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar ++;
    printf("The myVar is %d\n", myVar);

    // myVar = a+b;
    return myVar;
}

int main()
{
    int a;
    int b;
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    register int myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    // printf("The myVar is %d\n", myVar);

    return 0;
}
