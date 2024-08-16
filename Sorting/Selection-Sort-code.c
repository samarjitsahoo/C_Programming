#include <stdio.h>

#include <stdlib.h>

/* Function for selection sort using C. */

// Function for Selection sort

void selectionSort (int *s,  int length)
{

  int min, t;

  for (int i = 0; i < length; i++)
  {

    min = i;

    for (int j = i + 1; j < length; j++)
    {

      if (s[j] < s[min])
      {

        min = j;
      }
    }

    t = s[min];

    s[min] = s[i];
    s[i] = t;
  }
}

// Main function

void main()
{

  int *arr, n, i;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  arr = (int *)calloc(n, sizeof(int));

  for (i = 0; i < n; i++)
  {

    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Sorted array is: ");

  selectionSort (arr, n);

  for (i = 0; i < n; i++)
  {
    printf("%d\t", *(arr + i));
  }
}