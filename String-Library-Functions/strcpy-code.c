#include <stdio.h>

// For string functions
#include <string.h>

// Code for Copying from one string to another

// Main function

void main()
{

// Declaring Strings
  char i, str1[100], str2[100];

// Taking Input
  printf("Enter a string:");
  gets(str1);

// Copying String
  strcpy(str2, str1);

  printf("Entered string is %s\nCopied str is %s", str1, str2);
}