#include<stdio.h>
#include<string.h>
int main( ) { 
char  s[ ] = "Hello" ;
char  t[30] = "World" ;
strcat ( t, s ) ;
printf ( "String = %s", t ) ;
return 0;
}
//Output: string = HelloWorld