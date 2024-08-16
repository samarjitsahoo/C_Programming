#include <stdio.h>

// Code for Finding length of string

// Main function

void main()
{

// Declaring variables
  char i, str[100];

  int l = 0;

// Taking Input
  printf("Enter a string:");
  gets(str);

// Finding length of string
  for (i = 0; str[i] != '\0'; ++i)
  {
    l++;

  }
  printf("Entered string %s length is: %d", str, l);
}