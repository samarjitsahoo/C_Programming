#include <stdio.h>
int main( ) { 
int num ;
printf ( "Enter a number less than 10 " ); 
scanf ( "%d", &num );
 if ( num <= 10 ){  
printf ( "Number is less than 10");}
else{
printf("Number is greater than 10");
}
return 0; 
}