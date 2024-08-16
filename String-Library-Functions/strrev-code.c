#include <stdio.h>

// For string functions
#include <string.h>

// Code for Finding Reverse of string

// Main function

void main()
{

// Variable Declaration
  char str[100];

// Taking Input
  printf("Enter a string:");
  gets(str);

// Reversing String
  printf("Reversed string is: %s", strrev(str));
}