#include <stdio.h>

// Code for Copying string

// Main function

void main()
{

// Declaring string
  char i, str1[100], str2[100];

// Taking string as input
  printf("Enter a string:");
  gets(str1);

// Copying string
  for (i = 0; str1[i] != '\0'; ++i)
  {
    str2[i] = str1[i];
  }
  str2[i] = '\0';

  printf("Entered string is %s\nCopied str is %s", str1, str2);
}