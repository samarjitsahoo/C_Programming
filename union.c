#include <stdio.h>
#include <string.h>

union Book {
   int pages;
   float price;
   char title[20];
};

int main( ) {
   union Book b1;       
   b1.pages = 100;
   printf( "Pages: %d\n", b1.pages);
   b1.price = 250.5;
   printf( "Price : %.1f\n", b1.price);
   strcpy( b1.title, "C Programming");
   printf( "Title : %s\n", b1.title);

   return 0;
}