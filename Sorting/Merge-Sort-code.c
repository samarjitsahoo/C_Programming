#include <stdio.h>

#include <stdlib.h>

/* Write the function for merge sort using C.*/

// Prototype for function merge

void merge(int *, int *, int, int, int);

// Function for Merge Sort

void mergesort(int *a, int *b, int low, int high)
{

  int pivot;

  if (low < high)
  {

    pivot = (low + high) / 2;

    mergesort(a, b, low, pivot);

    mergesort(a, b, pivot + 1, high);

    merge(a, b, low, pivot, high);
  }
}

// Function for merging sorted array

void merge(int *a, int *b, int low, int pivot, int high)
{

  int h, i, j, k;
  h = low;
  i = low;
  j = pivot + 1;

  while ((h <= pivot) && (j <= high))
  {

    if (a[h] <= a[j])
    {
      b[i] = a[h];
      h++;
    }

    else
    {
      b[i] = a[j];
      j++;
    }
    i++;
  }

  if (h > pivot)
  {
    for (k = j; k <= high; k++)
    {
      b[i] = a[k];
      i++;
    }
  }

  else
  {

    for (k = h; k <= pivot; k++)
    {
      b[i] = a[k];
      i++;
    }
  }
  for (k = low; k <= high; k++)
    a[k] = b[k];
}

// Main function

void main()
{

  int *arr, *store, n, i;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  arr = (int *)calloc(n, sizeof(int));

  store = (int *)calloc(n, sizeof(int));

  for (i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Sorted array is: ");

  mergesort (arr, store, 0, n - 1);

  for (i = 0; i < n; i++)
  {
    printf("%d\t ", *(arr + i));
  }
}




















































































































































































































