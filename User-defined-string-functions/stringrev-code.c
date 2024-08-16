#include <stdio.h>

// Code for Finding reverse of string

// Main function

void main()
{

// Declaring strings
  char i, str1[100], str2[100];

// Taking Input
  printf("Enter a string:");
  gets(str1);

  int l = 0;

// Finding Length
  for (i = 0; str1[i] != '\0'; ++i)
  {
    l++;
  }

// Finding Reverse
  printf("Reversed str is:");
  for (i = l - 1; i >= 0; i--)
  {
    printf("%c", str1[i]);
  }
}