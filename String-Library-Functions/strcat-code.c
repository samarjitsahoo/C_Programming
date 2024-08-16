#include <stdio.h>

// For string functions
#include <string.h>

// Code for Concatenating strings

// Main function

void main()
{

// Declaring Strings
  char i, j, str1[100], str2[100];

// Taking Input
  printf("Enter first string:");
  gets(str1);

  printf("Enter second string:");
  gets(str2);

// Concatenating Strings
  strcat(str1, str2);

  printf("Concatenated string is: %s", str1);
}