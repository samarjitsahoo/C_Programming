#include<stdio.h>
#include<string.h>
int main( ) { 
char  s[ ] = "CodeWithHarry" ;
char  t[20] ;
strcpy ( t, s ) ;
printf ( "\n Source string = %s", s ) ;
printf ( "\n Target string = %s", t ) ; }
//And here is the output...
//Source string = CodeWithHarry
//Target string = CodeWithHarry