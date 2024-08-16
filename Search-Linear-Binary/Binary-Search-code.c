#include <stdio.h>

#include <stdlib.h>

// Creating recursive function for binary search

int binarysearch(int *a, int start, int end, int key)
{

// checking condition
  if (start > end)
    return -1;

  int mid = (start + end) / 2;

  if (a[mid] == key)
  {
    return mid;
  }
  else if (a[mid] > key)
  {
    return binarysearch(a, start, mid - 1, key);
  }
  else
  {
    return binarysearch(a, mid + 1, end, key);
  }
}

// Main Function
void main()
{

  int *arr, i, key, n;

  printf("Enter number of elements:");
  scanf("%d", &n);

  arr = (int *)calloc(n, sizeof(int));

  for ( i = 0; i < n; i++)
  {
    printf("Element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

// Key to be found
  printf("Enter key to find:");
  scanf("%d", &key);

// Calling Function
  int pos = binarysearch(arr, 0, n, key);

// Checking Condition

  if (pos != -1)
    printf("Element found at: %d", pos + 1);

  else
    printf("Element not found");
}