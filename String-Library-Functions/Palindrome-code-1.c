#include <stdio.h>

// For string functions
#include <string.h>

// Code for checking palindrome string

// Main function

void main()
{

// Declaring strings
  char str1[100];
  char *str2;

  int i, l, temp = 0;

// Taking Input
  printf("Enter a string:");
  gets(str1);

// Length of string
  l = strlen(str1);

// Reversing string
  str2 = strrev(str1);

// Traversing Strings
  for (i = 0; i < l; i++)
  {
    if (str1[i] != str2[i])
    {
      temp = 1;
    }
  }
// Checking
  if (temp == 0)
  {
    printf("String is palindrome");
  }
  else
  {
    printf("String is not palindrome");
  }

}