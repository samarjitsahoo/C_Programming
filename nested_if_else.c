#include <stdio.h>
int main( ) { 
int a;
printf ( "Enter either 0 or 1 " ) ; 
scanf ( "%d", &a ) ;
 if ( a == 1 ){ 
 printf ( "Number 1 is entered!" ) ;  }
else  { 
if ( a == 0 ){   
printf ( "Number 0 is entered" ) ;}  
else {  
printf ( "Wrong Input" ) ;  }
}
return 0;
}