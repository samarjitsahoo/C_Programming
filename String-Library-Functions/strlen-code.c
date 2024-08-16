#include <stdio.h>

// For string functions
#include <string.h>

// Code for Finding length of string

// Main function

void main()
{

// Declaring String
  char str[100];

  int l;

// Taking Input
  printf("Enter a string:");
  gets(str);

// Finding Length of string
  l = strlen(str);

  printf("Entered string  length is: %d", l);
}