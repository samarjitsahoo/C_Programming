#include <stdio.h>

// Code for Finding length of string

// Main function

int main()
{
  // Variables Declarartion
  char Str[1000];
  int i;

  // Taking Input
  printf("Enter the String: ");
  scanf("%s", Str);

  // Finding length
  for (i = 0; Str[i] != '\0'; ++i);

  printf("Length of Str is %d", i);

  return 0;
}