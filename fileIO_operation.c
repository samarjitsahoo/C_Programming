#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    // char * c = fgetc(ptr);
    // printf("The character I read was %c\n", c );
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c );


    char str[4];
    fgets(str, 5, ptr);
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("this is harry",ptr);



    fclose(ptr);
    return 0;
}
