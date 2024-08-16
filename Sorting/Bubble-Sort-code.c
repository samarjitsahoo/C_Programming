#include <stdio.h>

#include <stdlib.h>

/* Write the function for Bubble sort using C.*/

// Function for Bubble sort

void bubbleSort (int *S,  int length)
{
  int isSorted = 0;
  while (!isSorted)
  {
    isSorted = 1;
    for (int i = 0; i < length - 1; i++)
    {
      if (S[i] > S[i + 1])
      {
        int temp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = temp;
        isSorted = 0;
      }
    }
    length--;
  }
}

// Main Function

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

// Calling Function
  bubbleSort (arr, n);

  for (i = 0; i < n; i++)
  {
    printf("%d\t ", *(arr + i));
  }

}




















































































































































































































