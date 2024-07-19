#include<stdio.h>

int main()
{	
	printf("Pointer Basics\n");
	int a = 76;
	int *ptra = &a; 
	int *ptr2 = NULL;

	printf("The Address of pointer is %p\n", &ptra);
	printf("The Address of a is %p\n", &a);  
	printf("The Address of a is %p\n", ptra);
	printf("The Address of some garbage is %p\n", ptr2);
	printf("The Value of a is %d\n", *ptra);
	
	return 0;
}
