#include <stdio.h>
struct book {
char title[20];  
char Author_name[100];  
float price;  
int pages;
} ;
int main( ) {
struct book book1 = { "Cprogramming", "ABC", 130.00, 550 } ;
printf ( "\n Title = %s", book1.title ) ;
printf ( "\n Name = %s", book1.Author_name ) ;
printf ( "\n Price = %.2f",book1.price ) ; 
printf ( "\n Pages = %d", book1.pages ) ;
return 0;}